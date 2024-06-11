import { MiddlewareHandler } from "hono";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import { getClient } from "..";
import { httpStatus } from "../../../common/httpStatus";
import { StatusCode } from "hono/utils/http-status";
import {
  PrismaClient,
  Prisma,
  gameMode
} from "../../../common/node_modules/@prisma/client/edge";

//@ts-ignore
import { aes_gcm_decrypt } from "crypto-aes-gcm";
import {
  Connection,
  Keypair,
  PublicKey,
  SystemProgram,
  Transaction,
  clusterApiUrl,
} from "@solana/web3.js";
import { ApiError, convertToken } from "../../../common/utils";
import {
  ASSOCIATED_TOKEN_PROGRAM_ID,
  MintLayout,
  TOKEN_PROGRAM_ID,
  createAssociatedTokenAccountInstruction,
  createInitializeMintInstruction,
  createMintToInstruction,
  getAssociatedTokenAddress,
  getMinimumBalanceForRentExemptMint,
} from "@solana/spl-token";
import {
  createCreateMasterEditionV3Instruction,
  createCreateMetadataAccountV3Instruction,
} from "../utils/metadata";

import { getEyeClass, getNeckClass } from "../utils/cyborgs";
import { Redis } from "@upstash/redis/cloudflare";
import { RewardToken } from "../utils/constants";
import { cors } from "hono/cors";

const TOKEN_METADATA_PROGRAM_ID = new PublicKey(
  "metaqbxxUerdq28cj1RbAWkYQm3ybzjb6a8bt518x1s"
);

export function random(min: number, max: number) {
  const range = max - min + 1;
  const bytes_needed = Math.ceil(Math.log2(range) / 8);
  const cutoff = Math.floor(256 ** bytes_needed / range) * range;
  const bytes = new Uint8Array(bytes_needed);
  let value;
  do {
    crypto.getRandomValues(bytes);
    value = bytes.reduce((acc, x, n) => acc + x * 256 ** n, 0);
  } while (value >= cutoff);
  return min + (value % range);
}

export const randomCyborgSequence = async () => {
  // Genrating randomness for assembling level-1 cyborg
  const genderRandomness = random(1, 2);
  const classRandomness = random(1, 5);
  const eyesRandomness = random(1, 30);
  const neckRandomness = random(1, 30);
  const originPlanetRandomness = random(1, 5);
  const skinRandomness = random(1, 6);

  // [originPlanet, gender, class, helmet, vest, eyes, neck]
  return [
    genderRandomness,
    originPlanetRandomness,
    classRandomness,
    eyesRandomness,
    neckRandomness,
    skinRandomness,
  ];
};

export const getUserWalletPkAndBalace = async (prisma: PrismaClient, userId: string) => {
  return await prisma.player.findUnique({
    where: {
      id: userId,
    },
    select: {
      wallet: true,
      walletNode: true,
      SGF1: true,
      SGF2: true
    },
  });
};

const mintNFTSolana = async (
  masterKeypair: Keypair,
  CyborgName: string,
  cyborgSequence: string
) => {
  const mintKey = Keypair.generate();
  const mintPubkeyKey = mintKey.publicKey;

  const [metadatakey] = PublicKey.findProgramAddressSync(
    [
      Buffer.from("metadata"),
      TOKEN_METADATA_PROGRAM_ID.toBuffer(),
      mintPubkeyKey.toBuffer(),
    ],
    TOKEN_METADATA_PROGRAM_ID
  );

  const [masterKey] = PublicKey.findProgramAddressSync(
    [
      Buffer.from("metadata"),
      TOKEN_METADATA_PROGRAM_ID.toBuffer(),
      mintPubkeyKey.toBuffer(),
      Buffer.from("edition"),
    ],
    TOKEN_METADATA_PROGRAM_ID
  );

  // NFT Mint token account
  let mintTokenAccount;

  const connection = new Connection(clusterApiUrl("devnet"));

  const mintRentExempte = await getMinimumBalanceForRentExemptMint(connection);
  const tx = new Transaction();

  mintTokenAccount = await getAssociatedTokenAddress(
    mintPubkeyKey,
    masterKeypair.publicKey, // owner
    false
  );

  tx.add(
    SystemProgram.createAccount({
      fromPubkey: masterKeypair.publicKey, // The account that will transfer lamports(for rent exempt) to the created account and also get allocated as authority of created account
      newAccountPubkey: mintPubkeyKey,
      space: MintLayout.span,
      lamports: mintRentExempte,
      programId: TOKEN_PROGRAM_ID,
    }),

    createInitializeMintInstruction(
      mintPubkeyKey,
      0,
      masterKeypair.publicKey,
      masterKeypair.publicKey,
      TOKEN_PROGRAM_ID
    ),

    createAssociatedTokenAccountInstruction(
      masterKeypair.publicKey, // payer
      mintTokenAccount, // ata
      masterKeypair.publicKey, // owner
      mintPubkeyKey, // mint
      TOKEN_PROGRAM_ID,
      ASSOCIATED_TOKEN_PROGRAM_ID
    ),

    createMintToInstruction(
      mintPubkeyKey, // mint
      mintTokenAccount, // ata
      masterKeypair.publicKey, // authority of the mint
      1,
      [],
      TOKEN_PROGRAM_ID
    )
  );

  // Creating metadata account
  const createMetadataV3 = createCreateMetadataAccountV3Instruction(
    {
      metadata: metadatakey,
      mint: mintPubkeyKey,
      mintAuthority: masterKeypair.publicKey,
      payer: masterKeypair.publicKey,
      updateAuthority: masterKeypair.publicKey, // update authority here is imp if we want to update the metadata in future
    },
    CyborgName,
    cyborgSequence
  );

  // Creating master edition
  const createMasterEditionV3 = createCreateMasterEditionV3Instruction({
    edition: masterKey,
    mint: mintPubkeyKey,
    updateAuthority: masterKeypair.publicKey,
    mintAuthority: masterKeypair.publicKey,
    payer: masterKeypair.publicKey,
    metadata: metadatakey,
  });

  tx.add(createMetadataV3, createMasterEditionV3);

  createMasterEditionV3.keys.push({
    pubkey: new PublicKey(mintTokenAccount),
    isSigner: false,
    isWritable: false,
  });

  tx.feePayer = masterKeypair.publicKey;

  const txHash = await connection.sendTransaction(tx, [masterKeypair, mintKey]);
  return txHash;
};

const saveCyborgMetadata = async (
  redis: Redis,
  prisma: PrismaClient,
  metadata: any,
  userID: string,
  costToken : RewardToken
) => {

  let mode : gameMode = gameMode.normal; // tournament

  let SGF1 = 0;
  let SGF2 = 0;

  if(costToken === 0){
    SGF1 = convertToken(200);
  }else{
    SGF2 = convertToken(200);
    mode = gameMode.tournament
  }

  // fetch id from redis
  const cyborgID = await redis.incr("cyborgID");

  const cyborgBodyPart: Prisma.BodyPartCreateInput = {
    originPlanet: {
      name: metadata.attributes[0].value,
    },
    gender: metadata.attributes[1].value,
    helmet: metadata.attributes[3].value,
    vest: metadata.attributes[4].value,
    eye: {
      name: metadata.attributes[5].value,
      class: getEyeClass(metadata.attributes[5].value),
    },
    neck: {
      name: metadata.attributes[6].value,
      class: getNeckClass(metadata.attributes[6].value),
    },
    skin: metadata.attributes[7].value,
  };

  const cyborgTrait: Prisma.TraitsCreateInput = {
    class: metadata.attributes[2].value,
    bodyParts: cyborgBodyPart,
  };

  //create every type of quirk with no atrributes affected
  const stateBased: Prisma.QuirkCreateInput = {
    type: 1,
    attributes: [],
  };
  const criticalBased: Prisma.QuirkCreateInput = {
    type: 2,
    attributes: [],
  };
  const metaBased: Prisma.QuirkCreateInput = {
    type: 3,
    attributes: [],
  };
  const opponetBased: Prisma.QuirkCreateInput = {
    type: 4,
    attributes: [],
  };

  const cyborgData: Prisma.CyborgTCreateInput = {
    id: cyborgID, //Number(metadata.name.slice(8)), // cyborg number
    name: metadata.name,
    status: "Idle",
    cooldownPeriod: 0,
    trait: cyborgTrait,
    rank: metadata.attributes[8].value,
    level: parseInt(metadata.attributes[9].value),
    quirks: [stateBased, criticalBased, metaBased, opponetBased], // add every quirk type to quriks in cyborg data
    medal: ["Genesis"],
    stressPoint: parseFloat(metadata.attributes[12].value),
    lifePoint: parseFloat(metadata.attributes[13].value),
    health: parseFloat(metadata.attributes[14].value),
    attack: parseFloat(metadata.attributes[15].value),
    accuracy: parseFloat(metadata.attributes[16].value),
    criticalHit: parseFloat(metadata.attributes[17].value),
    speed: parseFloat(metadata.attributes[18].value),
    luck: parseFloat(metadata.attributes[19].value),
    persistence: parseFloat(metadata.attributes[20].value),
    energy: 24,
    xp: 0,
  };

  const CyborgAssets: Prisma.CyborgCreateInput = {
    cyborg: cyborgData,
    mode : mode, // mode for normal or tournament
    player: {
      //creating assets for player
      connect: {
        id: userID,
      },
    },
  };

  const deductionBalanceTx = prisma.player.update({
    where: {
      id: userID
    },
    data: {
      SGF1: {
        decrement: SGF1
      },
      SGF2 : {
        decrement : SGF2
      }
    }
  })

  const metadataSaveTx = prisma.cyborg.create({
    data: CyborgAssets,
  });

  const result = await prisma.$transaction([deductionBalanceTx, metadataSaveTx])

  return result[1];
};

export const mintBaseCyborg = async (
  redis: Redis,
  ctx: RuntimeCtx,
  prisma: PrismaClient,
  userId: string,
  costToken : RewardToken
) => {
  const userWallet = await getUserWalletPkAndBalace(prisma, userId);

  let playerBalance = userWallet?.SGF1!;

  if(costToken === 1) playerBalance = userWallet?.SGF2!; 

  if (playerBalance < 200) {
    throw new ApiError(httpStatus.BAD_REQUEST, "Not Enough Tokens");
  }
  
  if (userWallet!.walletNode.length < 0) {
    throw new ApiError(httpStatus.BAD_REQUEST, "game wallet not found");
  }

  // Fetch cyborgSequence metadata from R2
  // genrate randomly CyborgSequence
  const cyborgSequence = (await randomCyborgSequence()).join("_");
  console.log("Cyborg sequence found :: ", cyborgSequence);

  // @TODO Check if the sequence is already minted or not
  // for the same user && for the different user

  let cyborgMetadata: any = await (await ctx.env.CYBORG_METADATA.get(
    `${cyborgSequence}.json`
  ))!.json();

  // Constructing user's keypair by decypting secret(AES-GCM-256)
  const crypticUserKeypair = await aes_gcm_decrypt(
    userWallet!.walletNode,
    ctx.env.WORMHOLE
  );

  const keypair = Keypair.fromSecretKey(
    Uint8Array.from(crypticUserKeypair.split(","))
  );
  console.debug("keypair ::", keypair.publicKey.toString());

  // Save Cyborg Metadata && Deduct points from user's account
  await saveCyborgMetadata(redis,prisma, cyborgMetadata, userId , costToken);
  
  // Mint NFT on solana
  const cyborgMintTxHash = await mintNFTSolana(
    keypair,
    cyborgMetadata.name,
    cyborgSequence
  );

  console.log("Mint :: ", cyborgMintTxHash);

  return cyborgMetadata;
};

// tournament helper function\
/** returns if we are in weekend tournament mode or not */
const isTournament = () => {
  const date = new Date();
  const day = date.getDay();
  return day === 0 || day === 6;
}

export const nft: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
  // Extract user payload from context
  const userPayload = ctx.get("user");

  // Connect to Redis using environment configuration
  //@ts-ignore
  const redis = Redis.fromEnv(ctx.env);

  // Obtain a lock to prevent concurrent NFT minting for the same user
  const lockKey = `deductPoints:${userPayload.userId}`;
  const lockValue = Date.now().toString();
  const lockAcquired = await redis.set(lockKey, lockValue, {
    ex: 30, // Set expiry time of 30 seconds
    nx: true // Only set the lock if it does not already exist
  })

  // If lock was not acquired, throw an error indicating concurrent request
  if (!lockAcquired) {
    throw new ApiError(httpStatus.BAD_REQUEST, "Concurrent request detected");
  }

  const Tbool = isTournament();
  let costToken = RewardToken.SGF1;

  if(Tbool){
    costToken = RewardToken.SGF2;
  }

  const prisma = getClient(ctx.env.DATABASE_URL);
  const result = await mintBaseCyborg(redis,ctx, prisma, userPayload.userId, costToken);

  // Release lock
  await redis.del(lockKey);

  // Return a success response with the NFT metadata result
  return ctx.json({ result: result }, httpStatus.OK as StatusCode);
};

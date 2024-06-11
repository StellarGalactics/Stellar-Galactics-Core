import { MiddlewareHandler } from "hono";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import { getClient } from "..";
import { httpStatus } from "../../../common/httpStatus";
import { StatusCode } from "hono/utils/http-status";
import { getUserWalletByID } from "../../../common/service/user";
import { Keypair } from "@solana/web3.js";

// @ts-ignore
import { aes_gcm_encrypt } from "crypto-aes-gcm";

export const createOrGetGameWallet = async (
  ctx: RuntimeCtx,
  userId: string
) => {
  const prisma = getClient(ctx.env.DATABASE_URL);
  const userData = await getUserWalletByID(prisma, userId);

  if (userData) {

    if (userData.wallet.length !== 0) {
      return userData.wallet;
    }

    const newGameWallet = await generateSolanaKeypair(ctx);
    
    await prisma.player.update({
      where: {
        id: userId,
      },
      data: {
        wallet: newGameWallet[0],
        walletNode: newGameWallet[1],
      },
      select: {
        wallet: true,
      },
    });

    return newGameWallet[0];
  }
};

/**
 * Generate game wallet
 * Encrypt with AES-256
 * With decription key stores in cl secret enviroment (static)
 */
export const generateSolanaKeypair = async (ctx: RuntimeCtx) => {
  const newKeypair: Keypair = Keypair.generate();
  console.log(newKeypair.publicKey.toString());

  // encryption
  const ciphertext = await aes_gcm_encrypt(
    newKeypair.secretKey.toString(),
    ctx.env.WORMHOLE
  );

  // // decryption
  // const plaintext = await aesGcmDecrypt(ciphertext, c.env.WORMHOLE);
  // console.log(plaintext);

  return [newKeypair.publicKey.toString(), ciphertext];
};

export const wallet: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
  const userPayload = ctx.get("user");

  const result = await createOrGetGameWallet(ctx, userPayload.userId);

  // Return success response with result
  return ctx.json({ result: result }, httpStatus.OK as StatusCode);
};

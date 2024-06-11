import { AccountMeta, PublicKey, SystemProgram, TransactionInstruction } from "@solana/web3.js";
import * as MPLCoder from "../mpl"
import {TOKEN_PROGRAM_ID} from "@solana/spl-token";

type CreateMetadataAccountV3InstructionAccounts = {
  metadata: PublicKey;
  mint: PublicKey;
  mintAuthority: PublicKey;
  payer: PublicKey;
  updateAuthority: PublicKey;
  systemProgram?: PublicKey;
  rent?: PublicKey;
};

type CreateMasterEditionV3InstructionAccounts = {
  edition: PublicKey;
  mint: PublicKey;
  updateAuthority: PublicKey;
  mintAuthority: PublicKey;
  payer: PublicKey;
  metadata: PublicKey;
  tokenProgram?: PublicKey;
  systemProgram?: PublicKey;
  rent?: PublicKey;
};

/**
 * Create token metadata accountv3
 * @param accounts
 * @param programId
 * @returns
 */
export function createCreateMetadataAccountV3Instruction(
  accounts: CreateMetadataAccountV3InstructionAccounts,
  cyborgName: string,
  cyborgSequence: string,
  programId = new PublicKey(
    "metaqbxxUerdq28cj1RbAWkYQm3ybzjb6a8bt518x1s"
  )
) {
  const cyborgMetadata = {
    name: cyborgName,
    symbol: "SG",
    uri: `https://meta.stellargalactics.com/${cyborgSequence}.json`,
    sellerFeeBasisPoints: 500,
    creators: [
      {
        address: new PublicKey(
          "AfQSDK4nQUZrPvW7DxN9gxmRCa3xdKoGvPGkpKcLoh7X"
        ),
        verified: false,
        share: 50,
      },
      {
        address: new PublicKey(
          "59nhhKKwAs9WqR9wfMSaRuwSVU5DmURcL89CLWFHn7rz"
        ),
        verified: false,
        share: 50,
      },
    ],
    collection: null,
    uses: null,
  };

  const mpCoder = new MPLCoder.MplTokenMetadataInstructionCoder();
  const data = mpCoder.encode("createMetadataAccountV3", {
    data: cyborgMetadata,
    isMutable: true,
    collectionDetails: null,
  });

  const keys: AccountMeta[] = [
    {
      pubkey: accounts.metadata,
      isWritable: true,
      isSigner: false,
    },
    {
      pubkey: accounts.mint,
      isWritable: false,
      isSigner: false,
    },
    {
      pubkey: accounts.mintAuthority,
      isWritable: false,
      isSigner: true,
    },
    {
      pubkey: accounts.payer,
      isWritable: true,
      isSigner: true,
    },
    {
      pubkey: accounts.updateAuthority,
      isWritable: false,
      isSigner: false,
    },
    {
      pubkey: accounts.systemProgram ?? SystemProgram.programId,
      isWritable: false,
      isSigner: false,
    },
  ];

  if (accounts.rent != null) {
    keys.push({
      pubkey: accounts.rent,
      isWritable: false,
      isSigner: false,
    });
  }

  const ix = new TransactionInstruction({
    programId,
    keys,
    data,
  });
  return ix;
}

export function createCreateMasterEditionV3Instruction(
  accounts: CreateMasterEditionV3InstructionAccounts,
  programId = new PublicKey(
    "metaqbxxUerdq28cj1RbAWkYQm3ybzjb6a8bt518x1s"
  )
) {
  const data: Buffer = Buffer.from([17, 1, 1, 0, 0, 0, 0, 0, 0, 0]);
  const keys: AccountMeta[] = [
    {
      pubkey: accounts.edition,
      isWritable: true,
      isSigner: false,
    },
    {
      pubkey: accounts.mint,
      isWritable: true,
      isSigner: false,
    },
    {
      pubkey: accounts.updateAuthority,
      isWritable: false,
      isSigner: true,
    },
    {
      pubkey: accounts.mintAuthority,
      isWritable: false,
      isSigner: true,
    },
    {
      pubkey: accounts.payer,
      isWritable: true,
      isSigner: true,
    },
    {
      pubkey: accounts.metadata,
      isWritable: true,
      isSigner: false,
    },
    {
      pubkey: accounts.tokenProgram ?? TOKEN_PROGRAM_ID,
      isWritable: false,
      isSigner: false,
    },
    {
      pubkey: accounts.systemProgram ?? SystemProgram.programId,
      isWritable: false,
      isSigner: false,
    },
  ];

  if (accounts.rent != null) {
    keys.push({
      pubkey: accounts.rent,
      isWritable: false,
      isSigner: false,
    });
  }

  const ix = new TransactionInstruction({
    programId,
    keys,
    data,
  });
  return ix;
}

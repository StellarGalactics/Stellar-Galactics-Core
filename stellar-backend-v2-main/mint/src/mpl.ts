//@ts-nocheck

import * as B from "./buffer-layout"
import { InstructionCoder } from "@coral-xyz/anchor";

// export interface InstructionCoder {
//     encode(ixName: string, ix: any): Buffer;
// }

export class MplTokenMetadataInstructionCoder implements InstructionCoder {
  encode(ixName: string, ix: any): Buffer {
    switch (ixName) {
      case "createMasterEditionV3": {
        return encodeCreateMasterEditionV3(ix);
      }
      case "createMetadataAccountV3": {
        return encodeCreateMetadataAccountV3(ix);
      }
      default: {
        throw new Error(`Invalid instruction: ${ixName}`);
      }
    }
  }

  encodeState(_ixName: string, _ix: any): Buffer {
    throw new Error("MplTokenMetadata does not have state");
  }
}


function encodeCreateMasterEditionV3({ maxSupply }: any): Buffer {
  return encodeData(
    { createMasterEditionV3: { maxSupply } },
    1 + 1 + (maxSupply === null ? 0 : 8)
  );
}

function encodeCreateMetadataAccountV3({
  data,
  isMutable,
  collectionDetails,
}: any): Buffer {
  return encodeData(
    { createMetadataAccountV3: { data, isMutable, collectionDetails } },
    1 +
      4 +
      data.name.length +
      4 +
      data.symbol.length +
      4 +
      data.uri.length +
      2 +
      1 +
      (data.creators === null ? 0 : 4 + data.creators.length * 34) +
      1 +
      (data.collection === null ? 0 : 33) +
      1 +
      (data.uses === null ? 0 : 17) +
      1 +
      1 +
      (collectionDetails === null ? 0 : 9)
  );
}

const LAYOUT = B.union(B.u8("instruction"));

LAYOUT.addVariant(
  17,
  B.struct([B.option(B.u64(), "maxSupply")]),
  "createMasterEditionV3"
);
LAYOUT.addVariant(
  33,
  B.struct([
    B.struct(
      [
        B.utf8Str("name"),
        B.utf8Str("symbol"),
        B.utf8Str("uri"),
        B.u16("sellerFeeBasisPoints"),
        B.option(
          B.vec(
            B.struct([
              B.publicKey("address"),
              B.bool("verified"),
              B.u8("share"),
            ])
          ),
          "creators"
        ),
        B.option(
          B.struct([B.bool("verified"), B.publicKey("key")]),
          "collection"
        ),
        B.option(
          B.struct([
            ((p: string) => {
              const U = B.union(B.u8("discriminator"), null, p);
              U.addVariant(0, B.struct([]), "burn");
              U.addVariant(1, B.struct([]), "multiple");
              U.addVariant(2, B.struct([]), "single");
              return U;
            })("useMethod"),
            B.u64("remaining"),
            B.u64("total"),
          ]),
          "uses"
        ),
      ],
      "data"
    ),
    B.bool("isMutable"),
    B.option(
      ((p: string) => {
        const U = B.union(B.u8("discriminator"), null, p);
        U.addVariant(0, B.struct([B.u64("size")]), "v1");
        return U;
      })(),
      "collectionDetails"
    ),
  ]),
  "createMetadataAccountV3"
);

function encodeData(ix: any, span: number): Buffer {
  const b = Buffer.alloc(span);
  LAYOUT.encode(ix, b);
  return b;
}

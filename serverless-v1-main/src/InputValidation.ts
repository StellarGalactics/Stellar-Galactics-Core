import { ZionType } from "@prisma/client/edge";
import { z } from "zod";

export const CreateMine = z.object({
  id: z.number().array(),
  frontRow: z.number().array(),
  backRow: z.number().array(),
  position: z.optional(z.array(z.array(z.number()))),
});

export const CreateLoot = z.object({
  mineId: z.string(),
  id: z.number().array(),
  frontRow: z.number().array(),
  backRow: z.number().array(),
  position: z.optional(z.array(z.array(z.number()))),
});

export const CreateZion = z.object({
  id: z.string(),
  zion: z.nativeEnum(ZionType), //@TODO: need to find a way to direclty use prisma enum
  quirk: z.optional(z.array(z.number())),
});

export const ClaimZion = z.object({
  id: z.string(),
  zion: z.nativeEnum(ZionType),
  speedup : z.boolean()
})

export const ClaimLootBox = z.object({
  lootboxID : z.string(),
  speedup : z.boolean()
})

export const ClaimRankup = z.object({
  cyborgID : z.string(),
  speedup : z.boolean()
})

export const createWager = z.object({
  amount : z.number(),
  reRoll : z.boolean()
})

export const WagerWar = z.object({
  // sequences : z.string().array(),
  gameId : z.number(),
  // position : z.array(z.array(z.string()))
  frontRow : z.array(z.string()),
  backRow : z.array(z.string())
})

export const claimWager = z.object({
  gameId : z.number()
})
import { PrismaClient } from "@prisma/client/edge";

export const getUserByUsername = async (
  prisma: PrismaClient,
  username: string
) => {
  const result = await prisma.player.findUnique({
    where: {
      username: username,
    },
  });
  return result;
};


export const getUserWalletByID = async (
  prisma: PrismaClient,
  userId: string
) => {
  const result = await prisma.player.findUnique({
    where: {
      id: userId,
    },
    select: {
      wallet: true
    }
  });
  
  return result;
};

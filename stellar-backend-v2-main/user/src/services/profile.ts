import { getClient } from "..";
import type { MiddlewareHandler } from "hono";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import { httpStatus } from "../../../common/httpStatus";
import { StatusCode } from "hono/utils/http-status";

export const getUserProfile = async (ctx: RuntimeCtx, userId: string) => {
  // Get user profile
  const prisma = getClient(ctx.env.DATABASE_URL);
  return await prisma.player.findUnique({
    where: {
      id: userId,
    },
    select: {
      id: true,
      username: true,
      email: true,
      avatar: true,
      wallet: true,
      SGF1: true,
      SGF2 : true,
      rankupPoint: true,
      demo: true,
      activationCode: true
    },
  });
};

export const profile: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
  const userPayload = ctx.get("user");
  const result = await getUserProfile(ctx, userPayload.userId);
  
  //@ts-ignore
  result["activated"] = result!.activationCode.length > 0 ? true : false;
  //@ts-ignore
  delete result["activationCode"];

  // Return result success response
  return ctx.json({ result: result }, httpStatus.OK as StatusCode);
};

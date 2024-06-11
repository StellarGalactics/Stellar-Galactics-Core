import { MiddlewareHandler } from "hono";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import { activateSchema } from "../validation";
import { getClient } from "..";
import { httpStatus } from "../../../common/httpStatus";
import { StatusCode } from "hono/utils/http-status";
import { ApiError } from "../../../common/utils";
import { generateUserAuthJWT } from "../../../common/service/auth";

export const activateUserAccount = async (
  ctx: RuntimeCtx,
  userId: string,
  activationCode: string
) => {
  // Validate if the activation code is valid or not
  const value = await ctx.env.INVITE_CODE.get(activationCode);
  
  if (value === null) {
    throw new ApiError(httpStatus.BAD_REQUEST, "Invalid invite code");
  }

  if (value === "true") {
    throw new ApiError(httpStatus.BAD_REQUEST, "Invite code already used");
  }

  const prisma = getClient(ctx.env.DATABASE_URL);

  const result = await prisma.player.update({
    where: {
      id: userId,
    },
    data: {
      activationCode: activationCode,
    },
  });

  // Updat the activateCode to `true`
  await ctx.env.INVITE_CODE.put(activationCode, "true");

  return result;
};

export const activate: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
  const userPayload = ctx.get("user");

  const bodyParse = await ctx.req.json();
  const data = await activateSchema.parseAsync(bodyParse);

  const result = await activateUserAccount(ctx, userPayload.userId, data.activationCode);

      // @TODO: need to invalidate existing JWT token
    // Issuse new JWT token with new demo field `to true`
    const token = await generateUserAuthJWT(
      ctx,
      result.id,
      result.demo,
      result.activationCode.length > 0 ? true : false
  );

  // Add token to response header
  ctx.res.headers.append("Authorization", token);
  
  // Return success response
  return ctx.json({ success: true }, httpStatus.OK as StatusCode);
};

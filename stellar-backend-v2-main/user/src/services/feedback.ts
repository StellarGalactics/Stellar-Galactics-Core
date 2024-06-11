import { MiddlewareHandler } from "hono";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import { feedbackSchema } from "../validation";
import { getClient } from "..";
import { generateUserAuthJWT } from "../../../common/service/auth";
import { httpStatus } from "../../../common/httpStatus";
import { StatusCode } from "hono/utils/http-status";


export const updateFeedback = async (ctx: RuntimeCtx, userId: string, feedback: number) => {
  const prisma = getClient(ctx.env.DATABASE_URL);

  return await prisma.player.update({
    where: {
        id: userId,
    },
    data: {
        feedback: feedback,
        demo: true
    }
  });
}

export const feedback: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
    const userPayload = ctx.get("user");

    const bodyParse = await ctx.req.json();
    const data = await feedbackSchema.parseAsync(bodyParse);

    
    const result = await updateFeedback(ctx, userPayload.userId, data.feedback)
    
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

}
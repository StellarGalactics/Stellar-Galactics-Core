import { getClient } from "..";
import type { MiddlewareHandler } from "hono";
import {createUserSchema} from "../validation";
import { StatusCode } from "hono/utils/http-status";
import { httpStatus } from "../../../common/httpStatus";
import { ICreateUser } from "../../../common/interface";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import {generateUserAuthJWT} from "../../../common/service/auth"

/**
 * Creates a new user a.k.a player account.
 */
export const createUser = async (ctx: RuntimeCtx, data: ICreateUser) => {
    const prisma = getClient(ctx.env.DATABASE_URL);
    return await prisma.player.create({
      data: {
        username: data.username,
        email: data.email,
        password: data.password,
        activationCode: "ALPHA_RELEASE", // @TODO: Remove auto-fill activationCode
        SGF2: 1200000000000
      },
    });
};

/**
 * Registers a new user account.
 */
export const register: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
    // validate input body
    const bodyParse = await ctx.req.json();
    const data = await createUserSchema.parseAsync(bodyParse);

    const result = await createUser(ctx, data);
  
    // Generate JWT auth token; Can be used to auto-login after signup
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
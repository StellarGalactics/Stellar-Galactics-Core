import { getClient } from "..";
import type { MiddlewareHandler } from "hono";
import { RuntimeBinding, RuntimeCtx } from "../../../common/types";
import { authUserSchema } from "../validation";
import { getUserByUsername } from "../../../common/service/user";
import { ApiError } from "../../../common/utils";
import { httpStatus } from "../../../common/httpStatus";
import { generateUserAuthJWT, isPasswordMatch } from "../../../common/service/auth";
import { StatusCode } from "hono/utils/http-status";

/**
 * Validate the login credentials.
 */
export const loginUserWithEmailAndPassword = async (
  ctx: RuntimeCtx,
  username: string,
  password: string
) => {
  const prisma = getClient(ctx.env.DATABASE_URL);
  const user = await getUserByUsername(prisma, username);

  // password validation
  if (!user || !(await isPasswordMatch(user.password, password))) {
    throw new ApiError(httpStatus.UNAUTHORIZED, "Incorrect username or password");
  }

  return user;
};

export const login: MiddlewareHandler<RuntimeBinding> = async (ctx) => {
  // validate input body
  const bodyParse = await ctx.req.json();
  const data = await authUserSchema.parseAsync(bodyParse);

  const result = await loginUserWithEmailAndPassword(
    ctx,
    data.username,
    data.password
  );

  // Generate JWT auth token; Can be used to auto-login after login
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

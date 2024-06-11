import { RuntimeCtx } from "../types";
import { sign } from "@tsndr/cloudflare-worker-jwt";
import bcrypt from 'bcryptjs'

/**
 * Generates a JWT token for a user.
 * @param {RuntimeCtx} ctx - The current runtime context.
 * @param {string} userId - The user's ID.
 * @param {string} username - The user's username.
 * @param {string} email - The user's email address.
 * @param {boolean} demo - Indicates if the user is a demo user.
 * @param {boolean} activate - Indicates if the user account needs activation.
 * @returns {Promise<string>} - The generated JWT token.
 */
export const generateUserAuthJWT = async (
  ctx: RuntimeCtx,
  userId: string,
  demo: boolean,
  activate: boolean
): Promise<string> => {
  const token = await sign(
    { userId, demo, activate },
    ctx.env.VENGEANCE
  );
  return token;
};


export const isPasswordMatch = async (userPassword: string, password: string): Promise<boolean> => {
  return await bcrypt.compare(password, userPassword)
}

export const hashPassword = async (value: string): Promise<string> => {
  const hashedPassword = await bcrypt.hash(value, 8)
  return hashedPassword
}

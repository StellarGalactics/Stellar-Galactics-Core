import { z } from "zod";
import { hashPassword } from "../../common/service/auth";

export const createUserSchema = z
  .object({
    username: z
      .string()
      .regex(
        /^[a-z0-9_]{4,15}$/,
        "must be 4-15 characters, lowercase, and can only contains only letters, numbers and underscrores"
      ),
    email: z.string().email(),

    password: z
      .string()
      .regex(
        /^[a-z0-9_]{4,15}$/,
        "must be 4-15 characters, lowercase, and can only contains only letters, numbers and underscrores"
      )
      .transform(hashPassword),
  })
  .superRefine(({ username, password }, ctx) => {
    if (username === password) {
      ctx.addIssue({
        code: "custom",
        message: "The passwords should not be same as username",
        path: ["password"],
      });
    }
  });

export const authUserSchema = z.object({
  username: z
    .string()
    .regex(
      /^[a-z0-9_]{4,15}$/,
      "must be 4-15 characters, lowercase, and can only contains only letters, numbers and underscrores"
    ),
  password: z
    .string()
    .regex(
      /^[a-z0-9_]{4,15}$/,
      "must be 4-15 characters, lowercase, and can only contains only letters, numbers and underscrores"
    ),
});


export const feedbackSchema = z.object({
  feedback: z.number().gt(0).lte(10) // MAX 10
})

export const activateSchema = z.object({
  activationCode: z.string()
})

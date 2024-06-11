import { Hono } from "hono";
import { RuntimeBinding } from "../../common/types";
import { register, login, profile, feedback, activate } from "./services"
import { authMiddleware } from "../../common/middleware";
import { ApiError } from "../../common/utils";
import { httpStatus } from "../../common/httpStatus";

export const route = new Hono<RuntimeBinding>();


// Rememeber all the routes are prexies with `/v2/user`
route.get("/", async (ctx) => {
  return ctx.json({ timestamp: Date.now() });
});

route.post("/register", register);
route.post("/login", login);
route.get("/profile", authMiddleware(), profile);
route.post("/feedback", authMiddleware(), feedback);
route.post("/activate", authMiddleware(), activate);
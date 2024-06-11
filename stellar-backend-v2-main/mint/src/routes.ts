import { Hono } from "hono";
import { RuntimeBinding } from "../../common/types";
import { nft, wallet } from "./services"
import { authMiddleware, accountActivated } from "../../common/middleware";

export const route = new Hono<RuntimeBinding>();

// Rememeber all the routes are prexies with `/v2/mint`
route.post("/wallet", authMiddleware(), accountActivated(), wallet);
route.post("/nft", authMiddleware(), accountActivated(), nft);
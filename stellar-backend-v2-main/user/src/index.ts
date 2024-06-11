import { Hono } from "hono";
import { cors } from "hono/cors";
import { loggerMiddleware } from "../../common/middleware";
import { ApiError, zodErrorToString } from "../../common/utils";
import { RuntimeBinding } from "../../common/types";

import { route } from "./routes";
import { PrismaClient } from "../../common/node_modules/@prisma/client/edge";
import { httpStatus } from "../../common/httpStatus";
import { ZodError } from "zod";
import { StatusCode } from "hono/utils/http-status";

const app = new Hono<RuntimeBinding>().basePath('/v2/user');

// ---- prisma ----
let prisma: PrismaClient;

export const getClient = (DATABASE_URL: string) => {
  if (!prisma) {
    prisma = new PrismaClient({
      datasources: {
        db: {
          url: DATABASE_URL,
        },
      },
    });
  }
  return prisma;
};

// Middlewares
app.use(
  "*",
  loggerMiddleware()
  // rateLimitMiddleware()
);

// Cors
app.use(
  "*",
  cors({
    origin: "*",
    allowHeaders: [
      "Upgrade-Insecure-Requests",
      "Content-Type",
      "Authorization",
    ],
    allowMethods: ["POST", "GET", "OPTIONS"],
    exposeHeaders: ["Content-Length", "Authorization"],
    maxAge: 600,
    credentials: true,
  })
);

app.notFound(() => {
  throw new ApiError(httpStatus.NOT_FOUND, 'Not found from auth worker')
});

app.onError((err, ctx) => {
  let error = err;
  if (err instanceof ZodError) {
    error = new ApiError(httpStatus.BAD_REQUEST, zodErrorToString(err));
  } else if (!(error instanceof ApiError)) {
    const castedErr = (typeof error === "object" ? error : {}) as Record<
      string,
      unknown
    >;
    const statusCode: number =
      typeof castedErr.statusCode === "number"
        ? castedErr.statusCode
        : httpStatus.INTERNAL_SERVER_ERROR;
    const message = (castedErr.description || castedErr.message) as string;
    if (statusCode >= 500) {
      // Log any unhandled application error
      // sentry.captureException(error)
    }
    error = new ApiError(statusCode, message);
  }

  const response = {
    message: error.message,
    ...(ctx.env.ENVIROMENT === "development" && { stack: err.stack }),
  };
  
  return ctx.json(response, (error as ApiError).statusCode as StatusCode);
});

app.route("/", route);

export default app;

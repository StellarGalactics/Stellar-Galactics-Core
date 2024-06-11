import { MiddlewareHandler } from "hono";
import { RuntimeBinding } from "./types";
import { httpStatus } from "./httpStatus";
import { ApiError } from "./utils";
import { verify, decode } from "@tsndr/cloudflare-worker-jwt";

const axiomEndpoint = "https://api.axiom.co";
const axiomDataset = "stellar_logs";

const humanize = (times: any) => {
  const [delimiter, separator] = [",", "."];
  const orderTimes = times.map((v: any) =>
    v.replace(/(\d)(?=(\d\d\d)+(?!\d))/g, "$1" + delimiter)
  );
  return orderTimes.join(separator);
};

const time = (start: number) => {
  const delta = Date.now() - start;
  return humanize([delta < 1e3 ? delta + "ms" : Math.round(delta / 1e3) + "s"]);
};

export const loggerMiddleware = (): MiddlewareHandler => {
  return async (ctx, next) => {
    console.log(`${"=".repeat(8)} Logger Middleware ${"=".repeat(8)}`);
    console.log(`[${ctx.req.method}] ${ctx.req.url}`);

    // Record the start time
    const startTime = Date.now();

    // Call the next middleware in the chain
    await next();

    // Record the end time
    const endTime = Date.now();

    // Calculate the duration of the request in ms
    const executionTime = time(startTime);
    
    // Construct the log event structure
    const logEvent = {
      method: ctx.req.method,
      endpoint: ctx.req.url,
      'cf-connecting-ip': ctx.req.headers.get('cf-connecting-ip'),
      'cf-ipcountry': ctx.req.headers.get('cf-ipcountry'),
      'user-agent': ctx.req.headers.get('user-agent'),
      'content-length': ctx.req.headers.get('content-length'),
      'x-forwarded-proto': ctx.req.headers.get('x-forwarded-proto'),
      'x-real-ip': ctx.req.headers.get('x-real-ip'),
      startTime,
      endTime,
      executionTime,
      statusCode: ctx.res.status,
      statusText: ctx.res.statusText,
      responseBody: "",
    };

    // If there was an issue, log the response body with the error message.
    if (ctx.error) {
      logEvent.responseBody  = await ctx.res.clone().json();
    }

    // Log the event structure
    console.log("LogEvent :: ", JSON.stringify(logEvent));

    // Check if AXIOM_TOKEN is present in environment variables
    if (!ctx.env.AXIOM_TOKEN) {
      // If not, print an error message and return a promise
      console.error(`${"=".repeat(8)} AXIOM_TOKEN_NOT_FOUND ${"=".repeat(8)}`);
      return Promise.resolve();
    }

    // Construct the URL for the Axiom API endpoint
    const url = `${axiomEndpoint}/v1/datasets/${axiomDataset}/ingest`

    // Send the log event to the Axiom API endpoint
    fetch(url, {
      method: 'POST',
      body: JSON.stringify(logEvent),
      headers: {
        'Content-Type': 'application/x-ndjson',
        Authorization: `Bearer ${ctx.env.AXIOM_TOKEN}`,
        'User-Agent': 'axiom-cloudflare',
      },
    })

    console.log(`${"=".repeat(8)} Pushed Logs ${"=".repeat(8)}`);
  };
};

export const rateLimitMiddleware = (): MiddlewareHandler => {
  return async (ctx, next) => {
    console.log(`${"=".repeat(8)} Rate Middleware ${"=".repeat(8)}`);
    console.log(`${ctx.req.method} @TODO: impl rateLimit`);
    await next();
  };
};

export const authMiddleware = (): MiddlewareHandler<RuntimeBinding> => {
  return async (ctx, next) => {
    console.log(`${"=".repeat(8)} Auth Middleware ${"=".repeat(8)}`);

    const authHdr = ctx.req.headers.get("Authorization");
    if (!authHdr)
      throw new ApiError(httpStatus.UNAUTHORIZED, "Please authenticate");

    const authorization = authHdr!.split(" ");
    if (authorization[0].toLowerCase() != "bearer") {
      new ApiError(httpStatus.UNAUTHORIZED, "Please authenticate");
    }

    const token = authorization[1];

    // Verifing token
    const isValid = await verify(token, ctx.env.VENGEANCE);

    if (!isValid)
      throw new ApiError(httpStatus.UNAUTHORIZED, "Please authenticate");

    const { payload } = decode(token);

    // Set payload in current context so that we can access in sub-route
    ctx.set("user", payload);
    await next();
  };
};

/**
  Checks whether a user's account is activated or not
 */
export const accountActivated = (): MiddlewareHandler<RuntimeBinding> => {
  return async (ctx, next) => {
    // Get the user payload object from the context object
    const userPayload = ctx.get("user");

    // Check if the user payload object has both a "demo" and an "activate" property
    // If not, throw an ApiError with an HTTP status code of 401 (Unauthorized)
    if (!userPayload.demo && !userPayload.activate) {
      throw new ApiError(httpStatus.UNAUTHORIZED, "Unauthorized operation");
    }

    // If the user's account is activated, call the next middleware function in the chain
    await next();
  };
};

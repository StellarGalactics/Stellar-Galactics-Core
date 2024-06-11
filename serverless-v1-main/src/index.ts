import { Hono, MiddlewareHandler } from "hono";
import { cors } from "hono/cors";
import { Redis } from "@upstash/redis/cloudflare";

import jwt, { JwtPayload } from "@tsndr/cloudflare-worker-jwt";
import {
  CyboargStatus,
  CyborgT,
  Game,
  gameState,
  PrismaClient,
  Quirk,
  gameResult,
  ZionType,
  LootBoxT,
  xpAllocation,
  gameMode,
  Prisma,
} from "@prisma/client/edge";

import {
  END_LOOT_COOLDOWN_PERIOD,
  END_MINE_COOLDOWN_PERIOD,
  MAX_ZION_AT_TIME,
  mineSimulationRes,
  MINE_DURATION,
  ENERGY_TO_LOOT,
  ENERGY_TO_MINE,
  xpRequired,
  rankupRequired,
  Ranks,
  LOOTBOX_OPEN_DURATION,
  LOOTBOX_SPEED_COST,
  STRESS_REMOVAL_COST,
  QUIRK_REMOVAL_COST,
  STRESS_REMOVAL_SPEEDUP_COST,
  QUIRK_REMOVAL_SPEEDUP_COST,
  SEARGEANT_RANKUP_COST,
  RANKUP_INCREASE,
  BASE_SPEEDUP_COST,
  // SIX_HOURS_IN_MINUTES,
  RANKUP_LOCK_DURATION,
  baseXP,
  XPmul,
  ZION_LOCK_DURATION,
  httpStatus,
  dailyRewards,
  RewardToken,
  tournamentDay,
} from "./constant";

import * as InputValidation from "./InputValidation";
import { genStats, lootSimulation, statQuirkValue, wagerSimulation } from "./gameSimulation";
import { Context } from "hono";
import { ZodError, number } from "zod";
import { StatusCode } from "hono/utils/http-status";
import { getEyeClass, getNeckClass } from "./cyborgs";

export type Bindings = {
  CYBORG_METADATA: R2Bucket;
  INVITE_CODE: KVNamespace;
  DATABASE_URL: string;
  ENVIROMENT: string;
  VENGEANCE: string;
  WORMHOLE: string;
  UPSTASH_REDIS_REST_URL: string;
  UPSTASH_REDIS_REST_TOKEN: string;
  AXIOM_TOKEN: string;
};

export type Variables = {
  user: JwtPayload;
};

/**
 * Represents the context of runtime operations.
 * It is an object that has two properties: 'Bindings' and 'Variables', both of which are of the types imported above.
 */
export type RuntimeBinding = {
  Bindings: Bindings;
  Variables: Variables;
};

/**
 * Represents the context for runtime operations.
 * It extends the 'Context' type from the 'hono' module and takes one type argument, 'RuntimeBinding', which is the type defined above.
 */
export type RuntimeCtx = Context<RuntimeBinding>;

export class ApiError extends Error {
  statusCode: number;

  constructor(statusCode: number, message: string) {
    super(message);
    this.statusCode = statusCode;
  }
}

/**
 * Flattens a Zod error object into a simple error string.
 * @returns e.g. "Invite Code is in an invalid format"
 * or if it fails, a standard "Validation error" message is returned
 */
export const zodErrorToString = (err: ZodError) => {
  try {
    return Object.entries((err as ZodError).flatten().fieldErrors)
      .reduce((acc, [field, errorMessages]) => {
        errorMessages?.forEach((msg) => {
          acc.push(`${camelCaseToSentenceCase(field)} ${msg}`)
        }
        );
        return acc;
      }, [] as string[])
      .join(", ");
  } catch (err) {
    return "Validation error";
  }
};

export const camelCaseToSentenceCase = (str: string) => str.replace(/([A-Z])/g, " $1").replace(/^./, (str) => str.toUpperCase());


// ---- Routing ----
const app = new Hono<{ Bindings: Bindings; Variables: Variables}>();

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
  throw new ApiError(httpStatus.NOT_FOUND, 'Not Found')
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

app.options("*", (ctx) => {
  return ctx.text("", 204);
});

// JWT middleware: Must be called /auth/login to obtain a JWT
app.use("/auth/*", async (c, next) => {
  try {
    console.log("AUTH log started")
    const authHdr = c.req.headers.get("Authorization");
    if (!authHdr) throw new Error("Unauthorized");
    console.log("Authorization", authHdr);

    console.log("header exists");

    const authorization = authHdr!.split(" ");
    if (authorization[0].toLowerCase() != "bearer")
      throw new Error("Unauthorized");
    const token = authorization[1];
    console.log("token", token);

    // Verifing token
    console.log(c.env.VENGEANCE)
    const isValid = await jwt.verify(token, c.env.VENGEANCE);
    console.log("isValid", isValid);

    if (!isValid) throw new Error("Unauthorized");
    console.log("isValid", isValid);

    const { payload } = jwt.decode(token);
    console.log(payload);

    // Set payload in current context so that we can access in sub-route
    console.log("userpayload :: ", payload);

    c.set("user", payload);

    console.log("c.env ::", c.env);
    await next();
  } catch (ex) {
    return c.text((ex as Error).message, 401);
  }
});

// ---- prisma ----
let prisma: PrismaClient;

const getClient = (env: any) => {
  if (!prisma) {
    // fauna = new FaunaClient({
    //   secret: env.FAUNAKEY,
    // });
    prisma = new PrismaClient({
      datasources: {
        db: {
          url: env.DATABASE_URL,
        },
      },
    });
  }
  return prisma;
};

//---- functions start ----

// const getUserData = async (prisma:PrismaClient)

const getUserInfo = async (prisma: PrismaClient, userId: string) => {
  const result = await prisma.player.findUnique({
    where: {
      id: userId,
    },
  });

  console.log("result :: ", result);

  return result;
};

app.get("/gameMode", async (c) => {
  const Tbool = isTournament();

  const tourDays = [tournamentDay[0],tournamentDay[1]]
  
  return c.json({
    gameMode : Tbool,
    tourDays : tourDays
  })
})
// Zion
app.post("/auth/zion", async (c) => {
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  try {
    const parseReq = InputValidation.CreateZion.parse(reqBody);
    const userAuth = c.get("user");
    console.log("[POST] Body :: ", reqBody);

    const prisma: PrismaClient = getClient(c.env);
    const Tbool = isTournament();
    // reward token default to SGF1
    let costToken = RewardToken.SGF1;


    // Validate if cyborg belongs to users or not
    const cyborgs = await fetchUserCyborgs(prisma, userAuth.userId, [
      parseReq.id,
    ]);
    if (cyborgs.length != 1) return c.json({ message: "Invalid cyborg",success: false });

    if(Tbool){
      // set rewards to SGF2
      costToken = RewardToken.SGF2

      // check fetched cyborg is of tournament mode or not
      if(cyborgs[0].mode !== "tournament") return c.json({ message: "Not tournament cyborg",success: false });
    }
    

    // Validate if stress is 0 or not only if ziontype is not hostpital
    if (
      parseReq.zion !== ZionType.Hospital &&
      cyborgs[0].cyborg.stressPoint === 0
    )
      return c.json({ message: "Cyborg stress is zero",success: false });

    // Validate if cyborg is in "Idle" state or not
    if (cyborgs[0].cyborg.status !== CyboargStatus.Idle)
      return c.json({ message: "cyborg can't participate in zion",success: false });

    // Validate if slot is avaible for given zion region
    let currentZionCounter = 0;

    const userInfo = await getUserInfo(prisma, userAuth.userId);
    
    
    // initiate tokenrequired with stress removal
    let tokenRequired = STRESS_REMOVAL_COST
    if(parseReq.zion === ZionType.Hospital) tokenRequired = QUIRK_REMOVAL_COST

    let playerBalance = userInfo?.SGF1!;

    if(Tbool) playerBalance = userInfo?.SGF2!;
    
    // check for required balance
    if( playerBalance < tokenRequired){
      return c.json({
        message : "token balance insufficient",
        success: false
      })
    } 

    let maxZionSlotHit = false;
    let exsitingZionField = false;

    console.log("existingZionField :: ", exsitingZionField);

    userInfo!.currentZion.map((zion) => {
      console.log("Current zion :: ", zion);

      if (zion.zionType === parseReq.zion) {
        exsitingZionField = true;
        if (zion.current === MAX_ZION_AT_TIME) {
          return (maxZionSlotHit = true);
        } else {
          currentZionCounter = zion.current;
        }
      }
    });

    if (maxZionSlotHit)
      return c.json({
        message: `No more slots available for ${parseReq.zion}`,
        success: false
      });
    console.log("Current Counter :: ", currentZionCounter);

    let quirkIndex: any = [];
    if (parseReq.zion === ZionType.Hospital) {
      if (parseReq.quirk === undefined)
        return c.json({ message: "quirks index not provided",success: false });

      // validate if cyborg have the `parseReq.quirk`
      const existingQuirks = cyborgs[0].cyborg.quirks;
      let isValidQuirk =
        existingQuirks[parseReq.quirk[0]].attributes[parseReq.quirk[1]];
      if (isValidQuirk === undefined)
        return c.json({ message: "invalid quirks index",success: false });
      quirkIndex = [parseReq.quirk[0], parseReq.quirk[1]];
    }

    // dedcut tokens before updating metadata
    await deductToken(tokenRequired,userAuth.userId,prisma,costToken)

    // Freeze cyborg untill `ZION_COOLDOWN_DURATION`
    const COOLDOWNPERIOD = Date.now() + (ZION_LOCK_DURATION * 60 * 1000 ); //(4 * 60 * 60 * 1000); //COOLDOWN_PERIOD = 4 Hours
    await addCybogCooldownPeriod(prisma, cyborgs[0].id, COOLDOWNPERIOD);

    // Add cyborg zion metadata in user's collection for record-keeping
    const newZionCurrentCounter = currentZionCounter + 1;
    await addZionMetadataInUserCol(
      prisma,
      userInfo!.id,
      cyborgs[0].id,
      parseReq.zion,
      newZionCurrentCounter,
      exsitingZionField
    );

    // Set zion metadata and cyborgStatus to "Cooldown"
    await addZionMetadataInCyborgCol(
      prisma,
      cyborgs[0].id,
      parseReq.zion,
      quirkIndex
    );


    return c.json({
      message: "success",
      success: true
    });
  } catch (e) {
    console.log("Failed :: ", e);
    return c.json({
      message: ( e as Error).message
    });
  }
});

/**
 * @param 
 */
app.post("/auth/zion/claim", async (c) => {
  // Cooldown to 0
  // 98% chance of stress reducation by 50%; 2% chance of diying

  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  const parseReq = InputValidation.ClaimZion.parse(reqBody);
  console.log("[POST] parseReq :: ", parseReq);

  try {
    const userAuth = c.get("user");
    const prisma: PrismaClient = getClient(c.env);
    const timenow = new Date().getTime();
    const userInfo = await getUserInfo(prisma,userAuth.userId)

    const Tbool = isTournament();
    // reward token default to SGF1
    let costToken = RewardToken.SGF1;
    // game mode
    let gamemode : gameMode = gameMode.normal;

    let playerBalance = userInfo?.SGF1!;

    if(Tbool){
      // cost token set to SGF2
      costToken = RewardToken.SGF2;

      // set mode to tournament
      gamemode = gameMode.tournament

      // player balance to SGF2
      playerBalance = userInfo?.SGF2!;
    }


    // Validation
    const cyborgZionData = await getcyborgZionMetadata(
      prisma,
      userAuth.userId,
      parseReq.id,
      parseReq.zion,
      gamemode
    );

    if (cyborgZionData.length !== 1)
    return c.json({ message: "Invalid Cyborg",success: false });

    // token calculation
    const timeRemaining = Math.ceil((( cyborgZionData[0]?.zion?.createdAt! / 1000 / 60 ) + ZION_LOCK_DURATION ) - (timenow / 1000 / 60))
    let tokenRequired = STRESS_REMOVAL_SPEEDUP_COST * timeRemaining
    if(parseReq.zion === ZionType.Hospital) tokenRequired = QUIRK_REMOVAL_SPEEDUP_COST * timeRemaining
    
    // checking if speedup and token balance
    if(parseReq.speedup){
     if(playerBalance < tokenRequired )
      return c.json({
        message : "Token balance insufficient",
        success: false
      })
    }else if (cyborgZionData[0].cyborg.cooldownPeriod > Date.now()){
      return c.json({ 
        message: "Zion is in process",
        success: false });
    }

    let existingQuirks = cyborgZionData[0].cyborg.quirks;

    let acknowledgeQuirk: any;
    let ackQurkInfo;
    let newCyborgStat = {};

    if (cyborgZionData[0].zion?.zionType === ZionType.Hospital) {
      acknowledgeQuirk = cyborgZionData[0].zion?.quirks;
      ackQurkInfo =
        existingQuirks[acknowledgeQuirk[0]].attributes[acknowledgeQuirk[1]];

      existingQuirks[acknowledgeQuirk[0]].attributes.splice(
        acknowledgeQuirk[1],
        1
      );

      // TODO :: when removing quirk of stat type; reset stat of the effect - done

      if (acknowledgeQuirk[0] === 0) {
        console.log("type 1 quirk is removed so :: ");

        let value = 0;
        let field = "";
        let attribute = ackQurkInfo.attribute;
        let effect = ackQurkInfo.effect;
        // figure out the exact effect and the value of percentage of tat stat being effetced by this quirk
        switch (attribute) {
          
          case 1:
            field = "health";
            effect === 1
              ? (value = 12.5)
              : effect === 2
              ? (value = -12.5)
              : effect === 3
              ? (value = 25)
              : effect === 4
              ? (value = -25)
              : effect === 5
              ? (value = 50)
              : (value = -50);
            break;
          case 2:
            field = "attack";
            effect === 1
              ? (value = 14.5)
              : effect === 2
              ? (value = -14.5)
              : effect === 3
              ? (value = 29)
              : effect === 4
              ? (value = -29)
              : effect === 5
              ? (value = 58)
              : (value = -58);
            break;
          case 3:
            field = "accuracy";
            effect === 1
              ? (value = 4.25)
              : effect === 2
              ? (value = -4.25)
              : effect === 3
              ? (value = 8.5)
              : effect === 4
              ? (value = -8.5)
              : effect === 5
              ? (value = 17)
              : (value = -17);
            break;
          case 4:
            field = "criticalHit";
            effect === 1
              ? (value = 17)
              : effect === 2
              ? (value = -17)
              : effect === 3
              ? (value = 34)
              : effect === 4
              ? (value = -34)
              : effect === 5
              ? (value = 68)
              : (value = -68);
            break;
          case 5:
            field = "speed";
            effect === 1
              ? (value = 18.5)
              : effect === 2
              ? (value = -18.5)
              : effect === 3
              ? (value = 37)
              : effect === 4
              ? (value = -37)
              : effect === 5
              ? (value = 74)
              : (value = -74);
            break;
          case 6:
            field = "luck";
            effect === 1
              ? (value = 15)
              : effect === 2
              ? (value = -15)
              : effect === 3
              ? (value = 30)
              : effect === 4
              ? (value = -30)
              : effect === 5
              ? (value = 60)
              : (value = -60);
            break;
          case 7:
            field = "persistence";
            effect === 1
              ? (value = 19.5)
              : effect === 2
              ? (value = -19.5)
              : effect === 3
              ? (value = 39)
              : effect === 4
              ? (value = -39)
              : effect === 5
              ? (value = 78)
              : (value = -78);
            break;
          default:
            field = "health";
            value = 0;
        }

        // reduce that stat to it's original value using this formula
        // field original  = (field increased stat)/( 1 + value / 100 )
        let curStat = cyborgZionData[0].cyborg[field];

        console.log(`current stat ${field} ${curStat}`);

        newCyborgStat[field] = curStat / (1 + (0.01 * value));
        console.log(`reset to ${newCyborgStat[field]} by ${value} %`);
      }
    }

    // Math.max(0, defender.stressPoint - STREE_RELIEF_POINT);
    const existingStressPoint = cyborgZionData[0].cyborg.stressPoint;
    const newStressPoint = Math.max(
      0,
      cyborgZionData[0].cyborg.stressPoint - 50
    );

    //@TODO: Need to build atomic prisma transcation
    
    // deduct token
    if(parseReq.speedup) await deductToken(tokenRequired,userAuth.userId,prisma, costToken)

    // There is a 2% chance that cyborgs will die while making a claim.
    const isDead = await redeemCyborgZion(
      prisma,
      userAuth.userId,
      parseReq.id,
      parseReq.zion,
      existingQuirks,
      newStressPoint,
      newCyborgStat
    );

    // Return response
    if (cyborgZionData[0].zion?.zionType !== ZionType.Hospital) {
      return c.json({
        message: "success",
        data: {
          isDead: isDead,
          zionType: cyborgZionData[0].zion?.zionType,
          existingStressPoint: existingStressPoint,
          newStressPoint: newStressPoint,
          resettedStat: newCyborgStat,
        },
        success: true
      });
    } else {
      return c.json({
        message: "success",
        data: {
          isDead: isDead,
          zionType: cyborgZionData[0].zion?.zionType,
          acknowledgeQuirk: [acknowledgeQuirk[0], acknowledgeQuirk[1]],
          ackQurkInfo: ackQurkInfo,
        },
        success: true
      });
    }
  } catch (e) {
    console.log("Failed :: ", e);
    return c.json({
      message: (e as Error).message
    });
  }
});

app.get("/auth/zion", async (c) => {
  const userAuth = c.get("user");
  const prisma: PrismaClient = getClient(c.env);

  const Tbool = isTournament();

  // Get all cyborgsId from currentZion
  const zions = await prisma.player.findMany({
    where: {
      id: userAuth.userId,
    },
    select: {
      currentZion: true,
    },
  });

  console.log(`Found in player :: ${JSON.stringify(zions)}`);

  let cyborgsId: string[] = [];

  zions.map((zion) => {
    zion.currentZion.map((z) => {
      z.cyborgId.map((id) => cyborgsId.push(id));
    });
  });


  let whereFilterCyborg:any = {
    id: {
      in: cyborgsId,
    },
    zion: {
      is: {
        activeness: true,
      },
    },
  }

  // if tournament mode then modify filter
  if(Tbool){
    whereFilterCyborg = {
      id: {
        in: cyborgsId,
      },
      mode : "tournament",
      zion: {
        is: {
          activeness: true,
        },
      },
    }
  }

  // Get the details fro, cyborg collection
  const zionCyborg = await prisma.cyborg.findMany({
    where: whereFilterCyborg,
    select: {
      id: true,
      zion: true,
    },
  });

  return c.json({
    cyborgs: zionCyborg,
    timestamp: Date.now(),
  });
});

const getcyborgZionMetadata = async (
  prisma: PrismaClient,
  playerId: string,
  cyborgId: string,
  zion: ZionType,
  gamemode : gameMode
) => {

  let zionFilter = {
    is: {
      activeness: true,
      zionType: zion,
    },
  }

  let whereFilter : any = {
    id: cyborgId,
    playerId: playerId,
    zion: zionFilter
  }

  if(gamemode === "tournament"){
    whereFilter = {
      id: cyborgId,
      mode : "tournament",
      playerId: playerId,
      zion: zionFilter
    }
  }


  return await prisma.cyborg.findMany({
    where: whereFilter
  });
};

const redeemCyborgZion = async (
  prisma: PrismaClient,
  playerId: string,
  cyborgId: string,
  zion: ZionType,
  exQuirks: Quirk[],
  stressPoint: number,
  cyborgStat: {}
) => {
  let query = {};
  let isDead: boolean = false;

  if (zion === ZionType.Hospital) {
    if (random(0, 100) < 98) {
      query = {
        quirks: exQuirks,
        cooldownPeriod: 0,
        status: CyboargStatus.Idle,
      };

      let finalCyborgUpdate = { ...query, ...cyborgStat };

      await prisma.cyborg.update({
        where: {
          id: cyborgId,
        },
        data: {
          cyborg: {
            update: finalCyborgUpdate,
          },
          zion: {
            unset: true,
          },
        },
      });
    } else {
      isDead = true;

      query = {
        status: CyboargStatus.Dead,
        cooldownPeriod: 0,
      };

      await prisma.cyborg.update({
        where: {
          id: cyborgId,
        },
        data: {
          cyborg: {
            update: {
              status: CyboargStatus.Dead,
              cooldownPeriod: 0,
            },
          },
        },
      });
    }

  } else {
    if (random(0, 100) < 98) {
      query = {
        stressPoint: stressPoint,
        cooldownPeriod: 0,
        status: CyboargStatus.Idle,
      };
    } else {
      isDead = true;

      query = {
        status: CyboargStatus.Dead,
        cooldownPeriod: 0,
      };
    }

    await prisma.cyborg.update({
      where: {
        id: cyborgId,
      },
      data: {
        cyborg: {
          update: query,
        },
        zion: {
          activeness: false,
          zionType: zion, // Not needed but prisma is crying,
        },
      },
    });
  }

  // Remove cyborg from player's currentZion
  const currentPlayerZion = await prisma.player.findUnique({
    where: {
      id: playerId,
    },
    select: {
      currentZion: true,
    },
  });
  let updateCyborgID: string[] = [];
  currentPlayerZion?.currentZion.map((izion) => {
    if (izion.zionType === zion) {
      izion.cyborgId.map((id) => {
        if (id !== cyborgId) {
          updateCyborgID.push(id);
        }
      });
    }
  });

  await prisma.player.update({
    where: {
      id: playerId,
    },
    data: {
      currentZion: {
        updateMany: {
          where: {
            zionType: zion,
          },
          data: {
            cyborgId: updateCyborgID,
            current: { decrement: 1 },
          },
        },
      },
    },
  });

  return isDead;
};

const addZionMetadataInUserCol = async (
  prisma: PrismaClient,
  playerId: string,
  cyborgId: string,
  zion: ZionType,
  zionCounter: number,
  exsitingZionField: boolean
) => {
  if (zionCounter === 1 && !exsitingZionField) {
    await prisma.player.update({
      where: {
        id: playerId,
      },
      data: {
        currentZion: {
          push: {
            zionType: zion,
            cyborgId: cyborgId,
            current: zionCounter,
          },
        },
      },
    });
  } else {
    await prisma.player.update({
      where: {
        id: playerId,
      },
      data: {
        currentZion: {
          updateMany: {
            where: {
              zionType: zion,
            },
            data: {
              cyborgId: {
                push: cyborgId,
              },
              current: { increment: 1 },
            },
          },
        },
      },
    });
  }
};

const addZionMetadataInCyborgCol = async (
  prisma: PrismaClient,
  cyborgId: string,
  zion: ZionType,
  quirks: []
) => {
  await prisma.cyborg.update({
    where: {
      id: cyborgId,
    },
    data: {
      zion: {
        activeness: true,
        zionType: zion,
        createdAt: Date.now(),
        quirks: quirks,
      },
      cyborg: {
        update: {
          status: CyboargStatus.Cooldown,
        },
      },
    },
  });
};

const addCybogCooldownPeriod = async (
  prisma: PrismaClient,
  cyborgId: string,
  cooldownPeriod: number
) => {
  await prisma.cyborg.update({
    where: {
      id: cyborgId,
    },
    data: {
      cyborg: {
        update: {
          cooldownPeriod: cooldownPeriod,
        },
      },
    },
  });
};

const fetchUserCyborgs = async (
  prisma: PrismaClient,
  userId: string,
  Id: string[]
) => {
  console.log(`UserEmail :: ${userId} and Id :: ${Id}`);

  const cyborgResult = await prisma.cyborg.findMany({
    where: {
      player: {
        is: {
          id: userId,
        },
      },
      id: { in: Id },
    },
  });

  return cyborgResult;
};

/*
 * @param MineId It's basically a gameID or on-going mine game Id
 */
const fetchMineId = async (prisma: PrismaClient, MineId: string) => {
  console.log("trying to fetch this mine");

  const result = await prisma.game.findUnique({
    where: {
      id: MineId,
    },
  });

  return result;
};

// Retrieve user's lootboxes (open ones)
const fetchLootboxes = async (prisma: PrismaClient, playerId: string) => {
  const result = await prisma.lootBox.findMany({
    where: {
      player: {
        id: playerId,
      },
    },
  });

  return result;
};

// Retrieve all users' cyborgs.
const fetchUserNFT = async (prisma: PrismaClient, playerId: string) => {
  const result = await prisma.cyborg.findMany({
    where: {
      player: {
        id: playerId,
      },
    },
  });

  return result;
};

/**
 * Create a mine game Instance
 */
const createGameInstance = async (
  ctx: RuntimeCtx,
  prisma: PrismaClient,
  userId: string,
  cyborgs: CyborgT[],
  simulationResult: mineSimulationRes,
  cyborgsPoistion: number[][],
  gameMode : gameMode
) => {
  console.log("creating game instance");

  const cyborgsID = cyborgs.map((c) => c.id);

  const gameID = await getGameId(ctx);

  const gameResult = await prisma.game.create({
    data: {
      gameID: gameID,
      mode : gameMode,
      state: "Mine",
      result: "InProgrss",
      mineTimestamp: simulationResult.mine_start_time, //unixtimestamp;
      mineCyborgs: cyborgs,
      mineSimulation: simulationResult,
      minePosition: {
        frontRow: cyborgsPoistion[0],
        backRow: cyborgsPoistion[1],
      },
      lootSimulation: {},
      lootPosition: {},

      minePlayer: {
        connect: {
          id: userId,
        },
      },
    },
  });

  // Update cyborgs state to 'Mine
  await prisma.cyborg.updateMany({
    where: {
      cyborg: {
        is: {
          id: { in: cyborgsID },
        },
      },
    },
    data: {
      cyborg: {
        update: {
          status: "Mine",
        },
      },
    },
  });
  return gameResult;
};

/**
 * Create a loot game Instance
 */
const createLootInstance = async (
  prisma: PrismaClient,
  userId: string,
  gameId: string,
  cyborgs: CyborgT[],
  simulationResult: any,
  cyborgsPoistion: number[][],
  lootStartTime: any
) => {
  console.log("Saving Loot Instance on Database ...");

  const cyborgsID = cyborgs.map((c) => c.id);
  const gameResult =
    simulationResult.result.win.team === "mine" ? "mineWon" : "lootWon";

  const game = await prisma.game.update({
    where: {
      id: gameId,
    },
    data: {
      state: "Loot",
      result: gameResult,
      lootCyborgs: cyborgs,
      lootTimestamp: lootStartTime, // changing this from 4 to lootStartTime
      lootSimulation: simulationResult,
      lootPosition: {
        frontRow: cyborgsPoistion[0],
        backRow: cyborgsPoistion[1],
      },
      lootPlayer: {
        connect: {
          id: userId,
        },
      },
    },
  });
  console.log("game response after update :: ", game);

  await prisma.cyborg.updateMany({
    where: {
      cyborg: {
        is: {
          id: { in: cyborgsID },
        },
      },
    },
    data: {
      cyborg: {
        update: {
          status: "Loot",
        },
      },
    },
  });

  return game;
};

/**
 * Validate if cyborgs is in "Idle" state
 * If yes; they can participate in mine/loot
 */
const validateCyborgActiveness = async (cyborgs: CyborgT[]) => {
  for (let cyborg in cyborgs) {
    if (
      cyborgs[cyborg].status.toLowerCase() !== CyboargStatus.Idle.toLowerCase()
    ) {
      return false;
    }
    return true;
  }
};

/**
 * Check if the user have all (3) cyborgs or not
 * @param Id Cyborgs Id
 * @returns Cyborgs metadata from db
 */
const validateCyborg = async (
  prisma: PrismaClient,
  userId: string,
  Id: number[],
  energyNeeded: number,
  gamemode : gameMode
) => {
  console.log(`UserId :: ${userId} and Id :: ${Id}`);
  console.log(gamemode)

  let playerFilter = {
    is: {
      id: userId,
    },
  }

  let cyborgFilter = {
    is: {
      id: { in: Id },
      stressPoint: {
        lt: 100, //only cyborgs stress < 100 are allowed
      },
      energy: {
        //energy atleast 4 == ENERGY_TO_MINE ( > 3 )
        gt: energyNeeded - 1,
      },
    },
  }
  
  let whereFilter:any  = {
    player: playerFilter,
    mode: gameMode.normal,
    cyborg: cyborgFilter
  }

  if(gamemode === "tournament"){
    whereFilter = {
      player: playerFilter,
      mode : gameMode.tournament,
      cyborg: cyborgFilter
    }
  }

  console.log("\n",JSON.stringify(whereFilter))

  // get all the assets
  const cyborgResult = await prisma.cyborg.findMany({
    where: whereFilter
  });

  // if(gamemode === "normal"){
  //   cyborgResult.forEach( c => {
  //     if(c.mode === "tournament") return { status: 500 , message : "NotValidCyborgs" , data: [] }
  //   });
  // }

  console.log("CyborgResult :: ", cyborgResult);

  // asserts_eq!(result.len, 3)
  if (cyborgResult.length !== 3) {
    return {
      status: 500,
      message: "NotValidCyborgs",
      data: [],
    };
  }

  return { status: 200, message: "SUCCESS", data: cyborgResult };
};

const getGameId = async (ctx: RuntimeCtx) => {
  // @ts-ignore
  const redis = Redis.fromEnv(ctx.env);
  const gameId = await redis.incr("gameId");
  return gameId;
};

/**
 * 
 * @param tokens 
 * @param userEmail 
 * @param prisma 
 * @returns token deduction transaction
 */
const deductToken = async ( tokens : number , userId : string , prisma:PrismaClient ,costToken : RewardToken ) => {
  try{

    console.log(`costtoken is ${costToken} so that token will be dedcuted`)

    let SGF1 = 0;
    let SGF2 = 0;

    if(costToken === 0){
      SGF1 = tokens
    }else{
      SGF2 = tokens
    }

    await prisma.player.update({
      where:{
        id: userId
      },
      data:{
        SGF1:{
          decrement : SGF1
          // ...(tokens > user.tokens ? { set: 0 } : {})
        },
        SGF2 : {
          decrement : SGF2
        }
      }
    })
  
    return {
      message : "token deducted",
      data: true
    }
  } catch (e){
    return {
      message : (e as Error).message,
      data: false
    }
  }
}

/**
 * 
 * @param token 
 * @returns token to base 10^9
 */
export const convertToken = (token : number) => {
  return token * 1000000000
}

// tournament helper function\
/** returns if we are in weekend tournament mode or not */
const isTournament = () => {
  const date = new Date();
  const day = date.getDay();
  return day === tournamentDay[0] || day === tournamentDay[1];
}

// wager AI functions
const randomCyborgSequence = async () => {
  // Genrating randomness for assembling level-1 cyborg
  const genderRandomness = random(1, 2);
  const classRandomness = random(1, 5);
  const eyesRandomness = random(1, 30);
  const neckRandomness = random(1, 30);
  const originPlanetRandomness = random(1, 5);
  const skinRandomness = random(1, 6);

  // [originPlanet, gender, class, helmet, vest, eyes, neck]
  return [
    genderRandomness,
    originPlanetRandomness,
    classRandomness,
    eyesRandomness,
    neckRandomness,
    skinRandomness,
  ];
};

//------Get-------

app.get("/", async (c) => {
  return c.text("Welcome fam");
});


/**
 * Get a particular cyborgs details by it's ID
 */
app.get("/cyborg", async (c) => {
  const cyborgID = c.req.query("cyborg");
  const prisma: PrismaClient = getClient(c.env);
  console.log("id :: ",cyborgID)

  const result = await prisma.cyborg.findUnique({
    where: {
      id: cyborgID,
    },
  });

  return c.json({
    data: result,
  });
});

// /**
//  * Get all the mine irrespective of the state for a particular user
//  */
app.get("/auth/mine", async (c) => {
  const prisma: PrismaClient = getClient(c.env);
  const userAuth = c.get("user");
  console.log(userAuth);

  const result = await prisma.game.findMany({
    where: {
      state: {
        not: "Complete",
      },
      mineClaimed: false,
      minePlayer: {
        id: userAuth.userId,
      },
    },
  });

  // console.log(`[DB][Response] :: ${JSON.stringify(result)}`);
  return c.json({
    data: result,
    timestamp: Date.now(),
  });
});

// /**
//  * Get all the mine (excpet active) for a particular user -> basically mine history
//  */
app.get("/auth/user/mine/all", async (c) => {
  const prisma: PrismaClient = getClient(c.env);
  const userAuth = c.get("user");
  console.log(userAuth);

  const result = await prisma.game.findMany({
    where: {
      mineClaimed: true,
      minePlayerId: userAuth.userId,
    },
  });

  return c.json({
    data: result,
    timestamp: Date.now(),
  });
});

// /**
//  * Get all the loot (excpet active) for a particular user -> basically mine history
//  */
app.get("/auth/user/loot/all", async (c) => {
  const prisma: PrismaClient = getClient(c.env);
  const userAuth = c.get("user");
  console.log(userAuth);

  const result = await prisma.game.findMany({
    where: {
      lootClaimed: true,
      lootPlayerId: userAuth.userId
    },
  });

  return c.json({
    data: result,
    timestamp: Date.now(),
  });
});

app.get("/auth/loot", async (c) => {
  const prisma: PrismaClient = getClient(c.env);
  const userAuth = c.get("user");

  const result = await prisma.game.findMany({
    where: {
      state: "Loot",
      lootPlayer: {
        id: userAuth.userId,
      },
    },
  });

  return c.json({
    data: result,
    timestamp: Date.now(),
  });
});

app.get("/auth/assets/cyborgs", async (c) => {
  const userAuth = c.get("user");
  const prisma: PrismaClient = getClient(c.env);
  let usersNFT = await fetchUserNFT(prisma, userAuth.userId);
  return c.json({
    result: usersNFT,
  });
});

app.get("/auth/assets/cyborgs/idle", async (c) => {
  let startTime = Date.now();

  const userAuth = c.get("user");
  const prisma: PrismaClient = getClient(c.env);
  let usersNFT = await prisma.cyborg.findMany({
    where: {
      player: {
        id: userAuth.userId,
      },
      cyborg: {
        is: {
          status: "Idle",
        },
      },
    },
  });
  let endTime = Date.now();

  return c.json({
    result: usersNFT,
    timeTaken: endTime - startTime,
  });
});

app.get("/auth/assets/lootboxes", async (c: any) => {
  const userAuth = c.get("user");
  const prisma: PrismaClient = getClient(c.env);
  let lootboxes = await fetchLootboxes(prisma, userAuth.userId);
  return c.json({
    result: lootboxes,
  });
});

// current active mines of user
app.get("/auth/mine/all", async (c) => {
  const prisma: PrismaClient = getClient(c.env);

  const result = await prisma.game.findMany({
    where: {
      state: "Mine",
      mineTimestamp: {
        gt: new Date().getTime() - MINE_DURATION * 60_000,
      },
    },
  });

  return c.json({
    data: result,
    timestamp: Date.now(),
  });
});
// current active loots of user
app.get("/auth/loot/all", async (c) => {
  const prisma: PrismaClient = getClient(c.env);

  const result = await prisma.game.findMany({
    where: {
      state: "Loot",
    },
  });

  return c.json({
    data: result,
    timestamp: Date.now(),
  });
});
// all the games completed (wholeeee of the game)
app.get("/auth/game", async (c) => {
  const prisma: PrismaClient = getClient(c.env);

  const result = await prisma.game.findMany({
    where: {
      state: "Complete",
    },
  });

  return c.json({
    data: result,
  });
});

//------Post-------
app.post("/auth/loot", async (c) => {
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  try {
    const parseReq = InputValidation.CreateLoot.parse(reqBody);
    parseReq.position = [parseReq.frontRow, parseReq.backRow];
    console.log("user :: ", JSON.stringify(parseReq));

    const userAuth = c.get("user");

    const prisma: PrismaClient = getClient(c.env);
    console.log("user Auth :: ", userAuth);

    const Tbool = isTournament();
    // reward token default to SGF1
    let rewardToken = RewardToken.SGF1;
    let gamemode : gameMode = gameMode.normal;

    if(Tbool){
      // set gamemode to Tournament
      gamemode = gameMode.tournament;

      // set rewards to SGF2
      rewardToken = RewardToken.SGF2
    }

    let validMine = await fetchMineId(prisma, parseReq.mineId);

    if(validMine?.mode === "tournament" && gamemode != "tournament") return c.json({ message:"game not in tournament mode" , success: false })

    if(validMine?.mode === (null || "normal") && gamemode != "normal") return c.json({ message:"game not in normal mode" , success: false })

    if (validMine && validMine.state === "Mine") {
      if (validMine.minePlayerId === userAuth.userId) {
        return c.json({ message: "Not loot own mine", success: false });
      }

      if ((validMine.mineTimestamp + (MINE_DURATION * 60_000)) < new Date().getTime()) return c.json({ message: "Mine time is over" ,success: true });

      let validResult = await validateCyborg(
        prisma,
        userAuth.userId,
        parseReq.id,
        ENERGY_TO_LOOT,
        gamemode
      );
      console.log("validateCyborg :: ", JSON.stringify(validResult));



      if (validResult.status === 500) {
        return c.json({
          message: validResult.message,
          success: false
        });
      }

      let cyborgsMetadata: CyborgT[] = validResult.data.map((c) => c.cyborg);
      let isCyborgActive = await validateCyborgActiveness(cyborgsMetadata);
      console.log("Cyborg activness :: ", isCyborgActive);

      if (isCyborgActive) {
        const lootTimeStamp = new Date().getTime(); //time stamp for loot simulation start

        console.log("new lootSimulation");

        // get usernames for players both mine and loot
        let lootPlayer = await prisma.player.findUnique({
          where: {
            id: userAuth.userId,
          },
        });

        let minePlayer = await prisma.player.findUnique({
          where: {
            id: validMine.minePlayerId,
          },
        });

        const simulationResult = await lootSimulation(
          validMine,
          cyborgsMetadata,
          JSON.parse(JSON.stringify([parseReq.frontRow, parseReq.backRow])),
          minePlayer!.username,
          lootPlayer!.username,
          rewardToken
        );

        const gameResp = await createLootInstance(
          prisma,
          userAuth.userId,
          parseReq.mineId,
          cyborgsMetadata,
          simulationResult,
          parseReq.position,
          lootTimeStamp
        );

        // deduct energy
        await prisma.cyborg.updateMany({
          where:{
            cyborg:{
              is:{
                id:{
                  in: parseReq.id
                }
              }
            },
          },
          data:{
            cyborg:{
              update:{
                energy:{
                  decrement: ENERGY_TO_LOOT
                }
              }
            }
          }
        })

        //TODO : update game result
        console.log("game resposne :: ", gameResp);

        return c.json({
          message : "success",
          success: true,
          result: gameResp,
          minePlayer: validMine.minePlayerId,
          lootPlayer: userAuth.userId,
        });
      }
    } else {
      return c.json({
        result: "In-valid Mine Id",
        success: false
      });
    }
  } catch (e) {
    console.log("Validation error :: ", e);
    return c.json({
      message: e,
    });
  }
});

/**
 * End mine Game
 */
app.post("/auth/endMine", async (c: any) => {
  const gameID = await c.req.query("game");
  console.log("[POST] query ::", gameID);

  try {
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");

    let gameInstance = await prisma.game.findUnique({
      where: {
        id: gameID,
      },
    });

    if (gameInstance) {
      //check minerID
      if (gameInstance.minePlayerId !== userAuth.userId) {
        return c.json({
          message: "bad request",
          success: false
        });
      }
      // Is already claimed
      if (gameInstance.mineClaimed) {
        console.log("Already claimed");
        return c.json({
          message: "Already claimed",
          success: false
        });
      }

      if (gameInstance.state === gameState.Complete)
        return c.json({ message: "Already settled",success: false });

      const timeNow = new Date().getTime();
      const minetimeElapsed = timeNow - gameInstance.mineTimestamp; //time elapsed for mine end request should be more than 60 mins
      const looting = gameInstance.state === gameState.Loot ? true : false;
      // const loottimeElapsed = (timeNow - gameInstance.lootTimestamp);
      console.log("looting? :: ", looting);
      console.log(
        `OP: ${Math.floor(minetimeElapsed / 60_000)} :: ${
          Math.floor(minetimeElapsed / 60_000) > END_MINE_COOLDOWN_PERIOD
        }`
      );

      if (Math.floor(minetimeElapsed / 60_000) > END_MINE_COOLDOWN_PERIOD) {
        console.log("minetimeElapsed > 60 min");
        let updatedGame;
        // let gameUpdate;
        let simulation: any;
        let cyborgTx = [];
        let winteam;
        let rewards;
        let result: gameResult = "pureWin";

        //cyborgs update
        if (looting) {
          simulation = gameInstance.lootSimulation;
          // @ts-ignore
          winteam = simulation.result.win.team;
          result = winteam === "mine" ? "mineWon" : "lootWon";
          // @ts-ignore
          rewards =
            winteam === "mine"
              ? simulation.result.win.reward
              : simulation.result.loss.reward;
          console.log("Rewards:: ", JSON.stringify(rewards));

          //update cyborgs
          console.log("updating cyborgs");

          rewards.cyborgChanges.forEach((c: any) => {
            console.log("rewards.cyborgChanges :: ", JSON.stringify(c));
            let updateData = {
              status: "Idle",
              level: c.level,
              quirks: c.quirks,
              lifePoint: c.lifepoint,
              stressPoint: c.stress,
              // energy:{
              //   decrement: ENERGY_TO_MINE
              // },
              xp: c.xp,
            };
            let metadata = c.metadataUpdate;
            let finaldata = { ...updateData, ...metadata };
            console.log("updated Metadata:: ", JSON.stringify(finaldata));

            let tx = prisma.cyborg.updateMany({
              where: {
                cyborg: {
                  is: {
                    id: parseInt(c.cyborgID),
                  },
                },
              },
              data: {
                cyborg: {
                  update: finaldata,
                },
              },
            });
            cyborgTx.push(tx);
          });

          // Update token balance in user account and lootbox if any
          let userData: {
            SGF1: {
              increment: number;
            };
            SGF2: {
              increment: number;
            };
          } = {
            SGF1: {
              increment: 0,
            },
            SGF2: {
              increment: 0,
            },
          };

          let lootbox: LootBoxT;

          if (winteam === "mine") {
            lootbox = gameInstance.lootSimulation.result.win.reward.lootbox;

            userData.SGF1.increment =
              gameInstance.lootSimulation.result.win.reward.SGF1;
            userData.SGF2.increment =
              gameInstance.lootSimulation.result.win.reward.SGF2;
          } else {
            lootbox = gameInstance.lootSimulation.result.loss.reward.lootbox;

            userData.SGF1.increment =
              gameInstance.lootSimulation.result.loss.reward.SGF1;
            userData.SGF2.increment =
              gameInstance.lootSimulation.result.loss.reward.SGF2;
          }

          // tournament or normal
          let gameMode = gameInstance.mode;
          let mode : gameMode = "normal";
          if(gameMode === "tournament") mode = "tournament"

          // create lootbox only when there is data
          if (Object.keys(lootbox).length !== 0) {
            let lootboxTx = prisma.lootBox.create({
              data: {
                state: "close",
                lootbox: lootbox,
                mode : mode,
                player: {
                  connect: {
                    id: userAuth.userId,
                  },
                },
              },
            });
            cyborgTx.push(lootboxTx);
          }

          console.log("userData :: ", JSON.stringify(userData));

          let user_balance_tx = prisma.player.updateMany({
            where: {
              id: userAuth.userId,
            },
            data: userData,
          });

          cyborgTx.push(user_balance_tx);

          let newGameData = {};
          if (gameInstance.lootClaimed) {
            newGameData = {
              state: "Complete",
              mineClaimed: true,
              result: result,
            };
          } else {
            newGameData = {
              mineClaimed: true,
              result: result,
            };
          }

          let gameUpdate = prisma.game.update({
            where: {
              id: gameID,
            },
            data: newGameData,
          });

          cyborgTx.push(gameUpdate);
        } else {
          console.log("in else condition");

          simulation = gameInstance.mineSimulation;
          // @ts-ignore
          rewards = simulation.reward;
          console.log("rewards :: ", JSON.stringify(rewards));
          //update cyborgs
          rewards.cyborgChanges.forEach((c: any) => {
            console.log("rewards.cyborgChanges :: ", JSON.stringify(c));

            let updateData = {
              status: "Idle",
              level: c.level,
              // energy:{
              //   decrement: ENERGY_TO_MINE
              // },
              xp: c.xp,
            };
            let metadata = c.metadataUpdate;
            let finaldata = { ...updateData, ...metadata };
            console.log("updated Metadata:: ", JSON.stringify(finaldata));

            let tx = prisma.cyborg.updateMany({
              where: {
                cyborg: {
                  is: {
                    id: parseInt(c.cyborgID),
                  },
                },
              },
              data: {
                cyborg: {
                  update: finaldata,
                },
              },
            });
            cyborgTx.push(tx);
          });

          // Update token balance in user account
          let user_balance_tx = prisma.player.updateMany({
            where: {
              id: userAuth.userId,
            },
            data: {
              SGF1: {
                increment: simulation.reward.SGF1,
              },
              SGF2: {
                increment: simulation.reward.SGF2,
              },
            },
          });

          cyborgTx.push(user_balance_tx);

          let gameUpdate = prisma.game.update({
            where: {
              id: gameID,
            },
            data: {
              mineClaimed: true,
              state: "Complete",
              result: result,
            },
          });

          cyborgTx.push(gameUpdate);
        }
        // console.log("Constructed transaction :: ", JSON.stringify(cyborgTx));

        console.log("Updating DB ....");
        let pt = await prisma.$transaction(cyborgTx);
        console.log("DB operation completed :: ", pt);

        // console.log("sending game updated :: ",JSON.stringify(gameUpdate)) won't work because batch transaction
        // retrieve game after transcation succefull
        updatedGame = await prisma.game.findUnique({
          where: {
            id: gameID,
          },
        });

        return c.json({
          message: "Complete",
          success: true,
          updatedGame,
        });
      } else {
        console.log("InProgress ...");

        return c.json({
          message: "InProgress",
          success: false
        });
      }
    } else {
      return c.json({
        message: "Invalid game",
        success: false
      });
    }
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
});

/**
 * Ends Loot Game needs writing
 */
app.post("/auth/endLoot", async (c: any) => {
  const gameID = await c.req.query("game");
  console.log("[POST] query ::", gameID);

  try {
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");
    console.log(userAuth);

    const gameInstance = await prisma.game.findUnique({
      where: {
        id: gameID,
      },
    });
    console.log("gameInstance :: ", gameInstance);

    if (gameInstance) {
      console.log(gameInstance.lootPlayerId);
      if (gameInstance.state === gameState.Complete)
        return c.json({ message: "Already settled",success: false });

      //check looterID
      if (gameInstance.lootPlayerId !== userAuth.userId) {
        console.log("Invalid lootPlayerId");
        return c.json({
          message: "bad request",
          success: false
        });
      }

      // Is already claimed
      if (gameInstance.lootClaimed) {
        console.log("Already claimed");
        return c.json({
          message: "Already claimed",
          success: false
        });
      }

      const timeNow = new Date().getTime();
      // @ts-ignore
      const loottimeElapsed = Math.floor(
        (timeNow - gameInstance.lootTimestamp!) / 1000 / 60
      );

      const minetimeElapsed = Math.floor(
        (timeNow - gameInstance.mineTimestamp) / 1000 / 60
      ); //time elapsed for loot end request should be more than 30 mins

      console.log("time elapsed", loottimeElapsed);

      if (loottimeElapsed > END_LOOT_COOLDOWN_PERIOD) {
        // update game satate to complete only if looters are going after miners
        let updatedGame: Game = gameInstance;

        const gamemode : gameMode = gameInstance?.mode!

        //update cyborgs
        let simulation: any = gameInstance.lootSimulation;
        // @ts-ignore
        let winteam = simulation.result.win.team;
        let result: gameResult = winteam === "loot" ? "lootWon" : "mineWon";
        // @ts-ignore
        let rewards =
          winteam === "loot"
            ? simulation.result.win.reward
            : simulation.result.loss.reward;

        let cyborgTx = [];
        rewards.cyborgChanges.forEach((c: any) => {
          let updateData = {
            status: "Idle",
            level: c.level,
            quirks: c.quirks,
            lifePoint: c.lifepoint,
            stressPoint: c.stress,
            // energy:{
            //   decrement: ENERGY_TO_LOOT
            // },
            xp: c.xp,
          };
          let metadata = c.metadataUpdate;
          let finaldata = { ...updateData, ...metadata };
          console.log("before commiting data :: ", JSON.stringify(finaldata));

          let tx = prisma.cyborg.updateMany({
            where: {
              cyborg: {
                is: {
                  id: parseInt(c.cyborgID),
                },
              },
            },
            data: {
              cyborg: {
                update: finaldata,
              },
            },
          });
          cyborgTx.push(tx);
        });

        // Update token balance in user account and lootbox if any
        let userData: {
          SGF1: {
            increment: number;
          };
          SGF2: {
            increment: number;
          };
        } = {
          SGF1: {
            increment: 0,
          },
          SGF2: {
            increment: 0,
          },
        };
        let lootbox: LootBoxT;
        if (winteam === "loot") {
          lootbox = gameInstance.lootSimulation.result.win.reward.lootbox;

          userData.SGF1.increment =
            gameInstance.lootSimulation.result.win.reward.SGF1;
          userData.SGF2.increment =
            gameInstance.lootSimulation.result.win.reward.SGF2;
        } else {
          lootbox = gameInstance.lootSimulation.result.loss.reward.lootbox;

          userData.SGF1.increment =
            gameInstance.lootSimulation.result.loss.reward.SGF1;
          userData.SGF2.increment =
            gameInstance.lootSimulation.result.loss.reward.SGF2;
        }

        // create lootbox only when there is data
        if (Object.keys(lootbox).length !== 0) {
          let lootboxTx = prisma.lootBox.create({
            data: {
              state: "close",
              lootbox: lootbox,
              // mode: gamemode,
              player: {
                connect: {
                  id: userAuth.userId,
                },
              },
              playerId: userAuth.userId,
            },
          });
          cyborgTx.push(lootboxTx);
        }

        console.log("userData :: ", JSON.stringify(userData));

        let user_balance_tx = prisma.player.updateMany({
          where: {
            id: userAuth.userId,
          },
          data: userData,
        });

        cyborgTx.push(user_balance_tx);

        console.log("Updating DB ....");
        await prisma.$transaction(cyborgTx);
        console.log("DB operation completed");

        let newGameData = {};
        if (gameInstance.mineClaimed) {
          newGameData = {
            state: "Complete",
            lootClaimed: true,
            result: result,
          };
        } else {
          newGameData = {
            lootClaimed: true,
            result: result,
          };
        }

        updatedGame = await prisma.game.update({
          where: {
            id: gameID,
          },
          data: newGameData,
        });

        return c.json({
          message: "complete",
          success: true,
          updatedGame,
        });
      }
      return c.json({
        message: "InProgress",
        success: false
      });
    } else {
      return c.json({
        message: "Invalid gameId",
        success: false
      });
    }
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
});

/**
 * Rankup cyborg using rankup Points
 * @param :: cyborgID
 */
app.post("/auth/rankup", async (c: any) => {
  const cyborgID = await c.req.query("cyborgID");
  console.log("[POST] query parameter :: ", cyborgID);
  try {
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");

    let timenow = new Date().getTime();
    const Tbool = isTournament();
    // reward token default to SGF1
    let costToken = RewardToken.SGF1;

    
    const cyborgs = await prisma.cyborg.findFirst({
      where: {
        player: {
          is: {
            id: userAuth.userId,
          },
        },
        id:cyborgID
      },
    });

    const cyborg = cyborgs?.cyborg;

    if(Tbool){
      // check tournament cyborg
      if(cyborgs?.mode !== "tournament") return c.json({ message : "Not tournament cyborg",success: false })

      // cost token set to SGF2
      costToken = RewardToken.SGF2;
    }

    console.log("cyborg :: ", JSON.stringify(cyborg));

    if (cyborg) {
      // status check for cyborg
      if(cyborg.status != "Idle") return c.json({ message : "cyborg is not in Idle state",success: false })

      //check for rankup and XP validness
      let curRank = cyborg.rank;
      let rankNumber = Ranks[curRank] + 1;
      let curLevel = cyborg.level;
      let normalisedLevel = curLevel + (rankNumber - 1) * 10;
      let className = cyborg.trait.class;
      console.log(
        `curRank: ${curRank} \nrankNumber: ${rankNumber} \ncurLevel : ${curLevel} \nnormalisedLevele: ${normalisedLevel}\n classname ${className}`
      );


      // max rank check
      if (rankNumber === 6) {
        return c.json({
          message: "maximum rank possible",
          success: false
        });
      }

      // fetch player data
      let player = await prisma.player.findUnique({
        where: {
          id: userAuth.userId,
        },
      });

      // check token balance required
      let tokenRequired = SEARGEANT_RANKUP_COST * Math.pow(2 , ( rankNumber - 1 )) //+ (rankNumber - 1) * RANKUP_INCREASE
      console.log("tokens required : ",tokenRequired)

      let playerBalance = player?.SGF1!;

      
      if(Tbool) playerBalance = player?.SGF2!;

      if(playerBalance < tokenRequired){
        return c.json({
          message : "Token balance insufficient",
          success: false
        })
      }

      // update tokenRequired with either SGF1 or SGF2
      let SGF1Cost = 0;
      let SGF2Cost = 0;

      if(costToken === 0){
        SGF1Cost = tokenRequired
      }else{
        SGF2Cost = tokenRequired
      }

      //  after passing all checks build transactions
      let rankupTx = [];

      // only update the status
      let updateCyborg = prisma.cyborg.update({
        where:{
          id: cyborgID
        },
        data:{
          prevRankupTimeStamp : timenow,
          cyborg : {
            update : {
              status : "Rankup"
            }
          }
          }
        })

      rankupTx.push(updateCyborg);

      let updatePlayer = prisma.player.update({
        where: {
          id: userAuth.userId,
        },
        data: {
          // rankupPoint: {
          //   decrement: rankupPointsNeeded,
          // },
          SGF1:{
            decrement: SGF1Cost
          },
          SGF2 : {
            decrement : SGF2Cost
          }
        },
      });
      rankupTx.push(updatePlayer);

      await prisma.$transaction(rankupTx);

      return c.json({
        message: "success",
        success: true
      });
    } else {
      return c.json({
        message: "Invalid request",
        success: false
      });
    }
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
});


/**
 * Rankup cyborg using rankup Points
 * @param :: cyborgID
 * @param :: speedup
 */
app.post("/auth/rankup/claim", async (c: any) => {
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);
  try {
    const parseReq = InputValidation.ClaimRankup.parse(reqBody);
    const cyborgID = parseReq.cyborgID;
    const speedup = parseReq.speedup;
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");

    const Tbool = isTournament();
    // reward token default to SGF1
    let costToken = RewardToken.SGF1;

    let rankupTx = [];
    let timenow = new Date().getTime();

    const cyborgs = await prisma.cyborg.findFirst({
      where: {
        player: {
          is: {
            id: userAuth.userId,
          },
        },
        id: cyborgID
      },
    });

    const cyborg = cyborgs?.cyborg;

    if(Tbool){
      // check tournament cyborg
      if(cyborgs?.mode !== "tournament") return c.json({ message : "Not tournament cyborg",success: false })

      // cost token set to SGF2
      costToken = RewardToken.SGF2;
    }

    if (cyborg) {
      // check cyborg status
      if(cyborg.status != "Rankup") return c.json({ 
        message : "Not in rankup mode",
        success: false
       })

      //check for rankup and XP validness
      let curRank = cyborg.rank;
      let rankNumber = Ranks[curRank] + 1;



      // fetch player data
      let player = await prisma.player.findUnique({
        where: {
          id: userAuth.userId,
        },
      });

      let playerBalance = player?.SGF1!;

      let rankuplock = RANKUP_LOCK_DURATION * (rankNumber)

      // if speedup then deduct tokens
      if(speedup){
        const timeRemaining = Math.ceil((( cyborgs?.prevRankupTimeStamp! / 1000 / 60 ) + rankuplock ) - (timenow / 1000 / 60))

        // token required for speedup per minute
        let tokenRequired = BASE_SPEEDUP_COST * rankNumber * timeRemaining
        console.log("token required : ",tokenRequired)

        if(Tbool) playerBalance = player?.SGF2!;
  
        if(playerBalance < tokenRequired) return c.json({ message : "Token balance insufficient",success: false })

        let SGF1Cost = 0;
        let SGF2Cost = 0;

        if(costToken === 0){
          SGF1Cost = tokenRequired
        }else{
          SGF2Cost = tokenRequired
        }

        // build token deduction transaction
        let deduct = prisma.player.update({
          where:{
            id: userAuth.userId
          },
          data:{
            SGF1:{
              decrement: SGF1Cost
            },
            SGF2 : {
              decrement : SGF2Cost
            }
          }
        })
        rankupTx.push(deduct)
      } else if(((timenow - cyborgs.prevRankupTimeStamp!) / 1000 / 60 < rankuplock)){
        return c.json({
          message : "cyborg is still in rankup process",
          success: false
        })
      }

      let newRank = Ranks[rankNumber];
      let newNormalisedLevel = 1 + rankNumber * 10;
      //calculate new metadata
      let newMetadata = genStats(newNormalisedLevel, cyborg);
      console.log("new metadata after reapplying stat quirks after rankup:: ",JSON.stringify(newMetadata))


      // re apply all the stat based quirks
      cyborg.quirks[0].attributes.forEach( quirk => {
        let res = statQuirkValue(quirk.attribute,quirk.effect)
        let field = res.field;
        let value = res.value;

        newMetadata[field] = newMetadata[field] + newMetadata[field] * value * 0.01
      } )

    // before pushing metadata check accuracy and crit above hudred then set to 100
    // newMetadata["accuracy"] = Math.min( newMetadata["accuracy"] , 100 )
    // newMetadata["criticalHit"] = Math.min( newMetadata["criticalHit"] , 100 )

      console.log("new metadata after reapplying stat quirks :: ",JSON.stringify(newMetadata))

      // name change for helmet and vest  = classname + rankname

      let newName = cyborg.trait.class + newRank;
      console.log("new name for helmet and vest :: ", newName);

      let updateCyborg = prisma.cyborg.update({
        where: {
          id:cyborgID
        },
        data: {
          cyborg: {
            update: {
              status:CyboargStatus.Idle,
              trait:{
                update:{
                  bodyParts:{
                    update:{
                      helmet: newName,
                      vest: newName
                    }
                  }
                }
              },
              // @ts-ignore
              rank: newRank,
              level: 1,
              health: newMetadata.health,
              attack: newMetadata.attack,
              accuracy: newMetadata.accuracy,
              criticalHit: newMetadata.criticalHit,
              speed: newMetadata.speed,
              luck: newMetadata.luck,
              persistence: newMetadata.persistence,
            },
          },
        },
      });

      rankupTx.push(updateCyborg);

      await prisma.$transaction(rankupTx);

      let fetchCyborg = await prisma.cyborg.findUnique({
        where: {
          id:cyborgID
          }
      });

      return c.json({
        message: "success",
        data: fetchCyborg,
        success: true
      }); 
    } else {
      return c.json({
        message: "Invalid request",
        success: false
      });
    }
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
});

/**
 * @param :: lootboxID
 */
app.post("/auth/openLootbox", async (c: any) => {
  const lootboxID = await c.req.query("lootboxID");
  try {
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");

    let timenow = new Date().getTime();

    // fetch lootbox
    let lootbox = await prisma.lootBox.findUnique({
      where: {
        id: lootboxID,
      },
    });
    if (!lootbox) return c.json({ message: "lootboxID invalid",success: false });

    if (lootbox.playerId != userAuth.userId)
      return c.json({ message: "invalid request",success: false });

    lootbox = await prisma.lootBox.update({
      where: {
        id: lootboxID,
      },
      data: {
        openTimeStamp: timenow,
        state: "open",
      },
    });

    return c.json({
      message: "success",
      success: true
      // data: lootbox,
    });
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
});


/**
 * @param :: lootboxID
 * @param :: speedup
 */
app.post("/auth/claimLootbox", async (c: any) => {
  // const lootboxID = await c.req.query("lootboxID");
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  try {
    const parseReq = InputValidation.ClaimLootBox.parse(reqBody);
    const lootboxID = parseReq.lootboxID;
    const speedup = parseReq.speedup;

    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");

    let rewardTx = [];
    let timenow = new Date().getTime();

    let lootbox = await prisma.lootBox.findUnique({
      where: {
        id: lootboxID,
      },
    });
    if (!lootbox) return c.json({ message: "lootboxID invalid",success: false });

    if (lootbox.playerId != userAuth.userId)
      return c.json({ message: "invalid request",success: false });

    if (lootbox.state == "close")
      return c.json({
        message: "lootbox still in close mode",
        success: false
      });

    // check if the request is for speedup
    if(speedup){
      //  if sent for speedup change check balance needed
      const player = await prisma.player.findFirst({
        where:{
          id: userAuth.userId
        }
      })
      // time remaining ( opentime + 360 min(6 hrs) - current time ) (in minutes)
      const timeRemaining = Math.ceil((( lootbox.openTimeStamp! / 1000 / 60 ) + LOOTBOX_OPEN_DURATION ) - (timenow / 1000 / 60))

      // speeding up costs 16,666,666 SGF for 1 minute
      const tokenRequired = LOOTBOX_SPEED_COST * timeRemaining

      // check token balance
      if( player && player.SGF1 < tokenRequired ) {
        return c.json({
          message : "Token balance insufficient",
          success: false
        })
      }

      // build token deduction transaction
      let deduct = prisma.player.update({
        where:{
          id: userAuth.userId
        },
        data:{
          SGF1:{
            decrement : tokenRequired
          }
        }
      })
      rewardTx.push(deduct)

    } else if ((timenow - lootbox.openTimeStamp!) / 1000 / 60 < LOOTBOX_OPEN_DURATION){
      // if speedup not true check for lootbox open duration
      return c.json({ message: "lootbox opening InProgress",success: false });
    }

    // passes valid lootbox checks and token balance checks if speeding
    // after passing all check distribute XPs,rankuppoints and tokens

    // player rewards
    let playerReward = prisma.player.update({
      where: {
        id: userAuth.userId,
      },
      data: {
        SGF1: {
          increment: convertToken(lootbox.lootbox.SGF1),
        },
        SGF2: {
          increment: convertToken(lootbox.lootbox.SGF2),
        },
        rankupPoint: {
          increment: lootbox.lootbox.rankupPoint,
        },
      },
    });
    rewardTx.push(playerReward);

    // cyborgs xp distritbution
    lootbox.lootbox.xp.forEach((c: xpAllocation) => {
      let tx = prisma.cyborg.updateMany({
        where: {
          cyborg: {
            is: {
              id: c.cyborgID,
            },
          },
          playerId: userAuth.userId,
        },
        data: {
          cyborg: {
            update: {
              xp: {
                increment: c.xp,
              },
            },
          },
        },
      });

      rewardTx.push(tx);
    });

    // delete lootbox
    let deleteLootbox = prisma.lootBox.delete({
      where: {
        id: lootboxID,
      },
    });

    rewardTx.push(deleteLootbox);


    // update DB
    console.log("updating DB.....");
    await prisma.$transaction(rewardTx);
    console.log("updated");

    return c.json({
      message: "success",
      data: lootbox,
      success: true
    });
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
});

/**
 * Start a mine
 */
app.post("/auth/mine", async (c: any) => {
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  try {
    const parseReq = InputValidation.CreateMine.parse(reqBody);
    parseReq.position = [parseReq.frontRow, parseReq.backRow];
    console.log("user :: ", JSON.stringify(parseReq));

    const userAuth = c.get("user");
    const prisma: PrismaClient = getClient(c.env);

    const Tbool = isTournament();
    // reward token default to SGF1
    let rewardToken = RewardToken.SGF1;
    // game mode
    let gamemode : gameMode = gameMode.normal;

    if(Tbool){
      // set rewards to SGF2
      rewardToken = RewardToken.SGF2

      // set mode to tournament
      gamemode = gameMode.tournament
    }

    console.log("gamemode :: ",gamemode)

    let validResult = await validateCyborg(
      prisma,
      userAuth.userId,
      parseReq.id,
      ENERGY_TO_MINE,
      gamemode
    ); // TODO: DRY run if list is getting validated
    console.log("validateCyborg :: ", validResult);

    

    if (validResult.status === 500) {
      return c.json({
        message: validResult.message,
        success: false
      });
    }

    let cyborgsMetadata: CyborgT[] = validResult.data.map((c) => c.cyborg);
    let isCyborgActive = await validateCyborgActiveness(cyborgsMetadata);
    console.log("Cyborg activness :: ", isCyborgActive);

    if (isCyborgActive) {
      const simulationResult: mineSimulationRes = await mineSimulation(
        parseReq,
        cyborgsMetadata,
        rewardToken
      );
      console.log("simulated successfully");

      const result = await createGameInstance(
        c,
        prisma,
        userAuth.userId,
        cyborgsMetadata,
        simulationResult,
        parseReq.position,
        gamemode
      );

      // deduct energy
      await prisma.cyborg.updateMany({
        where:{
          cyborg:{
            is:{
              id:{
                in: parseReq.id
              }
            }
          },
        },
        data:{
          cyborg:{
            update:{
              energy:{
                decrement: ENERGY_TO_MINE
              }
            }
          }
        }
      })

      return c.json({
        result: result,
        success: true
      });
    } else {
      return c.json({
        message: "Cyborg can't participate",
        success: false
      });
    }
  } catch (e) {
    console.log("Validation error :: ", e);
    return c.json({
      message: e,
    });
  }
});

const mineSimulation = async (cyborgs: any, cyborgMeta: CyborgT[] , rewardToken : number) => {
  let cyborgChanges: any[] = [];

  let curRank = cyborgMeta[0].rank;
  let rankNumber = Ranks[curRank] + 1;
  const baseReward = 100;
  const finalReward = baseReward + 10 * (rankNumber - 1);

  //alloting new XPs to every cyborg
  cyborgMeta.forEach((c: CyborgT) => {
    let curLevel = c.level; //Upto 10
    let curXP = c.xp;
    let energy = c.energy;
    let curRank = c.rank;
    let normalisedLevel = curLevel + Ranks[curRank] * 10;
    console.log("normalised level :: ", normalisedLevel);

    const XpPerMatch =
      baseXP + baseXP * Math.floor((normalisedLevel - 1) / 10) * XPmul;
    let newXP :number  = curXP;

    // if (curLevel <= 10) {
    //   newXP = curXP + XpPerMatch;
    // } else {
    //   newXP = curXP;
    // }
    if (curXP < xpRequired[normalisedLevel]) {
      newXP = curXP + XpPerMatch;
      if(curLevel === 10){
        newXP = Math.min( xpRequired[normalisedLevel] , newXP );
      }
    }

    //calculate new level
    // next level only if -- > newXp is > xpreq[curlev+1] then lvl+1
    let newLevel = curLevel;
    let levelUp = false;
    let metadataUpdate:any;

    if (newXP >= xpRequired[normalisedLevel] && curLevel < 10 ) {
      newLevel += 1;
      let newNormalisedLevel = newLevel + Ranks[curRank] * 10;
      levelUp = true;

      const newMetadta = genStats(newNormalisedLevel, c);

      metadataUpdate = {
        health: newMetadta.health,
        attack: newMetadta.attack,
        accuracy: newMetadta.accuracy,
        criticalHit: newMetadta.criticalHit,
        speed: newMetadta.speed,
        luck: newMetadta.luck,
        persistence: newMetadta.persistence,
      };

      // run stat based quirks again
      console.log("after level up :: ", JSON.stringify(metadataUpdate))

      // run every stat effect on this again. type = 1
      c.quirks[0].attributes.forEach( quirk => {
        let res = statQuirkValue(quirk.attribute,quirk.effect)
        let field = res.field;
        let value = res.value;
        console.log(`====>\n ${field} effected by ${value}`)

        // effect on new metadata
        metadataUpdate[field] = metadataUpdate[field] + metadataUpdate[field] * value * 0.01;
      });

      console.log("final metadata after reapplying stat quirks :: ",JSON.stringify(metadataUpdate))
      // before pushing metadata check accuracy and crit above hudred then set to 100
      // metadataUpdate["accuracy"] = Math.min( metadataUpdate["accuracy"] , 100 )
      // metadataUpdate["criticalHit"] = Math.min( metadataUpdate["criticalHit"] , 100 )
    }

    
    cyborgChanges.push({
      cyborgID: c.id,
      levelUp: levelUp,
      level: newLevel,
      xp: newXP,
      energy: energy - ENERGY_TO_MINE,
      metadataUpdate,
    });
  });

  // reward based on tournament mode or not
  let SGF1= 0;
  let SGF2 = 0;
  
  if(rewardToken === 0){
    SGF1 = convertToken(finalReward);
  }else{
    SGF2 = convertToken(finalReward)
  }

  return {
    participant: cyborgs.id,
    position: {
      frontRow: cyborgs.position[0],
      backRow: cyborgs.position[1],
    },
    mine_start_time: new Date().getTime(), // unixTimestamp
    mine_duration: MINE_DURATION, // in minutes
    //changed simulation structure simmilar to lootsimulation
    reward: {
      SGF1,
      SGF2,
      cyborgChanges,
    },
  };
};

app.get("/auth/game/sim", async (c) => {
  const gameID = await c.req.query("game");
  console.log("[POST] query ::", gameID);

  try {
    const prisma: PrismaClient = getClient(c.env);

    let gameInstance = await prisma.game.findUnique({
      where: {
        id: gameID,
      },
    });

    return c.json({
      status: 200,
      result: gameInstance,
    });
  } catch (e) {
    return c.json({
      status: 500,
      message: e,
    });
  }
});

export function random(min: number, max: number) {
  const range = max - min + 1;
  const bytes_needed = Math.ceil(Math.log2(range) / 8);
  const cutoff = Math.floor(256 ** bytes_needed / range) * range;
  const bytes = new Uint8Array(bytes_needed);
  let value;
  do {
    crypto.getRandomValues(bytes);
    value = bytes.reduce((acc, x, n) => acc + x * 256 ** n, 0);
  } while (value >= cutoff);
  return min + (value % range);
}


const dayDiffrence = ( lastClaim:any ) => {
  
  const millisecondsInDay = 24 * 60 * 60 * 1000;

  const currentDate = new Date();
  const oldDate = new Date( lastClaim )

  // convert timestamp to start of the day
  currentDate.setHours( 0,0,0,0 );
  oldDate.setHours( 0,0,0,0 );

  const diffrenceInDays : number = ( currentDate.getTime() - oldDate.getTime() ) / millisecondsInDay;

  return diffrenceInDays

}

app.get("/auth/rewardDay" ,async (c:any) => {
  try{
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");
    const player = await prisma.player.findFirst({
      where:{
        id: userAuth.userId
      }
    })

    console.log("player :: ", player)

    if(!player) return c.json({ message : "not valid request" , success : false })

    const lastClaim = player?.rewardClaimTime
    let streakDay = player?.streakDay!
    
    const DD : number = dayDiffrence(lastClaim)
    if(DD === 0) return c.json( { day: 0 , success : true } )
    if(DD == 1) return c.json( { day: (streakDay + 1 ) , success : true} )
    return c.json( { day:1 , success : true } )

  } catch (e){
    return c.text((e as Error).message, 400);
  }
} )

app.get("/auth/claimReward" ,async (c:any) => {
  try{
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");
    // current time at the API hit
    const currentTimeStamp = Date.now()
    let streakDay: number = 1;
    let text : string = "";

    const player = await prisma.player.findFirst({
      where:{
        id: userAuth.userId
      }
    })

    if(!player) return c.json({ message : "not valid request" , success : false })

    const lastClaim = player?.rewardClaimTime

    if(!lastClaim){
      streakDay = 1
      text = "new streak started"
    } else{
      const DD : number = dayDiffrence(lastClaim)
      if(DD === 0){
        return c.json({
          message : "already claimed reward",
          success : false
        })
      }
      
      if(DD === 1) {
        streakDay = player?.streakDay!;
        if(streakDay === 7){
          streakDay = 1
          text = "streak completed"
        }else{
          streakDay += 1
          text = "streak"
        }
      }else if(DD > 1){
        streakDay = 1
        text = "new streak started"
      }   
    }

    // reward and log time
    const reward = dailyRewards[streakDay-1]

    await prisma.player.update({
      where:{
        id: userAuth.userId
      },
      data:{
        SGF1:{
          increment: convertToken(reward)
        },
        streakDay: streakDay,
        rewardClaimTime : currentTimeStamp
      }
    })

    return c.json({
      message : text,
      success : true,
      reward : reward
    })

  } catch (e){
    return c.text((e as Error).message, 400);
  }
})


// leaderboard 
app.get("/auth/leaderboard",async (c:any) => {
  try{
    const prisma: PrismaClient = getClient(c.env);
    const userAuth = c.get("user");

    const playerCount = 10;
    const Tbool = isTournament();
    // const Tbool = true;


    const currentDate = new Date();
    const currentDayOfWeek = currentDate.getUTCDay();

    if(currentDayOfWeek === 0){
      currentDate.setUTCDate(currentDate.getUTCDate() - 1);
    } else {
      currentDate.setUTCHours(0, 0, 0, 0);
    }

    // cutoff time to decide active players
    const cutOffTime = Math.floor(currentDate.getTime());
    
    let orderByFilter:any = {
      SGF1 : 'desc'
    }

    if(Tbool) {
      orderByFilter = {
        SGF2 : 'desc'
      }
    }

    // Formatting the query for normal mode
    let query : any = {
      orderBy:orderByFilter,
      select:{
          id:true,
          username:true,
          SGF1:true,
          SGF2:true
        },
      take: playerCount
    }

    let eligiblePlayers = [];

    if(Tbool){
      // targetting active players for tournament to rank them

      let players = await prisma.game.findMany({
        where:{
          mode:gameMode.tournament,
          mineTimestamp : {
            gt: cutOffTime
          }
        },
        select:{
          minePlayerId:true,
          lootPlayerId:true
        }
      })

      let minePlayersSet :any = new Set();
      let lootPlayersSet :any = new Set();

      players.forEach( data => {
        minePlayersSet.add(data.minePlayerId)
        lootPlayersSet.add(data.lootPlayerId)
      })

      eligiblePlayers.push(...minePlayersSet)
      eligiblePlayers.push(...lootPlayersSet)

      // filter null values
      eligiblePlayers = eligiblePlayers.filter((id) => id !== null);

      // query for tournament mode
      query = {
        orderBy:orderByFilter,
        where:{
          id: {
            in: eligiblePlayers
          }
        },
        select:{
            id:true,
            username:true,
            SGF1:true,
            SGF2:true
          },
        take: playerCount
      }
    }

    console.log("top player query",JSON.stringify(query));
    

    // run top player query

    let topPlayers = await prisma.player.findMany(query)

    const player = await prisma.player.findUnique({
      where:{
        id: userAuth.userId
      }
    })

    let whereFilter : any = {
      SGF1: {
        gt: player?.SGF1,
      }
    }

    if(Tbool){
      whereFilter = {
        SGF2: {
          gt: player?.SGF2,
        },
        id:{
          in: eligiblePlayers
        }
      }
    }

    console.log("where for player rank",JSON.stringify(whereFilter));

    let rank = await prisma.player.count({
      where: whereFilter,
    });

    if(Tbool && !(eligiblePlayers.includes(userAuth.userId))) rank = -1
  

    return c.json({
      topPlayers, 
      playerRank : rank + 1
    })

  }catch (e){
    return c.text((e as Error).message, 400);
  }
})

// new feature wagerAI

const placeCyborgs = async (cyborgs: CyborgT[]) => {
  let placement = [ [-1,-1,-1],[-1,-1,-1] ];
  
  // Sorting by health to easily compare
  cyborgs.sort((a, b) => b.health - a.health);

  // Comparing health of first two and last two to check if within range
  const comparableAll = Math.abs(cyborgs[0].health - cyborgs[2].health) <= 10;
  const comparableFirstTwo = Math.abs(cyborgs[0].health - cyborgs[1].health) <= 10;
  const comparableLastTwo = Math.abs(cyborgs[1].health - cyborgs[2].health) <= 10;

  const randomIndex = () => Math.round(Math.random()); 
  // console.log(cyborgs)

  if (comparableAll) {
    // All 3 have comparable health, place all in first array
    placement[0] = cyborgs.map(cyborg => cyborg.id);
  } else if (comparableFirstTwo) {

    let start = randomIndex();
    placement[0][start] = cyborgs[0].id;
    placement[0][start + 1] = cyborgs[1].id;
    placement[1][randomIndex() * 2] = cyborgs[2].id;
  } else if (comparableLastTwo) {

    placement[0][randomIndex() * 2] = cyborgs[0].id;
    let start = randomIndex();
    placement[1][start] = cyborgs[1].id;
    placement[1][start + 1] = cyborgs[2].id;

  } else {
    placement[0][randomIndex() * 2] = cyborgs[0].id;
    let start = randomIndex();
    placement[1][start] = cyborgs[1].id;
    placement[1][start + 1] = cyborgs[2].id;
  }

  return placement;
}

const createCyborgMetadata = async (
  redis: Redis,
  metadata: any,
  selectID : boolean
) => {

  // fetch id from redis
  let cyborgID = 1;

  if(selectID) cyborgID = await redis.incr("cyborgID");

  const cyborgBodyPart: Prisma.BodyPartCreateInput = {
    originPlanet: {
      name: metadata.attributes[0].value,
    },
    gender: metadata.attributes[1].value,
    helmet: metadata.attributes[3].value,
    vest: metadata.attributes[4].value,
    eye: {
      name: metadata.attributes[5].value,
      class: getEyeClass(metadata.attributes[5].value),
    },
    neck: {
      name: metadata.attributes[6].value,
      class: getNeckClass(metadata.attributes[6].value),
    },
    skin: metadata.attributes[7].value,
  };

  const cyborgTrait: Prisma.TraitsCreateInput = {
    class: metadata.attributes[2].value,
    bodyParts: cyborgBodyPart,
  };

  //create every type of quirk with no atrributes affected
  const stateBased: Prisma.QuirkCreateInput = {
    type: 1,
    attributes: [],
  };
  const criticalBased: Prisma.QuirkCreateInput = {
    type: 2,
    attributes: [],
  };
  const metaBased: Prisma.QuirkCreateInput = {
    type: 3,
    attributes: [],
  };
  const opponetBased: Prisma.QuirkCreateInput = {
    type: 4,
    attributes: [],
  };

  const cyborgData: Prisma.CyborgTCreateInput = {
    id: cyborgID, //Number(metadata.name.slice(8)), // cyborg number
    name: metadata.name,
    status: "Idle",
    cooldownPeriod: 0,
    trait: cyborgTrait,
    rank: metadata.attributes[8].value,
    level: parseInt(metadata.attributes[9].value),
    quirks: [stateBased, criticalBased, metaBased, opponetBased], // add every quirk type to quriks in cyborg data
    medal: ["Genesis"],
    stressPoint: parseFloat(metadata.attributes[12].value),
    lifePoint: parseFloat(metadata.attributes[13].value),
    health: parseFloat(metadata.attributes[14].value),
    attack: parseFloat(metadata.attributes[15].value),
    accuracy: parseFloat(metadata.attributes[16].value),
    criticalHit: parseFloat(metadata.attributes[17].value),
    speed: parseFloat(metadata.attributes[18].value),
    luck: parseFloat(metadata.attributes[19].value),
    persistence: parseFloat(metadata.attributes[20].value),
    energy: 24,
    xp: 0,
  };


  return cyborgData;
};

const getWagerSequence =async (c:any,redis : Redis) => {
  let data:any= [];
  for(let i=0;i<5;i++){
    let cyborgSequence = (await randomCyborgSequence()).join("_");
    let cyborgMetadata :any = await (await c.env.CYBORG_METADATA.get(
      `${cyborgSequence}.json`
    ))!.json();
    let cData = await createCyborgMetadata( redis, cyborgMetadata , false)

    data.push({
      sequence : cyborgSequence,
      metadata : cData
    })
  }

  return data
}

app.post("/auth/getWagerCyborgs",async (c:any) => {
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  try {
    const userAuth = c.get("user");
    const prisma: PrismaClient = getClient(c.env);
    const redis = Redis.fromEnv(c.env);
    const validInput = InputValidation.createWager.parse(reqBody);
    const betAmout = validInput.amount;

    const Tbool = isTournament();

    let gamemode : gameMode = "normal"

    let SGF1 = 0;
    let SGF2 = 0;

    let tokenRequired = convertToken(betAmout);


    if(Tbool){
      gamemode = "tournament";
      SGF2 = tokenRequired
    }else{
      SGF1 = tokenRequired
    }



    const player = await prisma.player.findUnique({
      where:{
        id: userAuth.userId
      }
    })

    let playerbalance = Tbool ? player?.SGF2! : player?.SGF1!;



    if(validInput.reRoll) tokenRequired = convertToken(10)

    if( playerbalance < tokenRequired ) return c.json({ message : "not enough tokens to bet", success : false })

    let cyborgSeqData = await getWagerSequence(c,redis)

    let wagerTx = []

    let gameID = -1;


    if(!validInput.reRoll){
      // make a game wagergame txn
      gameID = await redis.incr('gameId')
  
      let gameTx = prisma.wagerGame.create({
        data:{
          gameID : gameID,
          mode : gamemode,
          userId : userAuth.userId ,
          startTimestamp : new Date().getTime(),
          betAmount : betAmout,
          userPosition : {},
          wagerPosition : {},
          wagerSimulation : {}
        }
      })
      wagerTx.push(gameTx)   
    }
    

    let deductionTx = prisma.player.update({
      where:{
        id: userAuth.userId
      },
      data:{
        SGF1:{
          decrement: SGF1
        },
        SGF2 : {
          decrement : SGF2
        }
      }
    })

    wagerTx.push(deductionTx)

    await prisma.$transaction(wagerTx)

    return c.json({
      gameID : gameID,
      result: cyborgSeqData,
      success : true
    })
    
  } catch (e) {
    return c.text((e as Error).message, 400);
  }
})

app.post("/auth/wagerWar",async (c:any) => {
  const reqBody = await c.req.json();
  console.log("[POST] Body :: ", reqBody);

  try {
    const userAuth = c.get("user");
    const prisma: PrismaClient = getClient(c.env);
    const redis = Redis.fromEnv(c.env);
    const validInput = InputValidation.WagerWar.parse(reqBody);

    const gameID = validInput.gameId

    let game = await prisma.wagerGame.findMany({
      where:{
        gameID: gameID,
        userId : userAuth.userId
      }
    })

    if(!game[0]) return c.json({ success : false , message : "game doesn't exist" })

    // if(game[0].state != "started") return c.json({ success : false , message : "already claimed" })
    
    
    let userCyborgMetadatas: any = [];
    let wagerCyborgMetadatas: any = [];
    
    let userSeqPosition = [validInput.frontRow,validInput.backRow]; // string double array
    let userPosition = [[-1,-1,-1],[-1,-1,-1]];
    let wagerPosition = [[-1,-1,-1],[-1,-1,-1]];

    const userPlayer = await prisma.player.findUnique({
      where:{
        id: userAuth.userId
      }
    })

    // user cyborg metadata generation
    for(let i=0;i<2;i++){
      for(let j=0;j<3;j++){
        if(userSeqPosition[i][j] != "" ){
          let mData :any = await (await c.env.CYBORG_METADATA.get(
            `${userSeqPosition[i][j]}.json`
          ))!.json();
          let cData = await createCyborgMetadata( redis, mData , true)
          userCyborgMetadatas.push(cData)
          userPosition[i][j] = cData.id
        }
      }
    }

    // wager cyborgs generation
    for(let i=0;i<3;i++){
      let seq = (await randomCyborgSequence()).join("_");
      let mData :any = await (await c.env.CYBORG_METADATA.get(
        `${seq}.json`
      ))!.json();
      let cData = await createCyborgMetadata( redis, mData , true)
      wagerCyborgMetadatas.push(cData)
    }
    // wager cyborgs position
    wagerPosition = await placeCyborgs(wagerCyborgMetadatas)


    const simulationResult = await wagerSimulation(
      wagerCyborgMetadatas,
      JSON.parse(JSON.stringify(wagerPosition)),
      userCyborgMetadatas,
      JSON.parse(JSON.stringify(userPosition)),
      userPlayer?.username!,
      "wagerAi",
      RewardToken.SGF1
    );

    let won : boolean = false
    let reward = 0;

    let wagerTx : any = []

    // update game
    if(simulationResult.result.win.team === "mine"){ 
      won = true

      reward = convertToken(2 * game[0].betAmount);

      let rewardSGF1 = 0
      let rewardSGF2 = 0
  
      if(game[0].mode === "tournament") {
        rewardSGF2 = reward
      }else {
        rewardSGF1 = reward
      }

      let rewardTx = prisma.player.update({
       where : {
         id : userAuth.userId
       },
       data:{
         SGF1 : {
           increment : rewardSGF1
         },
         SGF2 : {
          increment : rewardSGF2
         }
       }
     })

     wagerTx.push(rewardTx)
    }



    let updatedGame = prisma.wagerGame.updateMany({
      where:{
        gameID : gameID
      },
      data:{
        state : "claimed",
        won : won,
        userPosition : JSON.parse(JSON.stringify(userPosition)),
        userCyborgs : userCyborgMetadatas,
        wagerPosition : JSON.parse(JSON.stringify(wagerPosition)),
        wagerCyborgs : wagerCyborgMetadatas,
        wagerSimulation : JSON.parse(JSON.stringify(simulationResult.corePlay))
      }
    })

    wagerTx.push(updatedGame)

    await prisma.$transaction(wagerTx)

    return c.json({
      result : won,
      simulation : simulationResult,
      reward : reward,
      success : true
    })
    
  } catch (e) {
    const userAuth = c.get("user");
    const prisma: PrismaClient = getClient(c.env);
    const validInput = InputValidation.WagerWar.parse(reqBody);
    const gameID = validInput.gameId;

    const Tbool = isTournament()
    let SGF1 = 0;
    let SGF2 = 0;

    let game = await prisma.wagerGame.findMany({
      where:{
        gameID: gameID,
        userId : userAuth.userId
      }
    })

    const refund = convertToken(game[0].betAmount);
    if(Tbool){
      SGF2 = refund
    }else{
      SGF2  = refund
    }


    await prisma.player.update({
      where:{
        id: userAuth.userId
      },
      data:{
        SGF1 : {
          increment : SGF1
        },
        SGF2 : {
          increment : SGF2
        }
      }
    })

    return c.json({
      success : false,
      error : (e as Error).message,
      refund : refund
    });
  }
})

// app.post("/auth/claimWager",async (c:any) => {
//   const reqBody = await c.req.json();
//   console.log("[POST] Body :: ", reqBody);

//   try{
//     const userAuth = c.get("user");
//     const prisma: PrismaClient = getClient(c.env);

//     const validInput = InputValidation.claimWager.parse(reqBody)

//     const gameID = validInput.gameId;

//     let game = await prisma.wagerGame.findMany({
//       where:{
//         gameID : gameID
//       },
//       select : {
//         betAmount :true,
//         won : true,
//         state :true
//       }
//     })

//     if(game[0].state !=  "opened" ) return c.json({ success : false , message : "Start wager fight first" })

//     let reward = 0;
//     let claimTx : any[] = []

//     if(game[0].won){
//       reward = 2 * game[0].betAmount;
//       let rewardTx = prisma.player.update({
//        where : {
//          id : userAuth.userId
//        },
//        data:{
//          SGF1 : {
//            increment : reward
//          }
//        }
//      })
//      claimTx.push(rewardTx)
//     } 


//     let gameTx = prisma.wagerGame.updateMany({
//       where :{
//         gameID : gameID
//       },
//       data : {
//         state : "claimed"
//       }
//     })

//     claimTx.push(gameTx)

//     await prisma.$transaction(claimTx)

//     return c.json({
//       success : true,
//       reward : reward
//     })
    

//   } catch (e) {
//     return c.text((e as Error).message, 400);
//   }
// })

// Show all the mounted routes
// app.showRoutes()

export default app;

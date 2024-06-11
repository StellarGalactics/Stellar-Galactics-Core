export const CyborgEyes = {
  aviator: [
    "MechaLens",
    "CyberLens",
    "QuantumLens",
    "CosmicLens",
    "StellarLens",
    "GalacticLens",
  ],
  brawler: [
  "MechaGaze",
  "CyberGaze",
  "QuantumGaze",
  "CosmicGaze",
  "StellarGaze",
  "GalacticGaze",
  ],
  marine: [
    "MechaVision",
    "CyberVision",
    "QuantumVision",
    "CosmicVision",
    "StellarVision",
    "GalacticVision",
  ],
  tactician: [
    "MechaOptics",
    "CyberOptics",
    "QuantumOptics",
    "CosmicOptics",
    "StellarOptics",
    "GalacticOptics",
  ],
  warrior: [
    "MechaSight",
    "CyberSight",
    "QuantumSight",
    "CosmicSight",
    "StellarSight",
    "GalacticSight",
  ],
};

export const CyborgNeck = {
  aviator: [
    "LunarForged",
    "SolarForged",
    "IonForged",
    "NutrinoForged",
    "StellarForged",
    "GalacticForged",
  ],
  brawler: [
    "LunarCore",
    "SolarCore",
    "IonCore",
    "NutrinoCore",
    "StellarCore",
    "GalacticCore",
  ],
  marine: [
    "LunarCharged",
    "SolarCharged",
    "IonCharged",
    "NutrinoCharged",
    "StellarCharged",
    "GalacticCharged",
  ],
  tactician: [
    "LunarTech",
    "SolarTech",
    "IonTech",
    "NutrinoTech",
    "StellarTech",
    "GalacticTech",
  ],
  warrior: [
    "LunarCrest",
    "SolarCrest",
    "IonCrest",
    "NutrinoCrest",
    "StellarCrest",
    "GalacticCrest",
  ],
};

export const CyborgOriginPlanet = {
  aviator: ["Nova Prime"],
  brawler: ["Zephyr"],
  marine: ["Arcturia"],
  tactician: ["Xandar"],
  warrior: ["Helios"],
};

export type CyborgStats = {
  health: number;
  attack: number;
  accuracy: number;
  criticalHit: number;
  speed: number;
  luck: number;
  persistence: number;
  level: number;
};


export enum CyborgSkin {
  Chocolate,
  Espresso,
  Almond,
  Beige,
  Porcelain,
  PaleIvory,
};


export enum Rank {
    Corporal,
    Sergeant,
    Major,
    Lieutenant,
    Brigadier,
    General,
}

export enum Ranks {
  Corporal,
  Sergeant,
  Major,
  Lieutenant,
  Brigadier,
  General,
}

export enum CyborgClass {
  Aviator,
  Brawler,
  Marine,
  Tactician,
  Warrior,
}

export enum RewardToken {
  SGF1, 
  SGF2
}

export type BattleCyborgs = {
  health: number;
  attack: number;
  speed: number;
  criticalHit: number;
  accuracy: number;
  luck: number;
  persistance: number;
  streesPoint: number;
};

export type cyborgBasePoint = {
  healthPoint: number;
  attackPoints: number;
  accuracyPoints: number;
  criticalHitPoints: number;
  speedPoints: number;
  luckPoints: number;
  persistencePoints: number;
};

export type mineSimulationRes = {
  participant: {
    id: number[];
    position: number[][];
  };
  mine_start_time: number;
  mine_duration: number;

  reward: {
    SGF1: number;
    SGF2: number;

    cyborgChanges : any[]
  };
}


// resetting timers to 6 hrs 360 mins
export const MAX_ZION_AT_TIME = 5;

// IN `MINs `, BUT IDEALLY THEY SHOULD BE IN UNIXTIMESTAMPss
// @TODO: CONVERT THEM IN UNIXTIMESTAMP 
export const MINE_DURATION = 60;
export const END_MINE_COOLDOWN_PERIOD = 60; // 1hrs
export const END_LOOT_COOLDOWN_PERIOD = 30; // 0.5hrs

//Mine and loot energy points
export const ENERGY_TO_MINE = 4; //originally 4
export const ENERGY_TO_LOOT = 1; // originlly 1

// Time to open LootBox
export const LOOTBOX_OPEN_DURATION = 180;

// 6 hrs lock in time in mintutes
// export const SIX_HOURS_IN_MINUTES = 5

// RANK UP lock in
export const RANKUP_LOCK_DURATION = 360

export const ZION_LOCK_DURATION = 180

// cyborg metadata calculation constants
export const baseXP = 100;
export const XPmul = 1.125;

// rankup points required     c, s,  m,  l,  b,  g
export const rankupRequired = [0,80,200,320,440,560]

// for level i Xp required is xpRequired(i)
export const xpRequired = [
  0,
  67,
  201,
  402,
  670,
  1005,
  1407,
  1876,
  2412,
  3015,
  3685,
  5159,
  6767,
  8509,
  10385,
  12395,
  14539,
  16817,
  19229,
  21775,
  24455,
  28676,
  33098,
  37721,
  42545,
  47570,
  52796,
  58223,
  63851,
  69680,
  75710,
  84018,
  92594,
  101438,
  110550,
  119930,
  129578,
  139494,
  149678,
  160130,
  170850,
  184585,
  198655,
  213060,
  227800,
  242875,
  258285,
  274030,
  290110,
  306525,
  323275,
  343777,
  364681,
  385987,
  407695,
  429805,
  452317,
  475231,
  498547,
  522265
]


// -----------------------------------token costs

// lootbox speeding cost per minute
export const LOOTBOX_SPEED_COST = 16666666

// Mint cost 200 SGF
export const MINT_COST = 200000000000

// rankup cost
// cost formula for ranks = SEARGEANT_RANKUP_COST  + ( rank - 1 )* RANKUP_INCREASE
export const SEARGEANT_RANKUP_COST = 3000000000000
export const RANKUP_INCREASE = 1000000000000

// rankup speed cost per minute
// speed cost = BASE_SPEEDUP_COST * (rank-1)
export const BASE_SPEEDUP_COST = 166666666

// zion costs
export const STRESS_REMOVAL_COST = 18000000000
export const QUIRK_REMOVAL_COST = 36000000000

export const STRESS_REMOVAL_SPEEDUP_COST = 16666666
export const QUIRK_REMOVAL_SPEEDUP_COST = 2 * STRESS_REMOVAL_SPEEDUP_COST


// daily streak rewards 

export const dailyRewards = [ 100 , 125 , 150 ,200 , 250 , 350 , 500]


// weekend tournament days - 0 -> sunday saturaday -> 6
export const tournamentDay = [6,0]

export const httpStatus = {
  CONTINUE: 100,
  SWITCHING_PROTOCOLS: 101,
  PROCESSING: 102,
  EARLY_HINTS: 103,
  OK: 200,
  CREATED: 201,
  ACCEPTED: 202,
  NO_CONTENT: 204,
  PARTIAL_CONTENT: 206,
  MOVED_PERMANENTLY: 301,
  MOVED_TEMPORARILY: 302,
  SEE_OTHER: 303,
  NOT_MODIFIED: 304,
  TEMPORARY_REDIRECT: 307,
  PERMANENT_REDIRECT: 308,
  BAD_REQUEST: 400,
  UNAUTHORIZED: 401,
  PAYMENT_REQUIRED: 402,
  FORBIDDEN: 403,
  NOT_FOUND: 404,
  METHOD_NOT_ALLOWED: 405,
  NOT_ACCEPTABLE: 406,
  REQUEST_TIMEOUT: 408,
  CONFLICT: 409,
  GONE: 410,
  LENGTH_REQUIRED: 411,
  PRECONDITION_FAILED: 412,
  REQUEST_ENTITY_TOO_LARGE: 413,
  REQUEST_URI_TOO_LONG: 414,
  UNSUPPORTED_MEDIA_TYPE: 415,
  REQUESTED_RANGE_NOT_SATISFIABLE: 416,
  MISDIRECTED_REQUEST: 421,
  TOO_MANY_REQUESTS: 429,
  INTERNAL_SERVER_ERROR: 500,
  NOT_IMPLEMENTED: 501,
  BAD_GATEWAY: 502,
  SERVICE_UNAVAILABLE: 503,
  GATEWAY_TIMEOUT: 504,
  HTTP_VERSION_NOT_SUPPORTED: 505,
  INSUFFICIENT_STORAGE: 507,
};
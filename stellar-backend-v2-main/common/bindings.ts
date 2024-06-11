import type { JwtPayload } from "@tsndr/cloudflare-worker-jwt";
export type Bindings = {
  CYBORG_METADATA: R2Bucket;
  INVITE_CODE: KVNamespace;
  DATABASE_URL: string;
  ENVIROMENT: string;
  VENGEANCE: string;
  WORMHOLE: string;
  UPSTASH_REDIS_REST_URL: string;
  UPSTASH_REDIS_REST_TOKEN: string;
  AXIOM_TOKEN: string
};

export type Variables = {
  user: JwtPayload;
};
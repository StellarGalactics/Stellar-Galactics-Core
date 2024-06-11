import { Context } from "hono";
import { Bindings, Variables } from "./bindings";

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

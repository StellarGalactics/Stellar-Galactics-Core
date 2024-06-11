import { CyborgClass } from "../node_modules/@prisma/client/edge";
import { CyborgEyes, CyborgNeck, CyborgOriginPlanet } from "./constant";


/**
 * Get the name of the class based on the eye name
 * @param name Name of the eye
 * @returns CyborgClass
 */
export const getEyeClass = (name: string): CyborgClass => {
  if (CyborgEyes.aviator.includes(name)) return CyborgClass.Aviator;
  if (CyborgEyes.brawler.includes(name)) return CyborgClass.Brawler;
  if (CyborgEyes.marine.includes(name)) return CyborgClass.Marine;
  if (CyborgEyes.tactician.includes(name)) return CyborgClass.Tactician;
  if (CyborgEyes.warrior.includes(name)) return CyborgClass.Warrior;

  // Default; but never invoke
  return CyborgClass.Aviator;
};

/**
 * Get the name of the class based on the eye name
 * @param name Name of the eye
 * @returns CyborgClass
 */
export const getNeckClass = (name: string): CyborgClass => {
  if (CyborgNeck.aviator.includes(name)) return CyborgClass.Aviator;
  if (CyborgNeck.brawler.includes(name)) return CyborgClass.Brawler;
  if (CyborgNeck.marine.includes(name)) return CyborgClass.Marine;
  if (CyborgNeck.tactician.includes(name)) return CyborgClass.Tactician;
  if (CyborgNeck.warrior.includes(name)) return CyborgClass.Warrior;

  // Default; but never invoke
  return CyborgClass.Aviator;
};
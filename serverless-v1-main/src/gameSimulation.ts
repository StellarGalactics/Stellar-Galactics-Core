import {
  Attribute,
  CyborgT,
  Game,
  LootBoxT,
  Prisma,
  Quirk,
  xpAllocation,
} from "@prisma/client/edge";
import { convertToken, random } from ".";
import {
  CyborgClass,
  CyborgEyes,
  CyborgNeck,
  CyborgOriginPlanet,
  ENERGY_TO_MINE,
  Ranks,
  XPmul,
  baseXP,
  xpRequired,
} from "./constant";
import { ENERGY_TO_LOOT, cyborgBasePoint } from "./constant";

enum Team {
  Loot,
  Mine,
}
enum HitType {
  Hit,
  CriticalHit,
  Miss,
}

enum cyborgclass {
  Aviator,
  Brawler,
  Marine,
  Tactician,
  Warrior,
}

interface Lootbox {
  xp: Object[];
  rankupPoint: number;
  SGF1: number;
  SGF2: number;
}

interface IHash {
  [key: number]: boolean;
}

interface Defender {
  id: number;
  healthChange: number;
  stressChange: number;
  skipChangesTo: boolean;
  isFaint: boolean;
  isDodge: boolean;
}

interface Attacker {
  id: number;
  healthChange: number;
  stressChange: number;
}

export const lootSimulation = async (
  validMine: Game,
  lootCyborgs: CyborgT[],
  lootPosition: number[][],
  mineUserName: string,
  lootUserName: string,
  rewardToken : number
) => {
  const mineCyborgs = validMine.mineCyborgs;
  //@ts-ignore
  const minePosition: number[][] = [
    validMine.minePosition["frontRow"],
    validMine.minePosition["backRow"],
  ];

  const attackSequenceResult = attackSequence(
    mineCyborgs,
    lootCyborgs,
    minePosition,
    lootPosition,
    mineUserName,
    lootUserName,
    rewardToken
  );

  return attackSequenceResult;
};

export const wagerSimulation = async (
  lootCyborgs: CyborgT[],
  lootPosition: number[][],
  mineCyborgs: CyborgT[],
  minePosition: number[][],
  mineUserName: string,
  lootUserName: string,
  rewardToken : number
) => {
  const attackSequenceResult = attackSequence(
    mineCyborgs,
    lootCyborgs,
    minePosition,
    lootPosition,
    mineUserName,
    lootUserName,
    rewardToken
  );

  return attackSequenceResult;
};

interface TeamDir {
  mine: {
    [key: number]: {
      cyborg: CyborgT;
      currentHealth: number;
      seqIndex: number;
      position: any;
      isHalf: boolean;
      skip: boolean;
    };
  };
  loot: {
    [key: number]: {
      cyborg: CyborgT;
      currentHealth: number;
      seqIndex: number;
      position: any;
      isHalf: boolean;
      skip: boolean;
    };
  };
}

const attackSequence = (
  mineTeam: CyborgT[],
  lootTeam: CyborgT[],
  minePoistion: number[][],
  lootPoistion: number[][],
  mineUserName: string,
  lootUserName: string,
  rewardToken : number
) => {
  console.log("started");

  let mineCyborgPosition = minePoistion;
  let lootCyborgPosition = lootPoistion;

  let finalSimulationResult = {
    mineUserName,
    lootUserName,
    result: {
      win: {
        team: "",
        reward: {
          SGF1: 0,
          SGF2: 0,
          lootbox: {} as Lootbox,
          cyborgChanges: [] as any[], //quirks alloted to win team
        },
      },

      loss: {
        team: "",
        reward: {
          SGF1: 0,
          SGF2: 0,
          lootbox: {} as Lootbox,
          cyborgChanges: [] as any[], //quirks alloted to loosing team
        },
      },
    },

    gamePosition: {
      loot: {},
      mine: {},
    },

    participant: {
      loot: lootTeam,
      mine: mineTeam,
    },
    prePlay: {
      //preplay records actions/effects of opponent based quirks
      mine: [] as any[],
      loot: [] as any[],
    },
    corePlay: [{}],
    postPlay: {
      //post play to record effects of state based quirks
      mine: [] as any[],
      loot: [] as any[],
    },
  };

  finalSimulationResult.gamePosition.loot = JSON.parse(
    JSON.stringify({
      frontRow: lootCyborgPosition[0],
      backRow: lootCyborgPosition[1],
    })
  );

  finalSimulationResult.gamePosition.mine = JSON.parse(
    JSON.stringify({
      frontRow: mineCyborgPosition[0],
      backRow: mineCyborgPosition[1],
    })
  );

  /**
   * ---------------------------- Creating a Team(Mine + Loot) Directory ------------------------------
   * Used for holding information like [cyborgID] = cyborg_metadata with their position and index in mineSeq
   */
  let teamDir: TeamDir = {
    mine: {},
    loot: {},
  };

  mineTeam.forEach((cyborg) => {
    teamDir["mine"][cyborg.id] = {
      cyborg: JSON.parse(JSON.stringify(cyborg)),
      currentHealth: cyborg.health,
      seqIndex: 0,
      position: 0,
      isHalf: false,
      skip: false,
    };
  });
  lootTeam.forEach((cyborg) => {
    teamDir["loot"][cyborg.id] = {
      cyborg: JSON.parse(JSON.stringify(cyborg)),
      currentHealth: cyborg.health,
      seqIndex: 0,
      position: 0,
      isHalf: false,
      skip: false,
    };
  });

  // _______________________________ SAVING INITIAL METADTA/TEAM___________________
  const initTeamDir: TeamDir = teamDir;

  //TODO :: process Opponent based quirks before battle sequence begins
  //type = 4 (opponent based quirks)
  // aviator - 1 , brawler-2 , marine-3 , tactitian-4 , warrior-5
  let mineClassPresent = [false, false, false, false, false];
  let lootClassPresent = [false, false, false, false, false];

  //luckpoints for each team
  let mineLuckPoints = 0;
  let lootLuckPoints = 0;

  //visit loot/mine directory and mark classes availabilty in arrays
  for (const mineDirKey in teamDir.mine) {
    let classname = cyborgclass[teamDir.mine[mineDirKey].cyborg.trait.class]; //converts className to index
    mineClassPresent[classname] = true;
    mineLuckPoints += teamDir.mine[mineDirKey].cyborg.luck;
  }
  for (const lootDirKey in teamDir.loot) {
    let classname = cyborgclass[teamDir.loot[lootDirKey].cyborg.trait.class]; //converts className to index
    lootClassPresent[classname] = true;
    mineLuckPoints += teamDir.loot[lootDirKey].cyborg.luck;
  }

  // console.log("mineluck:: ", mineLuckPoints);
  // console.log("lootluck:: ", lootLuckPoints);

  //process quirks
  for (const mineDirKey in teamDir.mine) {
    let quirkProcess = {
      cyborgID: mineDirKey,
      quirkEffects: [] as any[],
    };
    let opBasedQ = teamDir.mine[mineDirKey].cyborg.quirks[3].attributes; //array of all opponent based quirks | 3 = type-1 = 4-1 (index of the quirk type 4 in quirks array)
    opBasedQ.forEach((q: Attribute) => {
      let value = 0;
      if (lootClassPresent[q.attribute - 1]) {
        //check if this affecting attribute present in lootsequence or not
        //then increase/decrease all state by value
        let eff = q.effect;
        eff === 1
          ? (value = 5)
          : eff === 2
          ? (value = -5)
          : eff === 3
          ? (value = 10)
          : eff === 4
          ? (value = -10)
          : eff === 5
          ? (value = 20)
          : (value = -20);
        let cyborg = teamDir.mine[mineDirKey].cyborg;
        // change all the stat by this value% --> 0.01*value
        let deltaHealth = cyborg.health * (0.01 * value);
        // let deltaStress = cyborg.stressPoint*(0.01*value);
        let deltaCriticalHit = cyborg.criticalHit * (0.01 * value);
        let deltaSpeed = cyborg.speed * (0.01 * value);
        let deltaAttack = cyborg.attack * (0.01 * value);
        let deltaAccuracy = cyborg.accuracy * (0.01 * value);
        let deltaLuck = cyborg.luck * (0.01 * value);
        let deltapersistence = cyborg.persistence * (0.01 * value);

        //assign it to cyborg values
        teamDir.mine[mineDirKey].currentHealth += deltaHealth;
        // teamDir.mine[mineDirKey].cyborg.stressPoint += deltaStress;
        teamDir.mine[mineDirKey].cyborg.criticalHit += deltaCriticalHit;
        teamDir.mine[mineDirKey].cyborg.speed += deltaSpeed;
        teamDir.mine[mineDirKey].cyborg.attack += deltaAttack;
        teamDir.mine[mineDirKey].cyborg.accuracy += deltaAccuracy;
        teamDir.mine[mineDirKey].cyborg.luck += deltaLuck;
        teamDir.mine[mineDirKey].cyborg.persistence += deltapersistence;

        //add changes to preplay
        quirkProcess.quirkEffects.push({
          quirk: q,
          deltaHealth: deltaHealth,
          // 'deltaStress' : deltaStress,
          deltaCriticalHit: deltaCriticalHit,
          deltaSpeed: deltaSpeed,
          deltaAttack: deltaAttack,
          deltaAccuracy: deltaAccuracy,
          deltaLuck: deltaLuck,
          deltapersistence: deltapersistence,
        });
      }
    });
    //push to preplay
    finalSimulationResult.prePlay.mine.push(quirkProcess);
  }

  for (const lootDirKey in teamDir.loot) {
    let quirkProcess = {
      cyborgID: lootDirKey,
      quirkEffects: [] as any[],
    };
    let opBasedQ = teamDir.loot[lootDirKey].cyborg.quirks[3].attributes; //array of all opponent based quirks | 3 = type-1 = 4-1 (index of the quirk type 4 in quirks array)
    opBasedQ.forEach((q: Attribute) => {
      let value = 0;
      if (lootClassPresent[q.attribute - 1]) {
        //check if this affecting attribute present in lootsequence or not
        //then increase/decrease all state by value
        let eff = q.effect;
        eff === 1
          ? (value = 5)
          : eff === 2
          ? (value = -5)
          : eff === 3
          ? (value = 10)
          : eff === 4
          ? (value = -10)
          : eff === 5
          ? (value = 20)
          : (value = -20);
        let cyborg = teamDir.loot[lootDirKey].cyborg;
        // change all the stat by this value% --> 0.01*value
        let deltaHealth = cyborg.health * (0.01 * value);
        // let deltaStress = cyborg.stressPoint*(0.01*value);
        let deltaCriticalHit = cyborg.criticalHit * (0.01 * value);
        let deltaSpeed = cyborg.speed * (0.01 * value);
        let deltaAttack = cyborg.attack * (0.01 * value);
        let deltaAccuracy = cyborg.accuracy * (0.01 * value);
        let deltaLuck = cyborg.luck * (0.01 * value);
        let deltapersistence = cyborg.persistence * (0.01 * value);

        //assign it to cyborg values
        teamDir.loot[lootDirKey].currentHealth += deltaHealth;
        teamDir.loot[lootDirKey].cyborg.criticalHit += deltaCriticalHit;
        teamDir.loot[lootDirKey].cyborg.speed += deltaSpeed;
        teamDir.loot[lootDirKey].cyborg.attack += deltaAttack;
        teamDir.loot[lootDirKey].cyborg.accuracy += deltaAccuracy;
        teamDir.loot[lootDirKey].cyborg.luck += deltaLuck;
        teamDir.loot[lootDirKey].cyborg.persistence += deltapersistence;

        //add changes to preplay
        quirkProcess.quirkEffects.push({
          quirk: q,
          deltaHealth: deltaHealth,
          // 'deltaStress' : deltaStress,
          deltaCriticalHit: deltaCriticalHit,
          deltaSpeed: deltaSpeed,
          deltaAttack: deltaAttack,
          deltaAccuracy: deltaAccuracy,
          deltaLuck: deltaLuck,
          deltapersistence: deltapersistence,
        });
      }
    });
    // append preplay
    finalSimulationResult.prePlay.loot.push(quirkProcess);
  }


  //--------------------------- Done ----------------------------------------

  /**
   * ---------------------------- Creating Mine and Loot sequence ------------------------------
   * Holding information like which cyborg of team(mine, loot) goes first to attack
   * sorted on basis of their speed in descending order
   */
  let mineSeq: any[] = [];
  let lootSeq: any[] = [];


  const mineTeamSorted = mineTeam.sort((a, b) => b.speed - a.speed);

  mineTeamSorted.forEach((c) => {
    //console.log(`checking ${c.id}`);

    mineCyborgPosition.forEach((x, i) => {
      x.forEach((y, ii) => {
        if (y === c.id) {
          //console.log(`adding ID ${y}`);
          mineSeq.push([i, ii]);
          teamDir["mine"][c.id].position = [i, ii];
          teamDir["mine"][c.id].seqIndex = mineSeq.length - 1;
        }
      });
    });
  });

  const lootTeamSorted = lootTeam.sort((a, b) => b.speed - a.speed);
  //console.log("lootTeamSorted:: ",JSON.stringify(lootTeamSorted));

  lootTeamSorted.forEach((c) => {
    lootCyborgPosition.forEach((x, i) => {
      x.forEach((y, ii) => {
        if (y === c.id) {
          lootSeq.push([i, ii]);
          //console.log(`adding ID ${y}`);
          teamDir["loot"][c.id].position = [i, ii];
          teamDir["loot"][c.id].seqIndex = lootSeq.length - 1;
        }
      });
    });
  });


  const winTeam: Team = teamToss(mineTeam, lootTeam);
  ////console.log( "[LOOT SIMULATION] Winning team :: ", winTeam === 0 ? "Looter" : "Miner");

  let attackingTeamIndex = winTeam; // Winning team will attack first
  let mineTeamPointer: number = 0; // Indicating pointer in mineSeq
  let lootTeamPointer: number = 0; // Indicating pointer in lootSeq

  // run the while loop untill any-one teamSequens list is 0;
  let corePlay = [];
  let globalCounter = 0;

  // console.log("started");
  

  while (mineSeq.length !== 0 && lootSeq.length !== 0) {
    // console.log("\n\n");
    // console.log(`Global Counter :: ${globalCounter}`);
    //console.log("----------------------------------------sequence---------------------------------------------------------------");

    ////console.log(`Attacking Team :: ${attackingTeamIndex === Team.Loot ? 'LOOT' : 'MINE'}`);

    let attackingTeamSeq = attackingTeamIndex === Team.Loot ? lootSeq : mineSeq;
    let opponentTeamSeq = attackingTeamIndex === Team.Loot ? mineSeq : lootSeq;

    //console.log(`attackingTeamSeq :: ${JSON.stringify(attackingTeamSeq)}`);
    //console.log(`opponentTeamSeq :: ${JSON.stringify(opponentTeamSeq)}`);

    let attackingCyborgPosition: number[][] =
      attackingTeamIndex === Team.Loot
        ? lootCyborgPosition
        : mineCyborgPosition;
    let defenderCyborgPosition: number[][] =
      attackingTeamIndex === Team.Loot
        ? mineCyborgPosition
        : lootCyborgPosition;


    // ----------------- Attacker Locked ---------------------------
    let attackerPointer =
      attackingTeamIndex === Team.Loot ? lootTeamPointer : mineTeamPointer;
    let attackerCoordinate = attackingTeamSeq[attackerPointer];


    let attackerIndex = attackerCoordinate[1]; // attacker exact position in the cols
    ////console.log(`attacker Index :: ${attackerIndex}`);

    const attackerId =
      attackingCyborgPosition[attackerCoordinate[0]][attackerCoordinate[1]];
    const attacker =
      attackingTeamIndex === Team.Loot
        ? teamDir.loot[attackerId]
        : teamDir.mine[attackerId];


    // ----------------- Defender/Opponent Locked ----------------------------
    const [opponentId, opponentPosition] = findOpponent(
      attackerIndex,
      defenderCyborgPosition
    );

    const defender =
      attackingTeamIndex === Team.Loot
        ? teamDir.mine[opponentId]
        : teamDir.loot[opponentId];

    // -----------------------core play if skip not true ---------------------------------------

    if (!attacker.skip) {
      //-----skip checks begin
      // ----------------- Battle Begins ----------------------------
      const battleResult = battlePlay(
        attacker.cyborg,
        defender.cyborg,
        defenderCyborgPosition,
        attackingCyborgPosition,
        teamDir,
        attackingTeamIndex
      );

      // console.log("Battle Result :: ",JSON.stringify(battleResult))



      let attackerCyborgs: any = [];
      let defenderCyborgs: any = [];

      if (attackingTeamIndex === Team.Loot) {
        battleResult.defenders.forEach((c: Defender) => {
          let cHealth = teamDir.mine[c.id].currentHealth;
          let stress = teamDir.mine[c.id].cyborg.stressPoint;
          teamDir.mine[c.id].currentHealth += Math.max(
            -(cHealth - 1),
            c.healthChange
          );
          teamDir.mine[c.id].cyborg.stressPoint += Math.max(
            Math.min(c.stressChange, 100 - stress),
            -stress
          );

          if (c.skipChangesTo) {
            teamDir.mine[c.id].skip = c.skipChangesTo;
          }

          defenderCyborgs.push({
            cyborgID: c.id,
            position: teamDir.mine[c.id].position,
            attack: teamDir.mine[c.id].cyborg.attack,
            stressChange: Math.max(
              Math.min(c.stressChange, 100 - stress),
              -stress
            ),
            stress: teamDir.mine[c.id].cyborg.stressPoint,
            healthChange: c.isFaint
              ? -1
              : Math.max(-(cHealth - 1), c.healthChange),
            health: c.isFaint ? 0 : teamDir.mine[c.id].currentHealth,
            isFaint: c.isFaint,
            isDodge: c.isDodge,
            gotSkip: c.skipChangesTo,
          });
        });
        battleResult.attackers.forEach((c: Attacker) => {
          let cHealth = teamDir.loot[c.id].currentHealth; //current health
          let mHealth = teamDir.loot[c.id].cyborg.health; //max intial health
          let stress = teamDir.loot[c.id].cyborg.stressPoint; // current stress
          teamDir.loot[c.id].currentHealth += Math.min(
            mHealth - cHealth,
            c.healthChange
          );
          teamDir.loot[c.id].cyborg.stressPoint += Math.max(
            Math.min(c.stressChange, 100 - stress),
            -stress
          );

          attackerCyborgs.push({
            cyborgID: c.id,
            position: teamDir.loot[c.id].position,
            attack: teamDir.loot[c.id].cyborg.attack,
            stressChange: Math.max(
              Math.min(c.stressChange, 100 - stress),
              -stress
            ),
            stress: teamDir.loot[c.id].cyborg.stressPoint,
            healthChange: Math.min(mHealth - cHealth, c.healthChange),
            health: teamDir.loot[c.id].currentHealth,
          });
        });
      } else {
        battleResult.defenders.forEach((c: Defender) => {
          let cHealth = teamDir.loot[c.id].currentHealth;
          let stress = teamDir.loot[c.id].cyborg.stressPoint;
          teamDir.loot[c.id].currentHealth += Math.max(
            -(cHealth - 1),
            c.healthChange
          );
          teamDir.loot[c.id].cyborg.stressPoint += Math.max(
            Math.min(c.stressChange, 100 - stress),
            -stress
          );

          if (c.skipChangesTo) {
            teamDir.loot[c.id].skip = c.skipChangesTo;
          }

          defenderCyborgs.push({
            cyborgID: c.id,
            position: teamDir.loot[c.id].position,
            attack: teamDir.loot[c.id].cyborg.attack,
            stressChange: Math.max(
              Math.min(c.stressChange, 100 - stress),
              -stress
            ),
            stress: teamDir.loot[c.id].cyborg.stressPoint,
            healthChange: c.isFaint
              ? -1
              : Math.max(-(cHealth - 1), c.healthChange),
            health: c.isFaint ? 0 : teamDir.loot[c.id].currentHealth,
            isFaint: c.isFaint,
            isDodge: c.isDodge,
            gotSkip: c.skipChangesTo,
          });
        });
        battleResult.attackers.forEach((c: Attacker) => {
          let cHealth = teamDir.mine[c.id].currentHealth; //current health
          let mHealth = teamDir.mine[c.id].cyborg.health; //max intial health
          let stress = teamDir.mine[c.id].cyborg.stressPoint; // current stress
          teamDir.mine[c.id].currentHealth += Math.min(
            mHealth - cHealth,
            c.healthChange
          );
          teamDir.mine[c.id].cyborg.stressPoint += Math.max(
            Math.min(c.stressChange, 100 - stress),
            -stress
          );

          attackerCyborgs.push({
            cyborgID: c.id,
            position: teamDir.mine[c.id].position,
            attack: teamDir.mine[c.id].cyborg.attack,
            stressChange: Math.max(
              Math.min(c.stressChange, 100 - stress),
              -stress
            ),
            stress: teamDir.mine[c.id].cyborg.stressPoint,
            healthChange: Math.min(mHealth - cHealth, c.healthChange),
            health: teamDir.mine[c.id].currentHealth,
          });
        });
      }

      //----------- processing fainted cyborgs ----------------------------

      let faintCyborgs: number[] = [];
      battleResult.defenders.forEach((c: Defender) => {
        if (c.isFaint) {
          faintCyborgs.push(c.id);
        }
      });

      //if someone faints; remove(-1) them from [mine/loot]CyborgPosition and update the defenderSeq
      if (faintCyborgs.length > 0) {
        // Faiupdate opponent sequence by pluckingnted cyborgs
        let newSeq: any = [];
        if (attackingTeamIndex === Team.Loot) {
          mineSeq.forEach((seq) => {
            let [i, ii] = seq;

            // if this position in seq is not in faintcyborgs then add to defenderSeq
            //else set that cyborgposition to -1
            if (!faintCyborgs.includes(mineCyborgPosition[i][ii])) {
              newSeq.push(seq);
            } else {
              mineCyborgPosition[i][ii] = -1;
            }
          });
          mineSeq = newSeq;
          // console.log(`new defennder Seq : `,mineSeq);
        } else {
          lootSeq.forEach((seq) => {
            let [i, ii] = seq;

            // if this position in seq is not in faintcyborgs then add to newSeq
            //else set that cyborgposition to -1
            if (!faintCyborgs.includes(lootCyborgPosition[i][ii])) {
              newSeq.push(seq);
            } else {
              lootCyborgPosition[i][ii] = -1;
            }
          });
          lootSeq = newSeq;
        }


        // reasoning behind this is; if upcoming-opponet got dead, then the next opponent should be updateded in seq.
        if (attackingTeamIndex === Team.Loot) {
          if (mineSeq.length <= mineTeamPointer) {
            mineTeamPointer = 0;
          }
        } else {
          if (lootSeq.length <= lootTeamPointer) {
            lootTeamPointer = 0;
          }
        }
      }

      // ----------------- Postmartam is going on ----------------------------
      let minePostmartam: any = [];
      function checkMinePostmartam() {
        // flag for breaking while loop after recursive call
        let stop = false;

        let seqCounter = 0;
        while (mineSeq.length > 0 && seqCounter !== mineSeq.length && !stop) {
          let seq = mineSeq[seqCounter];
          // mineSeq.forEach((seq, mineSeqIndex) => {
          let mpostmartam: any = {
            flee: {},
            selfStress: {},
          };
          for (const mineTeamDirkey in teamDir.mine) {
            if (
              teamDir.mine[mineTeamDirkey].position.toString() ===
              seq.toString()
            ) {
              // Check for flee
              if (teamDir.mine[mineTeamDirkey].cyborg.stressPoint >= 100) {
                const cyborgPosition = seq;

                //upadte lifepoints of the flee cyborg
                //console.log("cyborg metadta who flee :: ", JSON.stringify(teamDir.mine[mineTeamDirkey].cyborg));
                teamDir.mine[mineTeamDirkey].cyborg.lifePoint -= 5;

                // Remove stressed cyborg from the sequence
                let newSeq: any = [];
                mineSeq.forEach((nseq) => {
                  if (seq.toString() !== nseq.toString()) {
                    newSeq.push(nseq);
                  }
                });
                mineSeq = newSeq;
                mineCyborgPosition[cyborgPosition[0]][cyborgPosition[1]] = -1;

                // Adjust pointer
                //critical change :: changed === to <=
                if (mineSeq.length <= mineTeamPointer) {
                  mineTeamPointer = 0;
                }

                // Increase everyone stress
                // let tempMPHolder: number[][] = [];
                let tempMPHolder: any = []
                mineSeq.forEach((e) => {
                  for (const ky in teamDir.mine) {
                    if (teamDir.mine[ky].position.toString() === e.toString()) {
                      // teamDir.mine[ky].cyborg.stressPoint += 10;
                      let stress = teamDir.mine[ky].cyborg.stressPoint;
                      teamDir.mine[ky].cyborg.stressPoint = Math.min(
                        100,
                        stress + 10
                      );
                      // tempMPHolder.push([
                      //   teamDir.mine[ky].cyborg.id,
                      //   teamDir.mine[ky].cyborg.stressPoint,
                      // ]);
                      tempMPHolder.push({
                        "cyborgID":teamDir.mine[ky].cyborg.id,
                        "stress": teamDir.mine[ky].cyborg.stressPoint,
                      });
                    }
                  }
                });

                // Update mine postmartam
                mpostmartam["flee"]["id"] = mineTeamDirkey;
                mpostmartam["flee"]["remaningTeam"] = tempMPHolder;
                minePostmartam.push(mpostmartam);

                // Self recursive call
                checkMinePostmartam();
                stop = true;
              } else if (
                (teamDir.mine[mineTeamDirkey].cyborg.stressPoint >= 50 ||
                  teamDir.mine[mineTeamDirkey].currentHealth === 1) &&
                teamDir.mine[mineTeamDirkey].isHalf === false
              ) {
                //console.log("============================ MINE HALFING");
                // Can't half health 1; game-logic constraint.
                if (teamDir.mine[mineTeamDirkey].currentHealth !== 1) {
                  teamDir.mine[mineTeamDirkey].currentHealth /= 2;
                  teamDir.mine[mineTeamDirkey].cyborg.persistence /= 2;
                }
                teamDir.mine[mineTeamDirkey].cyborg.attack /= 2;
                teamDir.mine[mineTeamDirkey].cyborg.accuracy /= 2;
                teamDir.mine[mineTeamDirkey].cyborg.criticalHit /= 2;
                teamDir.mine[mineTeamDirkey].cyborg.speed /= 2;
                teamDir.mine[mineTeamDirkey].cyborg.luck /= 2;

                // Update isHalf to true
                teamDir.mine[mineTeamDirkey].isHalf = true;

                // Half the stats
                mpostmartam["selfStress"]["id"] = mineTeamDirkey;
                mpostmartam["selfStress"]["state"] = {
                  currentHealth: teamDir.mine[mineTeamDirkey].currentHealth,
                  attack: teamDir.mine[mineTeamDirkey].cyborg.attack,
                  accuracy: teamDir.mine[mineTeamDirkey].cyborg.accuracy,
                  criticalHit: teamDir.mine[mineTeamDirkey].cyborg.criticalHit,
                  speed: teamDir.mine[mineTeamDirkey].cyborg.speed,
                  luck: teamDir.mine[mineTeamDirkey].cyborg.luck,
                  persistence: teamDir.mine[mineTeamDirkey].cyborg.persistence,
                };

                minePostmartam.push(mpostmartam);
              }
            }
          }

          seqCounter++;
        }
      }

      let lootPostmartam: any = [];
      function checkLootPostmartam() {
        // flag for breaking while loop after recursive call
        let stop = false;

        let seqCounter = 0;
        // console.log("loot seq for this iteration :: ",JSON.stringify(lootSeq));
        while (lootSeq.length > 0 && seqCounter !== lootSeq.length && !stop) {
          // console.log("index:: ",seqCounter)
          let seq = lootSeq[seqCounter];
          // console.log("checking seq ----- :: ",JSON.stringify(seq))
          let lpostmartam: any = {
            flee: {},
            selfStress: {},
          };
          for (const teamLootkey in teamDir.loot) {
            if (
              teamDir.loot[teamLootkey].position.toString() === seq.toString()
            ) {
              // Check for flee
              if (teamDir.loot[teamLootkey].cyborg.stressPoint >= 100) {
                const cyborgPosition = seq;

                //upadte lifepoints
                //console.log("metadata of flee cyborg :: ",JSON.stringify(teamDir.loot[teamLootkey].cyborg))
                teamDir.loot[teamLootkey].cyborg.lifePoint -= 5;

                // Remove stressed cyborg from the sequence
                let newSeq: any = [];
                // console.log("--------drama------");
                // console.log(`after before newSeq :: ${JSON.stringify(newSeq)}`)

                lootSeq.forEach((nseq) => {
                  if (seq.toString() !== nseq.toString()) {
                    newSeq.push(nseq);
                  }
                });
                lootSeq = newSeq;
                lootCyborgPosition[cyborgPosition[0]][cyborgPosition[1]] = -1;

                // Adjust pointer
                if (lootSeq.length <= lootTeamPointer) {
                  lootTeamPointer = 0;
                }

                // Increase everyone stress
                // let tempLPHolder: number[][] = [];
                let tempLPHolder: any = []
                lootSeq.forEach((e) => {
                  for (const ky in teamDir.loot) {
                    // console.log("am i stuck here??")
                    if (teamDir.loot[ky].position.toString() === e.toString()) {
                      // maxcap for stress is 100
                      let stress = teamDir.loot[ky].cyborg.stressPoint;
                      teamDir.loot[ky].cyborg.stressPoint = Math.min(
                        100,
                        stress + 10
                      );
                      // tempLPHolder.push([
                      //   teamDir.loot[ky].cyborg.id,
                      //   teamDir.loot[ky].cyborg.stressPoint,
                      // ]);
                      tempLPHolder.push({
                        "cyborgID":teamDir.mine[ky].cyborg.id,
                        "stress": teamDir.mine[ky].cyborg.stressPoint,
                      });
                    }
                  }
                });

                // Update mine postmartam
                lpostmartam["flee"]["id"] = teamLootkey;
                lpostmartam["flee"]["remaningTeam"] = tempLPHolder;
                lootPostmartam.push(lpostmartam);
                checkLootPostmartam();
                stop = true;
              } else if (
                (teamDir.loot[teamLootkey].cyborg.stressPoint >= 50 ||
                  teamDir.loot[teamLootkey].currentHealth === 1) &&
                teamDir.loot[teamLootkey].isHalf === false
              ) {

                // Half the stats

                // Can't half health 1; game-logic constraint.
                if (teamDir.loot[teamLootkey].currentHealth !== 1) {
                  teamDir.loot[teamLootkey].currentHealth /= 2;
                  teamDir.loot[teamLootkey].cyborg.persistence /= 2;
                }

                teamDir.loot[teamLootkey].cyborg.attack /= 2;
                teamDir.loot[teamLootkey].cyborg.accuracy /= 2;
                teamDir.loot[teamLootkey].cyborg.criticalHit /= 2;
                teamDir.loot[teamLootkey].cyborg.speed /= 2;
                teamDir.loot[teamLootkey].cyborg.luck /= 2;

                teamDir.loot[teamLootkey].isHalf = true;

                // Half the stats
                lpostmartam["selfStress"]["id"] = teamLootkey;
                lpostmartam["selfStress"]["state"] = {
                  //@TODO: Change `state` to `stats`
                  currentHealth: teamDir.loot[teamLootkey].currentHealth,
                  attack: teamDir.loot[teamLootkey].cyborg.attack,
                  accuracy: teamDir.loot[teamLootkey].cyborg.accuracy,
                  criticalHit: teamDir.loot[teamLootkey].cyborg.criticalHit,
                  speed: teamDir.loot[teamLootkey].cyborg.speed,
                  luck: teamDir.loot[teamLootkey].cyborg.luck,
                  persistence: teamDir.loot[teamLootkey].cyborg.persistence,
                };
                lootPostmartam.push(lpostmartam);
              }
            }
          }

          seqCounter++;
          // });
        }
      }

      checkMinePostmartam();

      checkLootPostmartam();

      //coreply if skip False
      corePlay.push({
        skip: attacker.skip,
        hit: battleResult.hit,
        attackerID: attacker.cyborg.id,
        attackers: attackerCyborgs,
        defenders: defenderCyborgs,
        postmartam: { minePostmartam, lootPostmartam },
      });

    } else {
      //console.log("--------------------------------------skipped--------------------------------");
      // Setting `skip`` false for next run.
      if (attackingTeamIndex === Team.Loot) {
        teamDir.loot[attacker.cyborg.id].skip = false;
      } else {
        teamDir.mine[attacker.cyborg.id].skip = false;
      }

      //coreplay push if skip True
      corePlay.push({
        skip: true,
        attacker: {
          cyborgID: attacker.cyborg.id,
          position: attacker.position,
        },
      });
    }

    // Increase attacker team pointer
    if (attackingTeamIndex === Team.Loot) {
      if (lootTeamPointer == lootSeq.length - 1) {
        lootTeamPointer = 0;
      } else {
        lootTeamPointer += 1;
      }
    } else {
      if (mineTeamPointer == mineSeq.length - 1) {
        mineTeamPointer = 0;
      } else {
        mineTeamPointer += 1;
      }
    }

    // Increase global counter
    globalCounter += 1;

    // At the end of sequence change attacking team index
    // If attackingTeamIndex is Loot then change it to Mine otherwise do vice-verse
    attackingTeamIndex =
      attackingTeamIndex === Team.Loot ? Team.Mine : Team.Loot;
  }

  // rewards and quirks
  //for every cyborg{ genQuirks } adn add it to postPlay
  let mineCyborgsChanges = [];
  for (const mineTeamDirkey in teamDir.mine) {
    // console.log("\n Quirks Gen for ID:: ", mineTeamDirkey);
    let prevQuriks = teamDir.mine[mineTeamDirkey].cyborg.quirks;
    let curLevel = teamDir.mine[mineTeamDirkey].cyborg.level;
    let curXP = teamDir.mine[mineTeamDirkey].cyborg.xp;
    let curRank = teamDir.mine[mineTeamDirkey].cyborg.rank;
    let normalisedLevel = curLevel + Ranks[curRank] * 10;
    let className = teamDir.mine[mineTeamDirkey].cyborg.trait.class;
    let classnumber = Object.values(CyborgClass).indexOf(className) + 1;


    const XpPerMatch =
      baseXP + baseXP * Math.floor((normalisedLevel - 1) / 10) * XPmul;
    let newXP: number = curXP;
    if (curXP < xpRequired[normalisedLevel]) {
      newXP = curXP + XpPerMatch;
      if(curLevel === 10){
        newXP = Math.min( xpRequired[normalisedLevel] , newXP );
      }
    }

    let newLevel = curLevel;
    let levelUp = false;
    let metadataUpdate: any = {};
    if (newXP >= xpRequired[normalisedLevel] && curLevel < 10) {
      newLevel += 1;
      let newNormalisedLevel = newLevel + Ranks[curRank] * 10;
      levelUp = true;
      //after level up update health,attack,accuracy,critical,speed,luck,persistence
      const newMetadta = genStats(
        newNormalisedLevel,
        teamDir.mine[mineTeamDirkey].cyborg
      );
      // updating in case it effects Quirks effect
      teamDir.mine[mineTeamDirkey].cyborg.health = newMetadta.health;
      teamDir.mine[mineTeamDirkey].cyborg.attack = newMetadta.attack;
      teamDir.mine[mineTeamDirkey].cyborg.accuracy = newMetadta.accuracy;
      teamDir.mine[mineTeamDirkey].cyborg.criticalHit = newMetadta.criticalHit;
      teamDir.mine[mineTeamDirkey].cyborg.speed = newMetadta.speed;
      teamDir.mine[mineTeamDirkey].cyborg.luck = newMetadta.luck;
      teamDir.mine[mineTeamDirkey].cyborg.persistence = newMetadta.persistence;
      metadataUpdate = {
        health: newMetadta.health,
        attack: newMetadta.attack,
        accuracy: newMetadta.accuracy,
        criticalHit: newMetadta.criticalHit,
        speed: newMetadta.speed,
        luck: newMetadta.luck,
        persistence: newMetadta.persistence,
      };
      // console.log("after level up :: ", JSON.stringify(metadataUpdate))

      // run every stat effect on this again. type = 1
      teamDir.mine[mineTeamDirkey].cyborg.quirks[0].attributes.forEach( quirk => {
        let res = statQuirkValue(quirk.attribute,quirk.effect)
        let field = res.field;
        let value = res.value;
        // console.log(`====>\n ${field} effected by ${value}`)

        // effect on new metadata
        metadataUpdate[field] = teamDir.mine[mineTeamDirkey].cyborg[field] + teamDir.mine[mineTeamDirkey].cyborg[field] * value * 0.01;
      });

      // console.log("final metadata after reapplying stat quirks :: ",JSON.stringify(metadataUpdate))

    }

    teamDir.mine[mineTeamDirkey].cyborg.xp = newXP;
    teamDir.mine[mineTeamDirkey].cyborg.level = newLevel;
    // console.log("updated metadata :: ", JSON.stringify(metadataUpdate));

    // reset metadata due to any opponent based quirk

    //generating quirks if stress > 50
    let [type, attribute, effect] =
      teamDir.mine[mineTeamDirkey].cyborg.stressPoint < 50
        ? [null]
        : genQuirk(prevQuriks,classnumber);
    // update metadata based quirks
    if (type && attribute && effect) {
      // @TODO: If we get type 3 quirk then assign new one instead type 3
      // if(type===3)
      // assign the new Attribute
      const newAttribute: Prisma.AttributeCreateInput = {
        attribute: attribute,
        effect: effect,
      };
      teamDir.mine[mineTeamDirkey].cyborg.quirks[type - 1].attributes.push(
        newAttribute
      );

      //process if it's a state based quirk
      if (type === 1) {

        let res = statQuirkValue(attribute,effect);
        let field : string = res.field;
        let value : number = res.value;

        //  IMPORTANT : if no levelup then take metadta from initTeamDir
        let changedData;
        if (levelUp) {
          changedData =
            teamDir.mine[mineTeamDirkey].cyborg[field] +
            teamDir.mine[mineTeamDirkey].cyborg[field] * value * 0.01;
        } else {
          changedData =
            initTeamDir.mine[mineTeamDirkey].cyborg[field] +
            initTeamDir.mine[mineTeamDirkey].cyborg[field] * value * 0.01;
        }
        // @ts-ignore
        metadataUpdate[field] = changedData;
      }
    }

    // before pushing metadata check accuracy and crit above hudred then set to 100
    // metadataUpdate["accuracy"] = Math.min( metadataUpdate["accuracy"] , 100 )
    // metadataUpdate["criticalHit"] = Math.min( metadataUpdate["criticalHit"] , 100 )


    mineCyborgsChanges.push({
      cyborgID: mineTeamDirkey,
      levelUp: levelUp,
      level: newLevel,
      xp: newXP,
      newQuirk: [type, attribute, effect],
      quirks: teamDir.mine[mineTeamDirkey].cyborg.quirks,
      stress: teamDir.mine[mineTeamDirkey].cyborg.stressPoint,
      lifepoint: teamDir.mine[mineTeamDirkey].cyborg.lifePoint,
      energy: teamDir.mine[mineTeamDirkey].cyborg.energy - ENERGY_TO_MINE,
      metadataUpdate,
    });
  }

  let lootCyborgsChanges = [];
  for (const lootTeamDirkey in teamDir.loot) {
    console.log("\n cyborg changes for:: ", lootTeamDirkey);
    let prevQuriks = teamDir.loot[lootTeamDirkey].cyborg.quirks;
    let curLevel = teamDir.loot[lootTeamDirkey].cyborg.level;
    let curXP = teamDir.loot[lootTeamDirkey].cyborg.xp;
    let curRank = teamDir.loot[lootTeamDirkey].cyborg.rank;
    let normalisedLevel = curLevel + Ranks[curRank] * 10;
    let className = teamDir.loot[lootTeamDirkey].cyborg.trait.class;
    let classnumber = Object.values(CyborgClass).indexOf(className) + 1;

    // console.log(`************************************** classnumber of ${className} is ${classnumber}`)

    const XpPerMatch =
      ((baseXP + baseXP * Math.floor((normalisedLevel - 1) / 10) * XPmul)/4) * 0.8;
    let newXP: number = curXP;
    
    if (curXP < xpRequired[normalisedLevel]) {
      newXP = curXP + XpPerMatch;
      if(curLevel === 10){
        newXP = Math.min( xpRequired[normalisedLevel] , newXP );
      }
    }

    // calculate new level
    // next level only if -- > newXp is > xpreq[curlev] then lvl+1
    let newLevel = curLevel;
    let levelUp = false;
    let metadataUpdate: any = {};

    if (newXP >= xpRequired[normalisedLevel] && curLevel < 10) {
      newLevel += 1;
      let newNormalisedLevel = newLevel + Ranks[curRank] * 10;
      levelUp = true;
      //update health,attack,accuracy,critical,speed,luck,persistence
      const newMetadta = genStats(
        newNormalisedLevel,
        teamDir.loot[lootTeamDirkey].cyborg
      );
      // updating in case it effects Quirks effect
      teamDir.loot[lootTeamDirkey].cyborg.health = newMetadta.health;
      teamDir.loot[lootTeamDirkey].cyborg.attack = newMetadta.attack;
      teamDir.loot[lootTeamDirkey].cyborg.accuracy = newMetadta.accuracy;
      teamDir.loot[lootTeamDirkey].cyborg.criticalHit = newMetadta.criticalHit;
      teamDir.loot[lootTeamDirkey].cyborg.speed = newMetadta.speed;
      teamDir.loot[lootTeamDirkey].cyborg.luck = newMetadta.luck;
      teamDir.loot[lootTeamDirkey].cyborg.persistence = newMetadta.persistence;

      metadataUpdate = {
        health: newMetadta.health,
        attack: newMetadta.attack,
        accuracy: newMetadta.accuracy,
        criticalHit: newMetadta.criticalHit,
        speed: newMetadta.speed,
        luck: newMetadta.luck,
        persistence: newMetadta.persistence,
      };
      // console.log("after level up :: ", JSON.stringify(metadataUpdate))

      // run every stat effect on this again. type = 1
      teamDir.loot[lootTeamDirkey].cyborg.quirks[0].attributes.forEach( quirk => {
        let res = statQuirkValue(quirk.attribute,quirk.effect)
        let field = res.field;
        let value = res.value;

        // console.log(`====>\n ${field} effected by ${value}`)

        // effect on new metadata
        metadataUpdate[field] = teamDir.loot[lootTeamDirkey].cyborg[field] + teamDir.loot[lootTeamDirkey].cyborg[field] * value * 0.01;
      });

      // console.log("final metadata after reapplying stat quirks :: ",JSON.stringify(metadataUpdate))
    }
    //update XP and Level
    teamDir.loot[lootTeamDirkey].cyborg.xp = newXP;
    teamDir.loot[lootTeamDirkey].cyborg.level = newLevel;
    // console.log("updated metadata :: ", JSON.stringify(metadataUpdate));

    //generating quirks if stress > 50
    let [type, attribute, effect] =
      teamDir.loot[lootTeamDirkey].cyborg.stressPoint < 50
        ? [null]
        : genQuirk(prevQuriks,classnumber);
    // update metadata based quirks
    if (type && attribute && effect) {
      // assign the new Attribute
      const newAttribute: Prisma.AttributeCreateInput = {
        attribute: attribute,
        effect: effect,
      };
      teamDir.loot[lootTeamDirkey].cyborg.quirks[type - 1].attributes.push(
        newAttribute
      );

      //process if it's a state based quirk
      if (type === 1) {

        let res = statQuirkValue(attribute,effect);
        let field : string = res.field;
        let value : number = res.value;

        // console.log(JSON.stringify(teamDir.loot[lootTeamDirkey].cyborg[field]))
        // @ts-ignore
        //  IMPORTANT : if no levelup then take metadta from initTeamDir
        let changedData;
        if (levelUp) {
          changedData =
            teamDir.loot[lootTeamDirkey].cyborg[field] +
            teamDir.loot[lootTeamDirkey].cyborg[field] * value * 0.01;
        } else {
          // console.log("using reverted metadata:: ",initTeamDir.loot[lootTeamDirkey].cyborg[field])
          // console.log("otherwise this was the plan:: ",teamDir.loot[lootTeamDirkey].cyborg[field])

          changedData =
            initTeamDir.loot[lootTeamDirkey].cyborg[field] +
            initTeamDir.loot[lootTeamDirkey].cyborg[field] * value * 0.01;
        }
        // @ts-ignore
        metadataUpdate[field] = changedData;
      }
    }

    // before pushing metadata check accuracy and crit above hudred then set to 100
    // metadataUpdate["accuracy"] = Math.min( metadataUpdate["accuracy"] , 100 )
    // metadataUpdate["criticalHit"] = Math.min( metadataUpdate["criticalHit"] , 100 )

    lootCyborgsChanges.push({
      cyborgID: lootTeamDirkey,
      levelUp: levelUp,
      level: newLevel,
      xp: newXP,
      newQuirk: [type, attribute, effect],
      quirks: teamDir.loot[lootTeamDirkey].cyborg.quirks,
      stress: teamDir.loot[lootTeamDirkey].cyborg.stressPoint,
      lifepoint: teamDir.loot[lootTeamDirkey].cyborg.lifePoint,
      energy: teamDir.loot[lootTeamDirkey].cyborg.energy - ENERGY_TO_LOOT,
      metadataUpdate,
    });
  }

  //lootbox luck based reward
  let choosenTeam: string;
  if (mineLuckPoints > lootLuckPoints) {
    choosenTeam = "mine";
  } else if (mineLuckPoints < lootLuckPoints) {
    choosenTeam = "loot";
  } else {
    // to random team
    choosenTeam = random(1, 100) > 50 ? "mine" : "loot";
  }
  // console.log("choosen team:: ",choosenTeam);

  // crafting lootbox
  let xp: xpAllocation[] = [];
  let teamdir = choosenTeam === "mine" ? teamDir.mine : teamDir.loot;
  for (const key in teamdir) {
    let xpAlloc: xpAllocation = {
      cyborgID: parseInt(key),
      xp: teamdir[key].cyborg.xp * 0.05,
    };
    xp.push(xpAlloc);
  }

  let lootboxSGF1 = 0;
  let lootboxSGF2 = 0;

  if(rewardToken === 0){
    lootboxSGF1 = convertToken(10)
  }else{
    lootboxSGF2 = convertToken(10)
  }

  let lootbox: LootBoxT = {
    xp,
    rankupPoint: 0,
    SGF1: lootboxSGF1,
    SGF2: lootboxSGF2,
  };

  // calculate winning team
  const finalWinningTeam = mineSeq.length === 0 ? "loot" : "mine";
  const finalLoosingTeam = mineSeq.length === 0 ? "mine" : "loot";

  // console.log("winning team :: ", finalWinningTeam);

  finalSimulationResult.result.win.team = finalWinningTeam;
  finalSimulationResult.result.loss.team = finalLoosingTeam;

  finalSimulationResult.result.win.reward.cyborgChanges =
    finalWinningTeam == "loot" ? lootCyborgsChanges : mineCyborgsChanges;
  finalSimulationResult.result.loss.reward.cyborgChanges =
    finalLoosingTeam == "loot" ? lootCyborgsChanges : mineCyborgsChanges;

  finalSimulationResult.corePlay = corePlay;

  if (choosenTeam === finalWinningTeam) {
    finalSimulationResult.result.win.reward.lootbox = lootbox;
  } else {
    finalSimulationResult.result.loss.reward.lootbox = lootbox;
  }


  let curRank = mineTeam[0].rank;
  let rankNumber = Ranks[curRank] + 1;
  const baseReward = 100;
  const finalReward = baseReward + 10 * (rankNumber - 1);

  let SGF1 = 0;
  let SGF2 = 0;
  
  if(rewardToken === 0){
    SGF1 = convertToken(finalReward)
  }else{
    SGF2 = convertToken(finalReward)
  }

  // win team 70 ; loss team 30
  if (finalWinningTeam === "loot") {
    finalSimulationResult.result.win.reward.SGF1 = SGF1 * 0.7;
    finalSimulationResult.result.win.reward.SGF2 = SGF2 * 0.7;

    finalSimulationResult.result.loss.reward.SGF1 = SGF1 * 0.3;
    finalSimulationResult.result.loss.reward.SGF2 = SGF2 * 0.3;
  }

  if (finalWinningTeam === "mine") {
    finalSimulationResult.result.win.reward.SGF1 = SGF1 * 0.7;
    finalSimulationResult.result.win.reward.SGF2 = SGF2 * 0.7;

    finalSimulationResult.result.loss.reward.SGF1 = SGF1 * 0.3;
    finalSimulationResult.result.loss.reward.SGF2 = SGF2 * 0.3;
  }


  return finalSimulationResult;
};

/**
 * Which team attack first
 * depends on team's speed
 * @param mineTeam: array of mine cyborgs speed
 * @param lootTeam: array of loot cyborgs speed
 * return
 */
const teamToss = (mineTeam: CyborgT[], lootTeam: CyborgT[]): Team => {
  const mineTeamSpeed = mineTeam.map((c) => c.speed);
  const lootTeamSpeed = lootTeam.map((c) => c.speed);

  let mineTeamSum = mineTeamSpeed.reduce((a, b) => a + b, 0);
  let lootTeamSum = lootTeamSpeed.reduce((a, b) => a + b, 0);

  let finalTeam = Team.Loot;

  if (mineTeamSum > lootTeamSum) {
    finalTeam = Team.Mine;
  } else if (mineTeamSum === lootTeamSum) {
    finalTeam = random(0, 1) == 0 ? Team.Loot : Team.Mine;
  }
  return finalTeam;
};

const findOpponent = (attacker_index: number, opponentCyborgPosition: any) => {
  ////console.log(`Finding Opponent for ${attacker_index} in ${opponentCyborgPosition}`);

  const [altIndex1, altIndex2] = altIndex(attacker_index);
  ////console.log(`Alt indexs are :: ${altIndex1} in ${altIndex2}`);

  // 1. Attacking on first row
  //  a. Attack on the same col there are only two cols
  //  b. if no cyborg on that col then attack on altAttackIndex
  const MAX_COL_DEPTH = 2;

  // If attacking team is Looting team then the opponent one will be Mining team and vice-verse.
  // let opponentCyborgPosition: number[][] = attackingTeam === Team.Loot ? mineCyborgPosition : lootCyborgPosition
  let col = 0;
  let findIndex = attacker_index;

  for (col; col < MAX_COL_DEPTH; col++) {
    if (opponentCyborgPosition[col][attacker_index] != -1) {
      findIndex = attacker_index;
      break;
    } else if (opponentCyborgPosition[col][altIndex1] != -1) {
      findIndex = altIndex1;
      break;
    } else if (opponentCyborgPosition[col][altIndex2] != -1) {
      findIndex = altIndex2;
      break;
    }
  }

  return [
    opponentCyborgPosition[col][findIndex], // cyborg ID
    [[col], [findIndex]], // position
  ];
};

const battlePlay = (
  attacker: CyborgT,
  defender: CyborgT,
  defenderCyborgPosition: number[][],
  attackerCyborgPosition: number[][],
  teamDir: TeamDir,
  attackingTeamIndex: Team
) => {
  let attackDir = attackingTeamIndex == Team.Loot ? teamDir.loot : teamDir.mine;
  let defendDir = attackingTeamIndex == Team.Loot ? teamDir.mine : teamDir.loot;

  let hit = 0;

  let defenderIDs: any = [defender.id];
  defenderCyborgPosition.forEach((r) => {
    r.forEach((i) => {
      if (!(i === -1) && i !== defender.id) {
        defenderIDs.push(i);
      }
    });
  });

  let attackerIDs: any = [attacker.id];
  attackerCyborgPosition.forEach((r) => {
    r.forEach((i) => {
      if (!(i === -1) && i !== attacker.id) {
        attackerIDs.push(i);
      }
    });
  });


  let attackers: any = [];
  let defenders: any = [];

  //class Based quirks -- type = 2--> index 1
  const quirk = attacker.quirks[1].attributes.length > 0 ? true : false;
  let classQuirk: any;
  if (quirk) {
    //console.log("Quirk present")
    classQuirk = attacker.quirks[1].attributes[0].effect;
  }

  let faintMode: IHash = {};
  defenderIDs.forEach((id: number) => {
    faintMode[id] =
      defendDir[id].currentHealth == 1 &&
      random(0, 100) >= defendDir[id].cyborg.persistence
        ? true
        : false;
  });

  // ----------------------- Battle -----------------------
  // Check hit accuracy of the attacker
  if (random(0, 100) <= attacker.accuracy) {
    //console.log("====================== IN-ACCURACY =====================");

    // Check defender dodge accuracy
    if (random(0, 100) < defender.luck) {
      // defenders[0].isDodge = true--local
      hit = HitType.Miss;
      // console.log("====================== DOGE =====================");

      // if defender stress is greater then 0 then relife it by 5 point
      if (defender.stressPoint > 0) {
        const STRESS_RELIEF_POINT = 5;
        defenders.push(
          addDefender(
            defender.id,
            0,
            -1 * Math.min(defender.stressPoint, STRESS_RELIEF_POINT),
            false,
            false,
            true
          )
        );
      } else {
        defenders.push(addDefender(defender.id, 0, 0, false, false, true));
      }
      attackers.push(addAttacker(attacker.id, 0, 5));
    } else {
      if (random(0, 100) <= attacker.criticalHit) {
        hit = HitType.CriticalHit;
        console.log("====================== CRI =====================");

        //getting IDs
        let attackerFrontRowID: number[] = [];
        let attackerBackRowID: number[] = [];
        // init with default IDs
        let attackerMaxHealthID = attacker.id;
        let attackerMinHealthID = attacker.id;
        let Ar = random(0, attackerIDs.length - 1);
        //console.log(`\n attacker random index : ${Ar}`)
        let attackerRandomID = attackerIDs[Ar];

        let defenderFrontRowID: number[] = [];
        let defenderBackRowID: number[] = [];
        // init with default IDs
        let defenderMaxHealthID = defender.id;
        let defenderMinHealthID = defender.id;
        let defenderMaxStressID = defender.id;
        let defenderMinStressID = defender.id;
        let defenderMaxAttackID = defender.id;
        let defenderMinAttackID = defender.id;

        let Dr = random(0, defenderIDs.length - 1);
        //console.log(`\n defender random index : ${Dr}`)
        let defenderRandomID = defenderIDs[Dr];

        //attacker Front row IDs
        attackerCyborgPosition[0].forEach((id) => {
          if (id !== -1) {
            attackerFrontRowID.push(id);
          }
        });

        //attacker Back row IDs
        attackerCyborgPosition[1].forEach((id) => {
          if (id !== -1) {
            attackerBackRowID.push(id);
          }
        });

        //defender Front row IDs
        defenderCyborgPosition[0].forEach((id) => {
          if (id !== -1) {
            defenderFrontRowID.push(id);
          }
        });

        //defender Back row IDs
        defenderCyborgPosition[1].forEach((id) => {
          if (id !== -1) {
            defenderBackRowID.push(id);
          }
        });

        //attacker min/max for health
        attackerIDs.forEach((id: any) => {
          //console.log(`\nchecking ID ${id}`);
          if (
            attackDir[id].currentHealth >
            attackDir[attackerMaxHealthID].currentHealth
          ) {
            attackerMaxHealthID = id;
            //console.log("assigning current ID to max");
          }
          if (
            attackDir[id].currentHealth <
            attackDir[attackerMinHealthID].currentHealth
          ) {
            attackerMinHealthID = id;
            //console.log("assigning current ID to min");
          }
        });

        //defender min/max for health,stress,attack
        defenderIDs.forEach((id: any) => {
          //console.log(`\nchecking ID ${id}`);
          if (
            defendDir[id].currentHealth >
            defendDir[defenderMaxHealthID].currentHealth
          ) {
            defenderMaxHealthID = id;
            //console.log("assigning current ID to health max");
          }
          if (
            defendDir[id].currentHealth <
            defendDir[defenderMinHealthID].currentHealth
          ) {
            defenderMinHealthID = id;
            //console.log("assigning current ID to health min");
          }
          if (
            defendDir[id].cyborg.stressPoint >
            defendDir[defenderMaxStressID].cyborg.stressPoint
          ) {
            defenderMaxStressID = id;
            //console.log("assigning current ID to stress max");
          }
          if (
            defendDir[id].cyborg.stressPoint >
            defendDir[defenderMinStressID].cyborg.stressPoint
          ) {
            defenderMinStressID = id;
            //console.log("assigning current ID to stress min");
          }
          if (
            defendDir[id].cyborg.attack >
            defendDir[defenderMaxAttackID].cyborg.attack
          ) {
            defenderMaxAttackID = id;
            //console.log("assigning current ID to attack max");
          }
          if (
            defendDir[id].cyborg.attack >
            defendDir[defenderMinAttackID].cyborg.attack
          ) {
            defenderMinAttackID = id;
            //console.log("assigning current ID to attack min");
          }
        });

        //Faint or not for every defender (only attacked ones)
        //console.log("making faint directory in case of health == 1");

        const className = attacker.trait.class;
        if (className === "Aviator") {
          attackers.push(addAttacker(attacker.id, 0, 0));
          if (!quirk) {
            defenderIDs.forEach((id: any) => {
              defenders.push(
                addDefender(
                  id,
                  -2 * (attacker.attack / defenderIDs.length),
                  0,
                  false,
                  faintMode[id],
                  false
                )
              );
            });
          } else {
            //quirk 4 type quirk for every class (class based Quirks)
            if (classQuirk === 1) {
              // damage min health
              defenders.push(
                addDefender(
                  defenderMinHealthID,
                  -2 * attacker.attack,
                  0,
                  false,
                  faintMode[defenderMinHealthID],
                  false
                )
              );
            } else if (classQuirk === 2) {
              // damage max health
              defenders.push(
                addDefender(
                  defenderMaxHealthID,
                  -2 * attacker.attack,
                  0,
                  false,
                  faintMode[defenderMaxHealthID],
                  false
                )
              );
            } else if (classQuirk === 3) {
              //damage back row
              if(defenderBackRowID.length == 0 ){
                defenderIDs.forEach((id: any) => {
                  defenders.push(
                    addDefender(
                      id,
                      -2 * (attacker.attack / defenderIDs.length),
                      0,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }else{
                defenderBackRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      -2 * (attacker.attack / defenderBackRowID.length),
                      0,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 4) {
              //damage front row
              if(defenderFrontRowID.length == 0 ){
                defenderIDs.forEach((id: any) => {
                  defenders.push(
                    addDefender(
                      id,
                      -2 * (attacker.attack / defenderIDs.length),
                      0,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }else{
                defenderFrontRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      -2 * (attacker.attack / defenderFrontRowID.length),
                      0,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 5) {
              // damage random opponent
              defenders.push(
                addDefender(
                  defenderRandomID,
                  -2 * attacker.attack,
                  0,
                  false,
                  faintMode[defenderRandomID],
                  false
                )
              );
            }
          }
        } else if (className === "Brawler") {
          attackers.push(addAttacker(attacker.id, 0, 0));
          if (!quirk) {
            // defenders[0].skipChangesTo = true;
            defenders.push(
              addDefender(
                defender.id,
                -1 * attacker.attack,
                0,
                true,
                faintMode[defender.id],
                false
              )
            );
          } else {
            //quirk
            if (classQuirk === 1) {
              // skip min health
              defenders.push(
                addDefender(
                  defenderMinHealthID,
                  -1 * attacker.attack,
                  0,
                  true,
                  faintMode[defenderMinHealthID],
                  false
                )
              );
            } else if (classQuirk === 2) {
              // skip max health
              defenders.push(
                addDefender(
                  defenderMaxHealthID,
                  -1 * attacker.attack,
                  0,
                  true,
                  faintMode[defenderMaxHealthID],
                  false
                )
              );
            } else if (classQuirk === 3) {
              //skip back row
              if(defenderBackRowID.length == 0 ){
                defenders.push(
                  addDefender(
                    defender.id,
                    -1 * attacker.attack,
                    0,
                    true,
                    faintMode[defender.id],
                    false
                  )
                );
              }else{
                defenderBackRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      (-1 * attacker.attack) / defenderBackRowID.length,
                      0,
                      true,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 4) {
              //skip front row
              if(defenderFrontRowID.length == 0 ){
                defenders.push(
                  addDefender(
                    defender.id,
                    -1 * attacker.attack,
                    0,
                    true,
                    faintMode[defender.id],
                    false
                  )
                );
              }else{
                defenderFrontRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      (-1 * attacker.attack) / defenderFrontRowID.length,
                      0,
                      true,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 5) {
              // skip random opponent
              defenders.push(
                addDefender(
                  defenderRandomID,
                  -1 * attacker.attack,
                  0,
                  true,
                  faintMode[defenderRandomID],
                  false
                )
              );
            }
          }
        } else if (className === "Marine") {
          attackers.push(addAttacker(attacker.id, 0, 0));
          if (!quirk) {
            // defenders[0].stressChange = 7.5;
            defenders.push(
              addDefender(
                defender.id,
                -1 * attacker.attack,
                15,
                false,
                faintMode[defender.id],
                false
              )
            );
          } else {
            //quirk
            if (classQuirk === 1) {
              // stress min health
              defenders.push(
                addDefender(
                  defenderMinHealthID,
                  -1 * attacker.attack,
                  15,
                  false,
                  faintMode[defenderMinHealthID],
                  false
                )
              );
            } else if (classQuirk === 2) {
              // stress max health
              defenders.push(
                addDefender(
                  defenderMaxHealthID,
                  -1 * attacker.attack,
                  15,
                  false,
                  faintMode[defenderMaxHealthID],
                  false
                )
              );
            } else if (classQuirk === 3) {
              //stress back row
              if(defenderBackRowID.length == 0 ){
                defenders.push(
                  addDefender(
                    defender.id,
                    -1 * attacker.attack,
                    15,
                    false,
                    faintMode[defender.id],
                    false
                  )
                );
              }else{
                defenderBackRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      (-1 * attacker.attack) / defenderBackRowID.length,
                      15,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 4) {
              //stress front row
              if(defenderFrontRowID.length == 0 ){
                defenders.push(
                  addDefender(
                    defender.id,
                    -1 * attacker.attack,
                    15,
                    false,
                    faintMode[defender.id],
                    false
                  )
                );
              }else{
                defenderFrontRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      (-1 * attacker.attack) / defenderFrontRowID.length,
                      15,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 5) {
              // stress random opponent
              defenders.push(
                addDefender(
                  defenderRandomID,
                  -1 * attacker.attack,
                  15,
                  false,
                  faintMode[defenderRandomID],
                  false
                )
              );
            }
          }
        } else if (className === "Tactician") {
          defenders.push(addDefender(defender.id, 0, 0, false, false, false));
          if (!quirk) {
            attackers.push(addAttacker(attacker.id, 0.25 * attacker.health, 0));
          } else {
            //quirk
            if (classQuirk === 1) {
              // restore health of min health teammate
              attackers.push(
                addAttacker(
                  attackerMinHealthID,
                  0.25 * attackDir[attackerMinHealthID].cyborg.health,
                  0
                )
              );
            } else if (classQuirk === 2) {
              // restore health of max health teammate
              attackers.push(
                addAttacker(
                  attackerMaxHealthID,
                  0.25 * attackDir[attackerMaxHealthID].cyborg.health,
                  0
                )
              );
            } else if (classQuirk === 3) {
              //restore health of back row teammates
              if(attackerBackRowID.length == 0 ){
                  attackers.push(addAttacker(attacker.id, 0.25 * attacker.health, 0));
              }else{
                attackerBackRowID.forEach((id: number) => {
                  attackers.push(
                    addAttacker(
                      id,
                      (0.25 * attacker.health) / defenderBackRowID.length,
                      0
                    )
                  );
                });
              }
            } else if (classQuirk === 4) {
              //restore health of front row teammates
              if(attackerFrontRowID.length == 0 ){
                attackers.push(addAttacker(attacker.id, 0.25 * attacker.health, 0));
              }else{
                attackerFrontRowID.forEach((id: number) => {
                  attackers.push(
                    addAttacker(
                      id,
                      (0.25 * attacker.health) / defenderFrontRowID.length,
                      0
                    )
                  );
                });
              }
            } else if (classQuirk === 5) {
              // restore health of random teammate
              attackers.push(
                addAttacker(
                  attackerRandomID,
                  0.25 * attackDir[attackerRandomID].cyborg.health,
                  0
                )
              );
            }
          }
        } else if (className === "Warrior") {
          attackers.push(addAttacker(attacker.id, 0, 0));
          if (!quirk) {
            defenders.push(
              addDefender(
                defender.id,
                -3 * attacker.attack,
                0,
                false,
                faintMode[defender.id],
                false
              )
            );
          } else {
            //quirk
            if (classQuirk === 1) {
              // double damage min health
              defenders.push(
                addDefender(
                  defenderMinHealthID,
                  -3 * attacker.attack,
                  0,
                  false,
                  faintMode[defenderMinHealthID],
                  false
                )
              );
            } else if (classQuirk === 2) {
              // double damage max health
              defenders.push(
                addDefender(
                  defenderMaxHealthID,
                  -3 * attacker.attack,
                  0,
                  false,
                  faintMode[defenderMaxHealthID],
                  false
                )
              );
            } else if (classQuirk === 3) {
              //double damage back row
              if(defenderBackRowID.length == 0 ){
                defenders.push(
                  addDefender(
                    defender.id,
                    -3 * attacker.attack,
                    0,
                    false,
                    faintMode[defender.id],
                    false
                  )
                );
              }else{
                defenderBackRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      (-3 * attacker.attack)/defenderBackRowID.length,
                      0,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 4) {
              //double damage front row
              if(defenderFrontRowID.length == 0 ){
                defenders.push(
                  addDefender(
                    defender.id,
                    -3 * attacker.attack,
                    0,
                    false,
                    faintMode[defender.id],
                    false
                  )
                );
              }else{
                defenderFrontRowID.forEach((id: number) => {
                  defenders.push(
                    addDefender(
                      id,
                      (-3 * attacker.attack)/defenderFrontRowID.length,
                      0,
                      false,
                      faintMode[id],
                      false
                    )
                  );
                });
              }
            } else if (classQuirk === 5) {
              // double damage random opponent
              defenders.push(
                addDefender(
                  defenderRandomID,
                  -3 * attacker.attack,
                  0,
                  false,
                  faintMode[defenderRandomID],
                  false
                )
              );
            }
          }
        }
      } else {
        hit = HitType.Hit;
        console.log("====================== HIT =====================");

        // defenders[0].healthChange = -1 * attacker.attack
        defenders.push(
          addDefender(
            defender.id,
            -1 * attacker.attack,
            0,
            false,
            faintMode[defender.id],
            false
          )
        );
        attackers.push(addAttacker(attacker.id, 0, 0));
      }
    }
  } else {
    hit = HitType.Miss;
    // console.log("====================== MISS ======================");

    defenders.push(addDefender(defender.id, 0, 0, false, false, false));
    attackers.push(addAttacker(attacker.id, 0, 5));
  }
  // ------------------------------------------------------
  console.log("defenders:: ", JSON.stringify(defenders));
  console.log("attackers:: ", JSON.stringify(attackers));

  return {
    hit,
    attackers,
    defenders,
  };
};

const altIndex = (attacker_index: number) => {
  let index1 = 1;
  let index2 = 2;

  if (attacker_index == 0) {
    index1 = 1;
    index2 = 2;
  }

  if (attacker_index == 1) {
    index1 = 0;
    index2 = 2;
  }

  if (attacker_index == 2) {
    index1 = 1;
    index2 = 0;
  }

  return [index1, index2];
};

const addDefender = (
  id: number,
  healthChange: number,
  stressChange: number,
  skipChangesTo: boolean,
  isFaint: boolean,
  isDodge: boolean
) => {
  let defender: Defender = {
    id: id,
    healthChange: healthChange,
    stressChange: stressChange,
    skipChangesTo: skipChangesTo,
    isFaint: isFaint,
    isDodge: isDodge,
  };
  return defender;
};

const addAttacker = (
  id: number,
  healthChange: number,
  stressChange: number
) => {
  let attacker: Attacker = {
    id: id,
    healthChange: healthChange,
    stressChange: stressChange,
  };

  return attacker;
};

/**
 * generate new Quirks array by adding generated Quirk
 */
const genQuirk = (quirks: any, classnumber:number) => {
  //TODO :: effects need probabilst selection not random
  let type = 1;
  let numberOfAtrributes = [7, 5, 6, 5];
  let effectP = [
    [24, 36, 17.5, 17.5, 3, 2],
    [12.5, 12.5, 12.5, 12.5, 50],
    [36, 24, 17.5, 17.5, 2, 3],
    [24, 36, 17.5, 17.5, 3, 2],
  ];
  let attr = 0;
  let effect;
  const MAXQUIRKPOSSIBLE = 13;
  let found = false;
  let randomness = 0;
  let countQuirks = 0;

  quirks.forEach((qType: Quirk) => {
    countQuirks += qType.attributes.length;
  });
  if (countQuirks === MAXQUIRKPOSSIBLE) {
    //console.log("No more quirks possible");
    return [null];
  }
  while (!found) {
    randomness = random(0, 99);
    0 <= randomness && randomness < 30
      ? (type = 1)
      : 70 <= randomness && randomness < 100
      ? (type = 4)
      : 30 <= randomness && randomness < 50
      ? (type = 2)
      : (type = 3);
    if (type == 2) {
      if (quirks[type - 1].attributes.length > 0) {
        //console.log("already present quirk");
        continue;
      } else {
        // select class quirk only i.e aviator is 1 then first only 
        attr = classnumber;
        found = true;
        break;
      }
    }

    if(type == 3){
      // discontinuing type 3
      continue;
    }

    attr = random(1, numberOfAtrributes[type - 1]);
    // search in that type if this attribute quirk `r` is already present or not
    //set found to true
    found = true;
    //then check all the quirks if we find a quirk already presend then set found to false
    quirks[type - 1].attributes.forEach((q: Attribute) => {
      if (attr === q.attribute) {
        found = false;
        //console.log("this attribute already present");
      }
    });
  }

  //selecting new effect for this attribute
  effect = randomIndex(effectP[type - 1]) + 1;
  return [type, attr, effect];
};

function randomIndex(weights: any) {
  const totalWeight = weights.reduce((acc: any, val: any) => acc + val, 0);
  let randomNum = Math.random() * totalWeight;
  for (let i = 0; i < weights.length; i++) {
    randomNum -= weights[i];
    if (randomNum < 0) {
      return i;
    }
  }
  return weights.length - 1;
}

export const genStats = (level: number, cyborg: CyborgT) => {
  console.log("In Genstats");

  // Get indexes
  const classIndex: number = CyborgClass[cyborg.trait.class] + 1;
  const genderIndex = cyborg.trait.bodyParts.gender === "Male" ? 1 : 2; // Should co-relate with metadata-generation structure
  const originPlanetIndex = getTraitIndex(
    cyborg.trait.bodyParts.originPlanet.name,
    CyborgOriginPlanet
  );
  const eyesIndex = getTraitIndex(cyborg.trait.bodyParts.eye.name, CyborgEyes);
  const neckIndex = getTraitIndex(cyborg.trait.bodyParts.neck.name, CyborgNeck);
  console.log(`CyborgJson : ${JSON.stringify(cyborg.trait)}`);

  console.log(`class: ${classIndex}\ngender: ${genderIndex}\nplanet: ${originPlanetIndex}\neye: ${eyesIndex}\nneck: ${neckIndex}`)

  const cyborgBasePoint = basePoint(
    originPlanetIndex,
    genderIndex,
    classIndex,
    classIndex,
    classIndex,
    eyesIndex,
    neckIndex,
  );
  console.log("base point used")
  const traitPoint = baseTraitPoint(level, cyborgBasePoint);
  console.log("traitpoint base traitpoint functiuon used")

  return traitPoint;
};

export const getTraitIndex = (name: string, traitObject: any) => {
  for (const key in traitObject) {
    const index = traitObject[key].indexOf(name);
    if (index !== -1) {
      return (
        Object.keys(traitObject).indexOf(key) * traitObject[key].length +
        index +
        1
      );
    }
  }
  return -1;
};

export const basePoint = (
  originPlanetRandomness: number,
  genderRandomness: number,
  classRandomness: number,
  helmetRandomness: number,
  vestRandomness: number,
  eyesRandomness: number,
  neckRandomness: number,
 ) => {
  let cyborgBasePoint: cyborgBasePoint = {
    healthPoint: 0,
    attackPoints: 0,
    accuracyPoints: 0,
    criticalHitPoints: 0,
    speedPoints: 0,
    luckPoints: 0,
    persistencePoints: 0,
  };
  console.log(`======================================\n inside basepoint\n gender ${genderRandomness}`)

  cyborgBasePoint = genderInfluence(genderRandomness, cyborgBasePoint);
  cyborgBasePoint = helmetInfluence(helmetRandomness, cyborgBasePoint);
  cyborgBasePoint = vestInfluence(vestRandomness, cyborgBasePoint);
  cyborgBasePoint = eyeInfluence(eyesRandomness, cyborgBasePoint);
  cyborgBasePoint = neckInfluence(neckRandomness, cyborgBasePoint);
  cyborgBasePoint = originPlanetInfluence(originPlanetRandomness, cyborgBasePoint);

  // Multipler Influence; can clean it up; proly make a pure function out of this
  let multiplerPoint = 0.66; // TODO: 0.66

  let eyeclass = Math.ceil(eyesRandomness / 6)
  let neckclass = Math.ceil(neckRandomness / 6)

  if( classRandomness == originPlanetRandomness && classRandomness == helmetRandomness && classRandomness == vestRandomness && classRandomness == eyeclass && classRandomness == neckclass ){
    multiplerPoint = 1.0
  }

  console.log("basetrait has multiplier :: ", multiplerPoint)


  cyborgBasePoint.healthPoint *= multiplerPoint;
  cyborgBasePoint.attackPoints *= multiplerPoint;
  cyborgBasePoint.accuracyPoints *= multiplerPoint;
  cyborgBasePoint.criticalHitPoints *= multiplerPoint;
  cyborgBasePoint.speedPoints *= multiplerPoint;
  cyborgBasePoint.luckPoints *= multiplerPoint;
  cyborgBasePoint.persistencePoints *= multiplerPoint;

  // console.log("cyborg base point calc: ",JSON.stringify(cyborgBasePoint))

  return cyborgBasePoint;
};

const genderInfluence = (
  randomness: number,
  cyborgBasePoint: cyborgBasePoint
) => {
  if (randomness == 1) {
    // Male
    cyborgBasePoint.healthPoint += 0.5;
    cyborgBasePoint.attackPoints += 1.5;
  }
  if (randomness == 2) {
    // Female
    cyborgBasePoint.healthPoint += 1.5;
    cyborgBasePoint.attackPoints += 0.5;
  }
  return cyborgBasePoint
};

const helmetInfluence = (
  randomness: number,
  cyborgBasePoint: cyborgBasePoint
) => {
  switch (randomness) {
    case 1:
      cyborgBasePoint.healthPoint += 1.2;
      cyborgBasePoint.luckPoints += 3.5;
      break;
    case 2:
      cyborgBasePoint.healthPoint += 5.4;
      cyborgBasePoint.luckPoints += 1.5;
      break;
    case 3:
      cyborgBasePoint.healthPoint += 1.8;
      cyborgBasePoint.luckPoints += 4;
      break;
    case 4:
      cyborgBasePoint.healthPoint += 4.2;
      cyborgBasePoint.luckPoints += 3;
      break;
    case 5:
      cyborgBasePoint.healthPoint += 0.6;
      cyborgBasePoint.luckPoints += 2;
      break;
  }
  return cyborgBasePoint
};

const vestInfluence = (
  randomness: number,
  cyborgBasePoint: cyborgBasePoint
) => {
  switch (randomness) {
    case 1:
      cyborgBasePoint.healthPoint += 0.8;
      cyborgBasePoint.persistencePoints += 3;
      break;
    case 2:
      cyborgBasePoint.healthPoint += 3.6;
      cyborgBasePoint.persistencePoints += 6;
      break;
    case 3:
      cyborgBasePoint.healthPoint += 1.2;
      cyborgBasePoint.persistencePoints += 1.5;
      break;
    case 4:
      cyborgBasePoint.healthPoint += 2.8;
      cyborgBasePoint.persistencePoints += 7.5;
      break;
    case 5:
      cyborgBasePoint.healthPoint += 0.4;
      cyborgBasePoint.persistencePoints += 2.25;
      break;
  }
  return cyborgBasePoint
};

const eyeInfluence = (randomness: number, cyborgBasePoint: cyborgBasePoint) => {
  switch (randomness) {
    case 1:
      cyborgBasePoint.attackPoints += 3;
      cyborgBasePoint.accuracyPoints += 0.8;
      cyborgBasePoint.criticalHitPoints += 5;
      cyborgBasePoint.luckPoints += 1.4;
      cyborgBasePoint.persistencePoints += 1;
      break;
    case 2:
      cyborgBasePoint.attackPoints += 3.1;
      cyborgBasePoint.accuracyPoints += 0.9;
      cyborgBasePoint.criticalHitPoints += 5.1;
      cyborgBasePoint.luckPoints += 1.25;
      cyborgBasePoint.persistencePoints += 0.85;
      break;
    case 3:
      cyborgBasePoint.attackPoints += 2.85;
      cyborgBasePoint.accuracyPoints += 0.9;
      cyborgBasePoint.criticalHitPoints += 5.1;
      cyborgBasePoint.luckPoints += 1.5;
      cyborgBasePoint.persistencePoints += 0.85;
      break;
    case 4:
      cyborgBasePoint.attackPoints += 2.85;
      cyborgBasePoint.accuracyPoints += 0.65;
      cyborgBasePoint.criticalHitPoints += 5.1;
      cyborgBasePoint.luckPoints += 1.5;
      cyborgBasePoint.persistencePoints += 1.1;
      break;
    case 5:
      cyborgBasePoint.attackPoints += 3;
      cyborgBasePoint.accuracyPoints += 0.8;
      cyborgBasePoint.criticalHitPoints += 5;
      cyborgBasePoint.speedPoints += 0.4;
      cyborgBasePoint.luckPoints += 1.4;
      cyborgBasePoint.persistencePoints += 1;
      break;
    case 6:
      cyborgBasePoint.attackPoints += 3;
      cyborgBasePoint.accuracyPoints += 0.8;
      cyborgBasePoint.criticalHitPoints += 5.4;
      cyborgBasePoint.luckPoints += 1.4;
      cyborgBasePoint.persistencePoints += 1;
      break;
    case 7:
      cyborgBasePoint.attackPoints += 1.8;
      cyborgBasePoint.accuracyPoints += 2.8;
      cyborgBasePoint.criticalHitPoints += 3;
      cyborgBasePoint.luckPoints += 0.6;
      cyborgBasePoint.persistencePoints += 2;
      break;
    case 8:
      cyborgBasePoint.attackPoints += 1.9;
      cyborgBasePoint.accuracyPoints += 2.9;
      cyborgBasePoint.criticalHitPoints += 3.1;
      cyborgBasePoint.luckPoints += 0.45;
      cyborgBasePoint.persistencePoints += 1.85;
      break;
    case 9:
      cyborgBasePoint.attackPoints += 1.65;
      cyborgBasePoint.accuracyPoints += 2.9;
      cyborgBasePoint.criticalHitPoints += 3.1;
      cyborgBasePoint.luckPoints += 0.7;
      cyborgBasePoint.persistencePoints += 1.85;
      break;
    case 10:
      cyborgBasePoint.attackPoints += 1.65;
      cyborgBasePoint.accuracyPoints += 2.65;
      cyborgBasePoint.criticalHitPoints += 3.1;
      cyborgBasePoint.luckPoints += 0.7;
      cyborgBasePoint.persistencePoints += 2.1;
      break;
    case 11:
      cyborgBasePoint.attackPoints += 1.8;
      cyborgBasePoint.accuracyPoints += 2.8;
      cyborgBasePoint.criticalHitPoints += 3;
      cyborgBasePoint.luckPoints += 0.6;
      cyborgBasePoint.persistencePoints += 2.4;
      break;
    case 12:
      cyborgBasePoint.healthPoint += 0.4;
      cyborgBasePoint.attackPoints += 1.8;
      cyborgBasePoint.accuracyPoints += 2.8;
      cyborgBasePoint.criticalHitPoints += 3;
      cyborgBasePoint.luckPoints += 0.6;
      cyborgBasePoint.persistencePoints += 2;
      break;
    case 13:
      cyborgBasePoint.attackPoints += 3.6;
      cyborgBasePoint.accuracyPoints += 2.4;
      cyborgBasePoint.criticalHitPoints += 1.5;
      cyborgBasePoint.luckPoints += 1.6;
      cyborgBasePoint.persistencePoints += 0.5;
      break;
    case 14:
      cyborgBasePoint.attackPoints += 3.7;
      cyborgBasePoint.accuracyPoints += 2.5;
      cyborgBasePoint.criticalHitPoints += 1.6;
      cyborgBasePoint.luckPoints += 1.45;
      cyborgBasePoint.persistencePoints += 0.35;
      break;
    case 15:
      cyborgBasePoint.attackPoints += 3.45;
      cyborgBasePoint.accuracyPoints += 2.5;
      cyborgBasePoint.criticalHitPoints += 1.6;
      cyborgBasePoint.luckPoints += 1.7;
      cyborgBasePoint.persistencePoints += 0.35;
      break;
    case 16:
      cyborgBasePoint.attackPoints += 3.45;
      cyborgBasePoint.accuracyPoints += 2.25;
      cyborgBasePoint.criticalHitPoints += 1.6;
      cyborgBasePoint.luckPoints += 1.7;
      cyborgBasePoint.persistencePoints += 0.6;
      break;
    case 17:
      cyborgBasePoint.attackPoints += 3.6;
      cyborgBasePoint.accuracyPoints += 2.4;
      cyborgBasePoint.criticalHitPoints += 1.5;
      cyborgBasePoint.luckPoints += 2;
      cyborgBasePoint.persistencePoints += 0.5;
      break;
    case 18:
      cyborgBasePoint.attackPoints += 3.6;
      cyborgBasePoint.accuracyPoints += 2.4;
      cyborgBasePoint.criticalHitPoints += 1.5;
      cyborgBasePoint.speedPoints += 0.4;
      cyborgBasePoint.luckPoints += 1.6;
      cyborgBasePoint.persistencePoints += 0.5;
      break;
    case 19:
      cyborgBasePoint.attackPoints += 0.6;
      cyborgBasePoint.accuracyPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 2;
      cyborgBasePoint.luckPoints += 1.2;
      cyborgBasePoint.persistencePoints += 2.5;
      break;
    case 20:
      cyborgBasePoint.attackPoints += 0.7;
      cyborgBasePoint.accuracyPoints += 1.3;
      cyborgBasePoint.criticalHitPoints += 2.1;
      cyborgBasePoint.luckPoints += 1.05;
      cyborgBasePoint.persistencePoints += 2.35;
      break;
    case 21:
      cyborgBasePoint.attackPoints += 0.45;
      cyborgBasePoint.accuracyPoints += 1.3;
      cyborgBasePoint.criticalHitPoints += 2.1;
      cyborgBasePoint.luckPoints += 1.3;
      cyborgBasePoint.persistencePoints += 2.35;
      break;
    case 22:
      cyborgBasePoint.attackPoints += 0.45;
      cyborgBasePoint.accuracyPoints += 1.05;
      cyborgBasePoint.criticalHitPoints += 2.1;
      cyborgBasePoint.luckPoints += 1.3;
      cyborgBasePoint.persistencePoints += 2.6;
      break;
    case 23:
      cyborgBasePoint.healthPoint += 0.4;
      cyborgBasePoint.attackPoints += 0.6;
      cyborgBasePoint.accuracyPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 2;
      cyborgBasePoint.luckPoints += 1.2;
      cyborgBasePoint.persistencePoints += 2.5;
      break;
    case 24:
      cyborgBasePoint.attackPoints += 0.6;
      cyborgBasePoint.accuracyPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 2;
      cyborgBasePoint.luckPoints += 1.2;
      cyborgBasePoint.persistencePoints += 2.9;
      break;
    case 25:
      cyborgBasePoint.attackPoints += 5.4;
      cyborgBasePoint.accuracyPoints += 3.2;
      cyborgBasePoint.criticalHitPoints += 3.5;
      cyborgBasePoint.luckPoints += 0.8;
      cyborgBasePoint.persistencePoints += 0.75;
      break;
    case 26:
      cyborgBasePoint.attackPoints += 5.5;
      cyborgBasePoint.accuracyPoints += 3.3;
      cyborgBasePoint.criticalHitPoints += 3.6;
      cyborgBasePoint.luckPoints += 0.65;
      cyborgBasePoint.persistencePoints += 0.6;
      break;
    case 27:
      cyborgBasePoint.attackPoints += 5.25;
      cyborgBasePoint.accuracyPoints += 3.3;
      cyborgBasePoint.criticalHitPoints += 3.6;
      cyborgBasePoint.luckPoints += 0.9;
      cyborgBasePoint.persistencePoints += 0.6;
      break;
    case 28:
      cyborgBasePoint.attackPoints += 5.25;
      cyborgBasePoint.accuracyPoints += 3.05;
      cyborgBasePoint.criticalHitPoints += 3.6;
      cyborgBasePoint.luckPoints += 0.9;
      cyborgBasePoint.persistencePoints += 0.85;
      break;
    case 29:
      cyborgBasePoint.attackPoints += 5.4;
      cyborgBasePoint.accuracyPoints += 3.6;
      cyborgBasePoint.criticalHitPoints += 3.5;
      cyborgBasePoint.luckPoints += 0.8;
      cyborgBasePoint.persistencePoints += 0.75;
      break;
    case 30:
      cyborgBasePoint.attackPoints += 5.8;
      cyborgBasePoint.accuracyPoints += 3.2;
      cyborgBasePoint.criticalHitPoints += 3.5;
      cyborgBasePoint.luckPoints += 0.8;
      cyborgBasePoint.persistencePoints += 0.75;
      break;
  }
  return cyborgBasePoint
};

const neckInfluence = (
  randomness: number,
  cyborgBasePoint: cyborgBasePoint
) => {
  switch (randomness) {
    case 1:
      cyborgBasePoint.accuracyPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 2;
      cyborgBasePoint.speedPoints += 2;
      cyborgBasePoint.luckPoints += 2.1;
      break;
    case 2:
      cyborgBasePoint.accuracyPoints += 1.3;
      cyborgBasePoint.criticalHitPoints += 2.1;
      cyborgBasePoint.speedPoints += 1.9;
      cyborgBasePoint.luckPoints += 2;
      break;
    case 3:
      cyborgBasePoint.accuracyPoints += 1.1;
      cyborgBasePoint.criticalHitPoints += 2.1;
      cyborgBasePoint.speedPoints += 2.1;
      cyborgBasePoint.luckPoints += 2;
      break;
    case 4:
      cyborgBasePoint.accuracyPoints += 1.1;
      cyborgBasePoint.criticalHitPoints += 1.9;
      cyborgBasePoint.speedPoints += 2.1;
      cyborgBasePoint.luckPoints += 2.2;
      break;
    case 5:
      cyborgBasePoint.accuracyPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 2;
      cyborgBasePoint.speedPoints += 2.4;
      cyborgBasePoint.luckPoints += 2.1;
      break;
    case 6:
      cyborgBasePoint.accuracyPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 2.4;
      cyborgBasePoint.speedPoints += 2;
      cyborgBasePoint.luckPoints += 2.1;
      break;
    case 7:
      cyborgBasePoint.accuracyPoints += 4.2;
      cyborgBasePoint.criticalHitPoints += 1.2;
      cyborgBasePoint.speedPoints += 0.5;
      cyborgBasePoint.luckPoints += 0.9;
      break;
    case 8:
      cyborgBasePoint.accuracyPoints += 4.3;
      cyborgBasePoint.criticalHitPoints += 1.3;
      cyborgBasePoint.speedPoints += 0.4;
      cyborgBasePoint.luckPoints += 0.8;
      break;
    case 9:
      cyborgBasePoint.accuracyPoints += 4.1;
      cyborgBasePoint.criticalHitPoints += 1.3;
      cyborgBasePoint.speedPoints += 0.6;
      cyborgBasePoint.luckPoints += 0.8;
      break;
    case 10:
      cyborgBasePoint.accuracyPoints += 4.1;
      cyborgBasePoint.criticalHitPoints += 1.1;
      cyborgBasePoint.speedPoints += 0.6;
      cyborgBasePoint.luckPoints += 1;
      break;
    case 11:
      cyborgBasePoint.accuracyPoints += 4.2;
      cyborgBasePoint.criticalHitPoints += 1.2;
      cyborgBasePoint.speedPoints += 0.5;
      cyborgBasePoint.luckPoints += 0.9;
      cyborgBasePoint.persistencePoints += 0.4;
      break;
    case 12:
      cyborgBasePoint.healthPoint += 0.4;
      cyborgBasePoint.accuracyPoints += 4.2;
      cyborgBasePoint.criticalHitPoints += 1.2;
      cyborgBasePoint.speedPoints += 0.5;
      cyborgBasePoint.luckPoints += 0.9;
      break;
    case 13:
      cyborgBasePoint.accuracyPoints += 3.6;
      cyborgBasePoint.criticalHitPoints += 0.6;
      cyborgBasePoint.speedPoints += 2.5;
      cyborgBasePoint.luckPoints += 2.4;
      break;
    case 14:
      cyborgBasePoint.accuracyPoints += 3.7;
      cyborgBasePoint.criticalHitPoints += 0.7;
      cyborgBasePoint.speedPoints += 2.4;
      cyborgBasePoint.luckPoints += 2.3;
      break;
    case 15:
      cyborgBasePoint.accuracyPoints += 3.5;
      cyborgBasePoint.criticalHitPoints += 0.7;
      cyborgBasePoint.speedPoints += 2.6;
      cyborgBasePoint.luckPoints += 2.3;
      break;
    case 16:
      cyborgBasePoint.accuracyPoints += 3.5;
      cyborgBasePoint.criticalHitPoints += 0.5;
      cyborgBasePoint.speedPoints += 2.6;
      cyborgBasePoint.luckPoints += 2.5;
      break;
    case 17:
      cyborgBasePoint.accuracyPoints += 3.6;
      cyborgBasePoint.criticalHitPoints += 0.6;
      cyborgBasePoint.speedPoints += 2.5;
      cyborgBasePoint.luckPoints += 2.8;
      break;
    case 18:
      cyborgBasePoint.accuracyPoints += 3.6;
      cyborgBasePoint.criticalHitPoints += 0.6;
      cyborgBasePoint.speedPoints += 2.9;
      cyborgBasePoint.luckPoints += 2.4;
      break;
    case 19:
      cyborgBasePoint.accuracyPoints += 1.8;
      cyborgBasePoint.criticalHitPoints += 0.8;
      cyborgBasePoint.speedPoints += 1.75;
      cyborgBasePoint.luckPoints += 1.8;
      break;
    case 20:
      cyborgBasePoint.accuracyPoints += 1.9;
      cyborgBasePoint.criticalHitPoints += 0.9;
      cyborgBasePoint.speedPoints += 1.65;
      cyborgBasePoint.luckPoints += 1.7;
      break;
    case 21:
      cyborgBasePoint.accuracyPoints += 1.7;
      cyborgBasePoint.criticalHitPoints += 0.9;
      cyborgBasePoint.speedPoints += 1.85;
      cyborgBasePoint.luckPoints += 1.7;
      break;
    case 22:
      cyborgBasePoint.accuracyPoints += 1.7;
      cyborgBasePoint.criticalHitPoints += 0.7;
      cyborgBasePoint.speedPoints += 1.85;
      cyborgBasePoint.luckPoints += 1.9;
      break;
    case 23:
      cyborgBasePoint.healthPoint += 0.4;
      cyborgBasePoint.accuracyPoints += 1.8;
      cyborgBasePoint.criticalHitPoints += 0.8;
      cyborgBasePoint.speedPoints += 1.75;
      cyborgBasePoint.luckPoints += 1.8;
      break;
    case 24:
      cyborgBasePoint.accuracyPoints += 1.8;
      cyborgBasePoint.criticalHitPoints += 0.8;
      cyborgBasePoint.speedPoints += 1.75;
      cyborgBasePoint.luckPoints += 1.8;
      cyborgBasePoint.persistencePoints += 0.4;
      break;
    case 25:
      cyborgBasePoint.accuracyPoints += 4.8;
      cyborgBasePoint.criticalHitPoints += 1.4;
      cyborgBasePoint.speedPoints += 1.5;
      cyborgBasePoint.luckPoints += 1.2;
      break;
    case 26:
      cyborgBasePoint.accuracyPoints += 4.9;
      cyborgBasePoint.criticalHitPoints += 1.5;
      cyborgBasePoint.speedPoints += 1.4;
      cyborgBasePoint.luckPoints += 1.1;
      break;
    case 27:
      cyborgBasePoint.accuracyPoints += 4.7;
      cyborgBasePoint.criticalHitPoints += 1.5;
      cyborgBasePoint.speedPoints += 1.6;
      cyborgBasePoint.luckPoints += 1.1;
      break;
    case 28:
      cyborgBasePoint.accuracyPoints += 4.7;
      cyborgBasePoint.criticalHitPoints += 1.3;
      cyborgBasePoint.speedPoints += 1.6;
      cyborgBasePoint.luckPoints += 1.3;
      break;
    case 29:
      cyborgBasePoint.accuracyPoints += 5.2;
      cyborgBasePoint.criticalHitPoints += 1.4;
      cyborgBasePoint.speedPoints += 1.5;
      cyborgBasePoint.luckPoints += 1.2;
      break;
    case 30:
      cyborgBasePoint.attackPoints += 0.4;
      cyborgBasePoint.accuracyPoints += 4.8;
      cyborgBasePoint.criticalHitPoints += 1.4;
      cyborgBasePoint.speedPoints += 1.5;
      cyborgBasePoint.luckPoints += 1.2;
      break;
  }
  return cyborgBasePoint
};

const originPlanetInfluence = (
  randomness: number,
  cyborgBasePoint: cyborgBasePoint
) => {
  switch (randomness) {
    case 1: // Aviator
      cyborgBasePoint.attackPoints += 2;
      cyborgBasePoint.criticalHitPoints += 3;
      cyborgBasePoint.speedPoints += 6;
      break;
    case 2: // Brawler
      cyborgBasePoint.attackPoints += 1.2;
      cyborgBasePoint.criticalHitPoints += 1.8;
      cyborgBasePoint.speedPoints += 1.5;
      break;
    case 3: // Marine
      cyborgBasePoint.attackPoints += 2.4;
      cyborgBasePoint.criticalHitPoints += 0.9;
      cyborgBasePoint.speedPoints += 7.5;
      break;
    case 4: // Tactician
      cyborgBasePoint.attackPoints += 0.4;
      cyborgBasePoint.criticalHitPoints += 1.2;
      cyborgBasePoint.speedPoints += 5.25;
      break;
    case 5: // Warrior
      cyborgBasePoint.attackPoints += 3.6;
      cyborgBasePoint.criticalHitPoints += 2.1;
      cyborgBasePoint.speedPoints += 4.5;
      break;
    default:
      break;
  }
  return cyborgBasePoint
};

/**
 * Attribute point calculation based on formula and basePoint
 */
export const baseTraitPoint = (
  gameLevel: number,
  cyborgBasePoint: cyborgBasePoint
) => {
  let baseMultiplers = {
    health: {
      base0: 40,
      base: 150,
      multipler_1: 0.05,
      multipler_2: 6,
    },
    attack: {
      base0: 5,
      base: 150,
      multipler_1: 0.01,
      multipler_2: 0.75,
    },
    accuracy: {
      base: 55,
      multipler_1: 2,
      multipler_2: 0.44,
    },
    criticalHit: {
      base: 5,
      multipler_1: 0.4,
      multipler_2: 0.65,
    },
    speed: {
      base: 5,
      multipler_1: 0.5,
      multipler_2: 2,
    },
    luck: {
      base: 1.5,
      multipler_1: 0.5,
      multipler_2: 0.2,
    },
    persistence: {
      base: 4,
      multipler_1: 0.7,
      multipler_2: 0.9,
    },
  };

  // let gameLevel = 1;

  let gameHealth =
    baseMultiplers.health.base0 +
    baseMultiplers.health.base *
      cyborgBasePoint.healthPoint *
      baseMultiplers.health.multipler_1 +
    gameLevel * baseMultiplers.health.multipler_2;

  let gameAttack =
    baseMultiplers.attack.base0 +
    baseMultiplers.attack.base *
      cyborgBasePoint.attackPoints *
      baseMultiplers.attack.multipler_1 +
    gameLevel * baseMultiplers.attack.multipler_2;

  let gameAccuracy =
    baseMultiplers.accuracy.base +
    cyborgBasePoint.accuracyPoints * baseMultiplers.accuracy.multipler_1 +
    gameLevel * baseMultiplers.accuracy.multipler_2;

  let gameCriticalHit =
    baseMultiplers.criticalHit.base *
      cyborgBasePoint.criticalHitPoints *
      baseMultiplers.criticalHit.multipler_1 +
    gameLevel * baseMultiplers.criticalHit.multipler_2;

  let gameSpeed =
    baseMultiplers.speed.base *
      cyborgBasePoint.speedPoints *
      baseMultiplers.speed.multipler_1 +
    gameLevel * baseMultiplers.speed.multipler_2;

  let gameLuck =
    baseMultiplers.luck.base *
      cyborgBasePoint.luckPoints *
      baseMultiplers.luck.multipler_1 +
    gameLevel * baseMultiplers.luck.multipler_2;

  let gamePersistence =
    baseMultiplers.persistence.base *
      cyborgBasePoint.persistencePoints *
      baseMultiplers.persistence.multipler_1 +
    gameLevel * baseMultiplers.persistence.multipler_2;

  // fixing it to 2 decimal percision
  return {
    health: parseFloat(gameHealth.toFixed(2)),
    attack: parseFloat(gameAttack.toFixed(2)),
    accuracy: parseFloat(gameAccuracy.toFixed(2)),
    criticalHit: parseFloat(gameCriticalHit.toFixed(2)),
    speed: parseFloat(gameSpeed.toFixed(2)),
    luck: parseFloat(gameLuck.toFixed(2)),
    persistence: parseFloat(gamePersistence.toFixed(2)),
  };
};


export const statQuirkValue = (attribute:number, effect: number) => {
  let value : number = 0;
  let field : string = "";
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

  return {
    field,
    value
  }
}
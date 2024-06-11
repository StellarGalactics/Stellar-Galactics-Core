using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TempEndLoot
{


}

// Root myDeserializedClass = JsonConvert.DeserializeObject<Root>(myJsonResponse);
[System.Serializable]
public class AttackerNNN
{
    public int cyborgID;
    public List<int> position;
    public double attack;
    public int stressChange;
    public double stress;
    public double healthChange;
    public double health;
}
[System.Serializable]
public class Attacker2NNN
{
    public int cyborgID;
    public List<int> position;
}
[System.Serializable]
public class AttributeNNN
{
    public int attribute;
    public int effect;
}
[System.Serializable]
public class BodyPartsNNN
{
    public string gender;
    public string helmet;
    public string vest;
    public Eye eye;
    public Neck neck;
    public OriginPlanetNNN originPlanet;
}
[System.Serializable]
public class CorePlayNNN
{
    public bool skip;
    public int hit;
    public int attackerID;
    public List<AttackerNNN> attackers;
    public List<DefenderNNN> defenders;
    public PostmartamNNN postmartam;
    public AttackerNNN attacker;
}
[System.Serializable]
public class CyborgChangeNNN
{
    public string cyborgID;
    public List<QuirkNNN> quirks;
    public int stress;
    public int lifepoint;
    public int xp;
}
[System.Serializable]
public class DefenderNNN
{
    public int cyborgID;
    public List<int> position;
    public double attack;
    public double stressChange;
    public double stress;
    public double healthChange;
    public double health;
    public bool isFaint;
    public bool isDodge;
    public bool gotSkip;
}
[System.Serializable]
public class EyeNNN
{
    public string name;
    public string @class;
}
[System.Serializable]
public class FleeNNN
{
}
[System.Serializable]
public class GamePositionNNN
{
    public LootNNN loot;
    public MineNNN mine;
}
[System.Serializable]
public class LootNNN
{
    public List<int> frontRow;
    public List<int> backRow;
    public int id;
    public string name;
    public string status;
    public List<QuirkNNN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitNNN trait;
    public string rank;
    public int level;
    public int health;
    public double attack;
    public double speed;
    public double criticalHit;
    public double accuracy;
    public double luck;
    public double persistence;
    public int lifePoint;
    public int stressPoint;
    public int energy;
    public int xp;
    public string cyborgID;
    public List<object> quirkEffects;
}
[System.Serializable]
public class LootBoxNNN
{
    public int RankUpPoint;
    public int Weapon;
}
[System.Serializable]
public class LootCyborgNNN
{
    public int id;
    public string name;
    public string status;
    public List<QuirkNNN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitNNN trait;
    public string rank;
    public int level;
    public int health;
    public double attack;
    public double speed;
    public double criticalHit;
    public double accuracy;
    public double luck;
    public double persistence;
    public int lifePoint;
    public int stressPoint;
    public int energy;
    public int xp;
}
[System.Serializable]
public class LootPositionNNN
{
    public List<int> frontRow;
    public List<int> backRow;
}
[System.Serializable]
public class LootSimulationNNN
{
    public ResultNNN result;
    public GamePositionNNN gamePosition;
    public ParticipantNNN participant;
    public PrePlayNNN prePlay;
    public List<CorePlayNNN> corePlay;
}
[System.Serializable]
public class LossNNN
{
    public string team;
    public RewardN reward;
}
[System.Serializable]
public class MineNNN
{
    public List<int> frontRow;
    public List<int> backRow;
    public int id;
    public string name;
    public string status;
    public List<QuirkNNN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitNNN trait;
    public string rank;
    public int level;
    public int health;
    public double attack;
    public double speed;
    public double criticalHit;
    public double accuracy;
    public double luck;
    public double persistence;
    public int lifePoint;
    public int stressPoint;
    public int energy;
    public int xp;
    public string cyborgID;
    public List<object> quirkEffects;
}
[System.Serializable]
public class MineCyborgNNN
{
    public int id;
    public string name;
    public string status;
    public List<QuirkNNN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitNNN trait;
    public string rank;
    public int level;
    public int health;
    public double attack;
    public double speed;
    public double criticalHit;
    public double accuracy;
    public double luck;
    public double persistence;
    public int lifePoint;
    public int stressPoint;
    public int energy;
    public int xp;
}
[System.Serializable]
public class MinePositionNNN
{
    public List<int> frontRow;
    public List<int> backRow;
}
[System.Serializable]
public class MinePostmartamNNN
{
    public FleeNNN flee;
    public SelfStressNNN selfStress;
}
[System.Serializable]
public class MineSimulationNNN
{
    public List<int> participant;
    public PositionNNN position;
    public long mine_start_time;
    public int mine_duration;
    public RewardN reward;
}
[System.Serializable]
public class NeckNNN
{
    public string name;
    public string @class;
}
[System.Serializable]
public class OriginPlanetNNN
{
    public string name;
    public string @class;
}
[System.Serializable]
public class ParticipantNNN
{
    public List<LootNNN> loot;
    public List<MineNNN> mine;
}
[System.Serializable]
public class PositionNNN
{
    public List<int> frontRow;
    public List<int> backRow;
}
[System.Serializable]
public class PostmartamNNN
{
    public List<MinePostmartamNNN> minePostmartam;
    public List<object> lootPostmartam;
}
[System.Serializable]
public class PrePlayNNN
{
    public List<MineNNN> mine;
    public List<LootNNN> loot;
}
[System.Serializable]
public class QuirkNNN
{
    public int type;
    public List<object> attributes;
}
[System.Serializable]
public class ResultNNN
{
    public WinN win;
    public LossN loss;
}

[System.Serializable]
public class EndLootResponse
{
    public string message;
    public UpdatedGameNNN updatedGame;
}
[System.Serializable]
public class SelfStressNNN
{
    public string id;
    public StateNNN state;
}
[System.Serializable]
public class StateNNN
{
    public int currentHealth;
    public double attack;
    public double accuracy;
    public double criticalHit;
    public double speed;
    public double luck;
    public double persistance;
}
[System.Serializable]
public class TraitNNN
{
    public string @class;
    public BodyPartsNNN bodyParts;
}
[System.Serializable]
public class UpdatedGameNNN
{
    public string id;
    public string state;
    public string result;
    public long mineTimestamp;
    public List<MineCyborgNNN> mineCyborgs;
    public string minePlayerId;
    public MineSimulationNNN mineSimulation;
    public MinePositionNNN minePosition;
    public List<LootCyborgNNN> lootCyborgs;
    public long lootTimestamp;
    public string lootPlayerId;
    public LootSimulationNNN lootSimulation;
    public LootPositionNNN lootPosition;
    public bool lootClaimed;
}
[System.Serializable]
public class WinNNN
{
    public string team;
    public RewardN reward;
}



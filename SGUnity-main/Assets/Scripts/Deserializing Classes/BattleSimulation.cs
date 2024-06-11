using System.Collections.Generic;

[System.Serializable]
public class AttackerN
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
public class AttributeN
{
    public int attribute;
    public int effect;
}

[System.Serializable]
public class BodyPartsN
{
    public string gender;
    public string helmet;
    public string vest;
    public string skin;
    public EyeN eye;
    public NeckN neck;
    public OriginPlanetN originPlanet;
}
[System.Serializable]
public class CorePlayN
{
    public bool skip;
    public int hit;
    public int attackerID;
    public List<AttackerN> attackers;
    public List<DefenderN> defenders;
    public PostmartamN postmartam;
}
[System.Serializable]
public class CyborgChangeN
{
    public int cyborgID;
    public bool levelUp;
    public int level;
    public int xp;
    public int energy;
    public MetadataUpdate metadataUpdate;
    public List<QuirkN> quirks;
    public List<int> newQuirk;
    public int stress;
    public int lifepoint;
}

[System.Serializable]
public class MetadataUpdate
{
    public double health;
    public double attack;
    public double accuracy;
    public double criticalHit;
    public double speed;
    public double luck;
    public double persistence;
}
[System.Serializable]
public class DefenderN
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
public class EyeN
{
    public string name;
    public string @class;
}
[System.Serializable]
public class FleeN
{
    public string id;
    public List<RemainingTeam> remaningTeam;
}
[System.Serializable]
public class RemainingTeam
{
    public int cyborgID;
    public int stress;
}
[System.Serializable]
public class GamePositionN
{
    public LootN loot;
    public MineN mine;
}
[System.Serializable]
public class LootN
{
    public string sequence;
    public List<int> frontRow;
    public List<int> backRow;
    public int id;
    public string name;
    public string status;
    public List<QuirkN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitN trait;
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
    public double stressPoint;
    public int energy;
    public int xp;
    public string cyborgID;
    public List<QuirkEffectN> quirkEffects;
}
[System.Serializable]
public class LootBoxN
{
}
[System.Serializable]
public class LootCyborgN
{
    public int id;
    public string name;
    public string status;
    public List<QuirkN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitN trait;
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
    public double stressPoint;
    public int energy;
    public int xp;
}
[System.Serializable]
public class LootPositionN
{
    public List<int> frontRow;
    public List<int> backRow;
}
[System.Serializable]
public class LootPostmartamN
{
    public FleeN flee;
    public SelfStressN selfStress;
}
[System.Serializable]
public class LootSimulationN
{
    public ResultLootSim result;
    public GamePositionN gamePosition;
    public ParticipantN participant;
    public PrePlayN prePlay;
    public List<CorePlayN> corePlay;
    public string mineUserName;
    public string lootUserName;
}
[System.Serializable]
public class LossN
{
    public string team;
    public EndReward reward;
}
[System.Serializable]
public class MineN
{
    public string sequence;
    public List<int> frontRow;
    public List<int> backRow;
    public int id;
    public string name;
    public string status;
    public List<QuirkN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitN trait;
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
    public double stressPoint;
    public int energy;
    public int xp;
    public string cyborgID;
    public List<object> quirkEffects;
}
[System.Serializable]
public class MineCyborgN
{
    public int id;
    public string name;
    public string status;
    public List<QuirkN> quirks;
    public List<string> medal;
    public int cooldownPeriod;
    public TraitN trait;
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
    public double stressPoint;
    public int energy;
    public int xp;
}
[System.Serializable]
public class MinePositionN
{
    public List<int> frontRow;
    public List<int> backRow;
}
[System.Serializable]
public class MinePostmartamN
{
    public FleeN flee;
    public SelfStressN selfStress;
}
[System.Serializable]
public class MineSimulationN
{
    public List<int> participant;
    public PositionN position;
    public long mine_start_time;
    public int mine_duration;
    public RewardN reward;
}
[System.Serializable]
public class NeckN
{
    public string name;
    public string @class;
}
[System.Serializable]
public class OriginPlanetN
{
    public string name;
    public string @class;
}
[System.Serializable]
public class ParticipantN
{
    public List<LootN> loot;
    public List<MineN> mine;
}
[System.Serializable]
public class PositionN
{
    public List<int> frontRow;
    public List<int> backRow;
}
[System.Serializable]
public class PostmartamN
{
    public List<MinePostmartamN> minePostmartam;
    public List<LootPostmartamN> lootPostmartam;
}
[System.Serializable]
public class PrePlayN
{
    public List<MineN> mine;
    public List<LootN> loot;
}
[System.Serializable]
public class QuirkN
{
    public int type;
    public List<AttributeN> attributes;
}
[System.Serializable]
public class Quirk7N
{
    public int attribute;
    public int effect;
}
[System.Serializable]
public class QuirkEffectN
{
    public QuirkN quirk;
    public double deltaHealth;
    public double deltaStress;
    public double deltaSpeed;
    public double deltaAttack;
    public double deltaAccuracy;
    public double deltaLuck;
    public double deltaPersistance;
}
[System.Serializable]
public class ResultN
{
    public string mineUserName;
    public string lootUserName;
    public string id;
    public string state;
    public string result;
    public long mineTimestamp;
    public List<MineCyborgN> mineCyborgs;
    public string minePlayerId;
    public MineSimulationN mineSimulation;
    public MinePositionN minePosition;
    public bool mineClaimed;
    public List<LootCyborgN> lootCyborgs;
    public long lootTimestamp;
    public string lootPlayerId;
    public LootSimulationN lootSimulation;
    public LootPositionN lootPosition;
    public bool lootClaimed;

}

[System.Serializable]
public class ResultLootSim
{
    public WinN win;
    public LossN loss;
}
[System.Serializable]
public class EndReward
{
    public long SGF1;
    public long SGF2;
    public Lootbox lootbox;
    public List<CyborgChangeN> cyborgChanges;
}

[System.Serializable]
public class RewardN
{
    public long SGF1;
    public long SGF2;
    public LootBox lootBox;
    public List<CyborgChangeN> cyborgChanges;
}
[System.Serializable]
public class BattleSimulation
{
    public ResultN result;
    public string minePlayer;
    public string lootPlayer;
    public bool success;
}
[System.Serializable]
public class SelfStressN
{
    public string id;
    public StateN state;
}
[System.Serializable]
public class StateN
{
    public double currentHealth;
    public double attack;
    public double accuracy;
    public double criticalHit;
    public double speed;
    public double luck;
    public double persistance;
}
[System.Serializable]
public class TraitN
{
    public string @class;
    public BodyPartsN bodyParts;
}
[System.Serializable]
public class WinN
{
    public string team;
    public EndReward reward;
}

#region Demo Classes
[System.Serializable]
public class DemoMineLossResult
{
    public string mineUserName;
    public string lootUserName;
    public ResultLootSim result;
    public GamePositionN gamePosition;
    public ParticipantN participant;
    public PrePlayN prePlay;
    public List<CorePlayN> corePlay;
    //public PostPlay postPlay;
    //public WinN win;
    //public LossN loss;
}
[System.Serializable]
public class DemoMineLossResp
{
    public DemoMineLossResult result;
}

#endregion








using System;
using System.Collections.Generic;

public class Requests
{

}

public class Register
{
    public string username;
    public string email;
    public string password;
    //public string activationCode;
}

public class Login
{
    public string username;
    public string password;
    public string token;
}

public class LoginResponse
{
  
    public bool success;
    public string id;
}

public class FailResponseAuth
{
    public string message;
}

public class RegisterResponse
{
    //public string message;
    public bool success;
    
}

public class Data
{
    public string id;
    public string username;
    public string email;
    public string password;
    public DateTime createdAt;
    public string activationCode;
    public string avatar;
    public string wallet;
    public string walletNode;
    public int rankupPoint;
}

public class Parameters
{
    public string wallet;
    public int id;
}
public class Airdrop
{
    public string jsonrpc = "2.0";
    public int id = 1;
    public string method = "requestAirdrop";
    public Parameters[] param;
}

[System.Serializable]
public class Mine
{
    public List<int> id;
    public List<int> frontRow;
    public List<int> backRow;
    //public List<List<int>> position;
}


[System.Serializable]
public class Loot
{
    public string mineId;
    public List<int> id;
    public List<int> frontRow;
    public List<int> backRow;
    //public List<List<int>> position;
}

public class WalletAddress
{
    public string result;
}



//[System.Serializable]
//public class Result3
//{
//    public string id;
//    public string state;
//    public string result;
//    public long mineTimestamp;
//    public List<MineCyborgN> mineCyborgs;
//    public string minePlayerId;
//    public MineSimulationN mineSimulation;
//    public MinePositionN minePosition;
//    public List<LootCyborgN> lootCyborgs;
//    public object lootTimestamp;
//    public object lootPlayerId;
//    public LootSimulationN lootSimulation;
//}

[System.Serializable]
public class MineResponse
{
    public Datum result;
    public bool success;
}

[System.Serializable]
public class SendZion
{
    public string id;
    public string zion;
}
[System.Serializable]
public class SendZionHospital
{
    public string id;
    public string zion;
    public List<int> quirk;
    public bool speedup;
}


[System.Serializable]
public class ClaimZion
{
    public string id;
    public string zion;
    public List<int> quirk;
    public bool speedup;
}
[System.Serializable]
public class CyborgZion
{
    public string id;
    public Zion zion;
}
[System.Serializable]
public class ZionResponse
{
    public List<CyborgZion> cyborgs;
    public long timestamp;
}
[System.Serializable]
public class Zion
{
    public bool activeness;
    public string zionType;
    public long createdAt;
}
[System.Serializable]
public class ClaimData1
{
    public bool isDead;
    public string zionType;
    public double existingStressPoint;
    public double newStressPoint;
}

[System.Serializable]
public class ZionClaimResponse
{
    public bool success;
    public string message;
    public ClaimData1 data;
}
[System.Serializable]
public class AckQurkInfo
{
    public int attribute;
    public int effect;
}
[System.Serializable]
public class ClaimData2
{
    public bool isDead;
    public string zionType;
    public List<int> acknowledgeQuirk;
    public AckQurkInfo ackQurkInfo;
}
[System.Serializable]
public class ZionHospitalResponse
{
    public bool success;
    public string message;
    public ClaimData2 data;
}
[System.Serializable]
public class LootBox
{
    public int RankUpPoint;
    public int Weapon;
}

[System.Serializable]
public class Reward
{
    public long SGF1;
    public int SGF2;
    public LootBox LootBox;
    public List<object> cyborgChanges;
}
[System.Serializable]
public class EndMineResponse
{
    public string message;
    public UpdatedGameNNN updatedGame;
}

[System.Serializable]
public class ZionSendResponse
{
    public string message;
}
[System.Serializable]
public class RankUpResponse
{
    public bool success;
    public string message;
}

[System.Serializable]
public class RankUpClaim
{
    public string cyborgID;
    public bool speedup;
}


[System.Serializable]
public class UserData
{
    public string id;
    public string username;
    public string email;
    public string avatar;
    public string wallet;
    public long SGF1;
    public long SGF2;
    public int rankupPoint;
    public bool demo;
    public bool activated;
}

[System.Serializable]
public class UserDetails
{
    public UserData result;
}

// Root myDeserializedClass = JsonConvert.DeserializeObject<Root>(myJsonResponse);
[System.Serializable]
public class Lootbox
{
    public List<Xp> xp;
    public int rankupPoint;
    public long SGF1;
    public long SGF2;
}
[System.Serializable]
public class LootBoxResult
{
    public string id;
    public string state;
    public Lootbox lootbox;
    public long openTimeStamp;
    public string playerId;
    public string mode;
}
[System.Serializable]
public class LootBoxResponse
{
    public List<LootBoxResult> result;
}
[System.Serializable]
public class Xp
{
    public int cyborgID;
    public int xp;
}

[System.Serializable]
public class ServerTime
{
    public long timestamp;
}
[System.Serializable]
public class DataLBCR
{
    public string id;
    public string state;
    public Lootbox lootbox;
    public long openTimeStamp;
    public string playerId;
}
[System.Serializable]
public class LootBoxClaimResponse
{
    public bool success;
    public string message;
    public DataLBCR data;
}

[System.Serializable]
public class FeedbackData
{
    public int feedback;
}

[System.Serializable]
public class ActivationData
{
    public string activationCode;
}

[System.Serializable]
public class ActivationResponse
{
    public bool success;
}

[System.Serializable]
public class LootBoxClaim
{
    public string lootboxID;
    public bool speedup;
}

[System.Serializable]
public class ActivationAPIResponse
{
    public string message;
}

[System.Serializable]

public class RewardDayResponse
{
    public int day;
    public bool success; 
}

[System.Serializable]

public class GameMode
{
    public bool gameMode;
    public List<int> tourDays;
}

[System.Serializable]

public class CiamRewardResponse
{
    public int reward;
    public bool success;
    public string message;
}

[System.Serializable]
public class Leaderboard
{
    public List<TopPlayer> topPlayers;
    public int playerRank;
}

[System.Serializable]
public class TopPlayer
{
    public string id;
    public string username;
    public long SGF1;
    public long SGF2;
}

#region Wager
[System.Serializable]
public class GetWagerCyborgsBody
{
    public int gameID;
    public int amount;
    public bool reRoll;
}

[System.Serializable]
public class Metadata
{
    public int id;
    public string name;
    public string status;
    public int cooldownPeriod;
    public TraitN trait;
    public string rank;
    public int level;
    public List<QuirkN> quirks;
    public List<string> medal;
    public int stressPoint;
    public int lifePoint;
    public double health;
    public double attack;
    public double accuracy;
    public double criticalHit;
    public double speed;
    public double luck;
    public double persistence;
    public int energy;
    public int xp;
}

[System.Serializable]
public class ResultWagerCyborgs
{
    public string sequence;
    public Cyborg metadata;
}

[System.Serializable]
public class GetWagerCyborgsResponse
{
    public int gameID;
    public List<ResultWagerCyborgs> result;
    public bool success;
}

[System.Serializable]
public class WagerWarBody
{
    public int gameId;
    public List<string> frontRow;
    public List<string> backRow;
}

[System.Serializable]
public class WagerWarResponse
{
    public bool result;
    public LootSimulationN simulation;
    public bool success;
    public long reward;
    public string error;
}

#endregion

#region Devnet Airdrop
[System.Serializable]
public class Error
{
    public int code;
    public string message;
}
[System.Serializable]
public class AirdropResponse
{
    public string result;
    public string jsonrpc;
    public Error error;
    public int id;
}

#endregion

#region Devnet Balance
[System.Serializable]
public class Context
{
    public string apiVersion;
    public int slot;
}
[System.Serializable]
public class SOLResult
{
    public Context context;
    public long value;
}
[System.Serializable]
public class DevnetBalance
{
    public string jsonrpc;
    public SOLResult result;
    public int id;
}

#endregion

using System.Collections.Generic;

[System.Serializable]
public class Datum
{
    public string id;
    public string state;
    public int gameID;
    public string result;
    public string mode;
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
    public bool lootClaimed;
}


[System.Serializable]
public class MineData
{
    public List<Datum> data;
    public long timestamp;
}











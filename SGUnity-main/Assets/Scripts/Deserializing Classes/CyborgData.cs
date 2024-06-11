
using System.Collections.Generic;

[System.Serializable]
public class BodyParts
{
    public string gender;
    public string helmet;
    public string vest;
    public Eye eye;
    public Neck neck;
    public OriginPlanet originPlanet;
}

[System.Serializable]
public class Cyborg
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
    public int stressPoint;
    public int energy;
    public int xp;
    public string sequence;
}

[System.Serializable]
public class Eye
{
    public string name;
    public string @class;
}

[System.Serializable]
public class Neck
{
    public string name;
    public string @class;
}

[System.Serializable]
public class OriginPlanet
{
    public string name;
    public string @class;
}

[System.Serializable]
public class Result
{
    public string id;
    public Cyborg cyborg;
    public string playerId;
    public long prevRankupTimeStamp;
    public string mode;
}

[System.Serializable]
public class CyborgData
{
    public string sequence;
    public List<Result> result;
}





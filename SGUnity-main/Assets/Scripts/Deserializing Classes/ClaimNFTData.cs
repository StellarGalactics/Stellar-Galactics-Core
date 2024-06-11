using System.Collections.Generic;

[System.Serializable]
public class Attribute
{
    public string trait_type;
    public string value;
}

[System.Serializable]
public class Collection
{
    public string name;
    public string family;
}

[System.Serializable]
public class Creator1
{
    public string address;
    public int share;
}

[System.Serializable]
public class File1
{
    public string uri;
    public string type;
}

[System.Serializable]
public class Properties
{
    public List<File1> files;
    public string category;
    public List<Creator1> creators;
}
[System.Serializable]
public class ClaimNFTData
{
    public Signature result;
}

[System.Serializable]
public class Signature
{
    public string name;
    public string symbol;
    public string description;
    public int seller_fee_basis_points;
    public string image;
    public string external_url;
    public List<Attribute> attributes;
    public Collection collection;
    public Properties properties;
}

[System.Serializable]
public class SignatureList
{
    public Signature[] signature;
}




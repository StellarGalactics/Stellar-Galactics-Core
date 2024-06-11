using System.Collections.Generic;

public class AttributeNew
{
    public string trait_type;
    public string value;
}

public class CollectionNew
{
    public string name;
    public string family;
}

public class CreatorNew
{
    public string address;
    public int share;
}

public class FileNew
{
    public string uri;
    public string type;
}

public class PropertiesNew
{
    public List<FileNew> files;
    public string category;
    public List<CreatorNew> creators;
}

public class ResultNew
{
    public string name;
    public string symbol;
    public string description;
    public int seller_fee_basis_points;
    public string image;
    public string external_url;
    public List<AttributeNew> attributes;
    public CollectionNew collection;
    public PropertiesNew properties;
}

public class NewCyborgData
{
    public List<ResultNew> result;
}

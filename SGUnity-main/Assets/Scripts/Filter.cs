using UnityEngine;

public class Filter : MonoBehaviour
{
    public GameObject filterDropdown;
    public bool isOpen = false;
    public void OnClickFilter()
    {
        isOpen = !isOpen;
        filterDropdown.SetActive(isOpen);
    }
    public void OnClickHealthFilter()
    {
        NetworkingManager.instance.CyborgFilter("health");
        isOpen = !isOpen;
        filterDropdown.SetActive(isOpen);       
    }

    public void OnClickLevelFilter()
    {
        NetworkingManager.instance.CyborgFilter("level");
        isOpen = !isOpen;
        filterDropdown.SetActive(isOpen);     
    }

    public void OnClickStressFilter()
    {
        NetworkingManager.instance.CyborgFilter("stress");
        isOpen = !isOpen;
        filterDropdown.SetActive(isOpen);        
    }

    public void OnClickAttackFilter()
    {
        NetworkingManager.instance.CyborgFilter("attack");
        isOpen = !isOpen;
        filterDropdown.SetActive(isOpen);
       
    }

    public void OnClickPurityFilter()
    {
        NetworkingManager.instance.CyborgFilter("purity");
        isOpen = !isOpen;
        filterDropdown.SetActive(isOpen);

    }
}

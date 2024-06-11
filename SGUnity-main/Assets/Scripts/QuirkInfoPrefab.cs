using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class QuirkInfoPrefab : MonoBehaviour
{
    [SerializeField] GameObject quirkInfoDescriptionBG;
    public TMP_Text descriptionText;
    bool descOpen = false;
    
    public void OnClickButton()
    {
        CanvasHandler ch = CanvasHandler.instance;
        descOpen = !descOpen;
        if (ch.mineTeamSelectionGroup.activeInHierarchy)
        {
            ch.CyborgRightStats.GetComponent<QuirksMedalsEquipment>().quirkInfo.SetActive(descOpen);
            Vector3 vector3 = new Vector3(5f, 5f, 0f);
            ch.CyborgRightStats.GetComponent<QuirksMedalsEquipment>().quirkInfo.transform.position = gameObject.transform.position + vector3;
            ch.CyborgRightStats.GetComponent<QuirksMedalsEquipment>().quirkInfo.GetComponentInChildren<TMP_Text>().text = descriptionText.text;
        }
        else if(ch.lootTeamSelectionGroup.activeInHierarchy)
        {
            ch.CyborgRightStats2.GetComponent<QuirksMedalsEquipment>().quirkInfo.SetActive(descOpen);
            Vector3 vector3 = new Vector3(5f, 5f, 0f);
            ch.CyborgRightStats2.GetComponent<QuirksMedalsEquipment>().quirkInfo.transform.position = gameObject.transform.position + vector3;
            ch.CyborgRightStats2.GetComponent<QuirksMedalsEquipment>().quirkInfo.GetComponentInChildren<TMP_Text>().text = descriptionText.text;
        }
        
    
        //quirkInfoDescriptionBG.SetActive(descOpen);
    }
}

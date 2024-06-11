using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PostBattleCyborg : MonoBehaviour
{
    public TMP_Text nameText, xp, stress, energy, xpInc, stressInc, energyInc;
    public GameObject levelBanner, xpBar;
    public Image origin, body, jaw, eye, neck, helmet, vest;
    public int id;


    public void OnClickCyborg()
    {
        Debug.Log("On Click Borg Post");
        BattleHandler.instance.cic.gameObject.SetActive(true);
        BattleHandler.instance.cic.ShowSelectedCyborg(id);
    }
    //need to revise reference code in battle handler
}

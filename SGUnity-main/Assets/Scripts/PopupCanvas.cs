using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PopupCanvas : MonoBehaviour
{
    public TMP_Text descriptionText, nameText, lvlText, stressText, energyText, titleText;
    public Image originPlanet, body, jaw, eye, neck, helmet, vest;
    public string cyborgId, type, lootboxId;


    public void OnClickSpeedUpZion()
    {
        StartCoroutine(NetworkingManager.instance.ClaimCyborgZion(cyborgId, type, true));
    }

    public void OnClickSpeedUpLootBox()
    {
        StartCoroutine(NetworkingManager.instance.ClaimLootBox(lootboxId, true));
        //StartCoroutine(NetworkingManager.instance.ClaimLootbox(cyborgId, type, true));
    }
}

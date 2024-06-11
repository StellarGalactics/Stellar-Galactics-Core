using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class lootboxCard : MonoBehaviour
{
    [SerializeField] public GameObject lockedImage, openBtn, claimBtn ,timerBG, speedUpBtn;
    [SerializeField] public TMP_Text crateNameText;
    [SerializeField] public string id;
    [SerializeField] public long createdAt, timeStamp;
    int lockDuration = 180;
    



    public void OnClickOpenLootBox()
    {
        StartCoroutine(NetworkingManager.instance.OpenLootBox(id, gameObject));
    }

    public void OnClickClaimLootBox()
    {
        StartCoroutine(NetworkingManager.instance.ClaimLootBox(id));
    }

    public void OnClickSpeedUp()
    {
        CanvasHandler.instance.inventoryPopUpCanvas.SetActive(true);
        CanvasHandler.instance.lootboxSpeedUpPopup.SetActive(true);
        double timeRemaining = ((createdAt / 1000 / 60) + (lockDuration) - (timeStamp / 1000 / 60));
        CanvasHandler.instance.lootboxSpeedUpPopup.GetComponent<PopupCanvas>().descriptionText.text = $"You can speed up the lootbox opening by paying $SGF1 {0.017 * timeRemaining}.";
        CanvasHandler.instance.lootboxSpeedUpPopup.GetComponent<PopupCanvas>().lootboxId = id;
    }
}

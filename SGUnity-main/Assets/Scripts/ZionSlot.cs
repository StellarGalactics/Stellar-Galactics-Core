using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ZionSlot : MonoBehaviour
{
    [SerializeField] public GameObject unlockedPlaceHolder, dragDrop, cyborgInfo, speedUpBtn, reclaimBtn, timer, lockedPlaceHolder, lockedBackground, lockedHintBtn, cyborgImage;
    [SerializeField] public Image originPlanet, body, jaw, eye, neck, helmet, vest;
    [SerializeField] public GameObject stress, energy;
    [SerializeField] public TMP_Text nameText;
    [SerializeField] public string cyborgId, type;
    [SerializeField] public long timeStamp, createdAt;
    //double baseCost = 0.017;
    int lockDuration = 180;

    private void OnEnable()
    {
        if (!NetworkingManager.instance.isDemo)
        {
            reclaimBtn.GetComponent<Button>().onClick.AddListener(OnClickReclaim);
        }
        if (!NetworkingManager.instance.isDemo)
        {
            speedUpBtn.GetComponent<Button>().onClick.AddListener(OnClickSpeedUp);
        }

    }

    public void OnClickReclaim()
    {
        Debug.Log("OnClickReclaim");
        StartCoroutine(NetworkingManager.instance.ClaimCyborgZion(cyborgId, type, false));
    }

    public void OnClickSpeedUp()
    {
        CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
        CanvasHandler.instance.zionSpeedUpPopup.SetActive(true);
        double timeRemaining = ((createdAt / 1000 / 60) + (lockDuration) - (timeStamp / 1000 / 60));
        if (NetworkingManager.instance.gm.gameMode)
        {
            CanvasHandler.instance.zionSpeedUpPopup.GetComponent<PopupCanvas>().descriptionText.text = $"You can speed up {nameText.text} time in Zion by paying $SGF2 {0.017 * timeRemaining} and locking them out of it.";
        }
        else
        {
            CanvasHandler.instance.zionSpeedUpPopup.GetComponent<PopupCanvas>().descriptionText.text = $"You can speed up {nameText.text} time in Zion by paying $SGF1 {0.017 * timeRemaining} and locking them out of it.";
        }

        CanvasHandler.instance.zionSpeedUpPopup.GetComponent<PopupCanvas>().cyborgId = cyborgId;
        CanvasHandler.instance.zionSpeedUpPopup.GetComponent<PopupCanvas>().type = type;
    }
}

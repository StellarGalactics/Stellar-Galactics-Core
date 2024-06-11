using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CountdownTimer : MonoBehaviour
{
    public float timerStart = 100f;

    private TMP_Text countDownText;
    public int timerFlag = 0;

    private void Start()
    {
        countDownText = GetComponent<TMP_Text>();
    }

    private void Update()
    {
        if (CanvasHandler.instance.demoCanvas.activeInHierarchy)
        {
            timerStart = Mathf.Max(0, timerStart - Time.deltaTime);
            TimeSpan timeSpan = TimeSpan.FromSeconds(timerStart);
            countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");
        }
        else if (CanvasHandler.instance.zionObject.activeInHierarchy)
        {
            if ((timerStart <= 0f && timerFlag == 0))
            {
                Debug.Log("Countdown Timer| timer finished " + timerStart);
                gameObject.GetComponentInParent<ZionSlot>().reclaimBtn.SetActive(true);
                gameObject.GetComponentInParent<ZionSlot>().speedUpBtn.gameObject.SetActive(false);
                timerStart = 0f;
                timerFlag = 1;

            }
            else
            {
                timerStart = Mathf.Max(0, timerStart - Time.deltaTime);
                TimeSpan timeSpan = TimeSpan.FromSeconds(timerStart);
                countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");
            }


        }
        else if (CanvasHandler.instance.activeLoots.activeInHierarchy)
        {
            if (timerStart <= 0)
            {
                gameObject.GetComponentInParent<MineStartedCard>().claimBtn.gameObject.SetActive(true);

                // Debug.Log("Countdown Timer| timer finished " + timerStart);
            }
            else
            {
                timerStart = Mathf.Max(0, timerStart - Time.deltaTime);
                TimeSpan timeSpan = TimeSpan.FromSeconds(timerStart);
                countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");

            }
        }


        else if (CanvasHandler.instance.mineCanvas.activeInHierarchy)
        {
            if (timerStart <= 0)
            {
                if (gameObject.GetComponentInParent<MineStartedCard>().mineOrLoot == "mine")
                {
                    gameObject.GetComponentInParent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                    gameObject.GetComponentInParent<MineStartedCard>().claimBtn.gameObject.SetActive(true);
                }
                // Debug.Log("Countdown Timer| timer finished " + timerStart);
            }
            else
            {
                timerStart = Mathf.Max(0, timerStart - Time.deltaTime);
                TimeSpan timeSpan = TimeSpan.FromSeconds(timerStart);
                countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");

            }
        }
        else if (CanvasHandler.instance.lootBoxScrollViewContent.activeInHierarchy)
        {
            if (timerStart <= 0)
            {

                gameObject.GetComponentInParent<lootboxCard>().openBtn.gameObject.SetActive(false);
                gameObject.GetComponentInParent<lootboxCard>().claimBtn.gameObject.SetActive(true);
                gameObject.GetComponentInParent<lootboxCard>().timerBG.gameObject.SetActive(false);
                gameObject.GetComponentInParent<lootboxCard>().speedUpBtn.gameObject.SetActive(false);

                // Debug.Log("Countdown Timer| timer finished " + timerStart);
            }
            else
            {
                timerStart = Mathf.Max(0, timerStart - Time.deltaTime);
                TimeSpan timeSpan = TimeSpan.FromSeconds(timerStart);
                countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");

            }
        }
        else if (CanvasHandler.instance.cyborgSelectedChild.activeInHierarchy)
        {
            if (timerStart <= 0)
            {

                gameObject.GetComponentInParent<CyborgInventoryCard>().claimBtn.gameObject.SetActive(true);
                gameObject.GetComponentInParent<CyborgInventoryCard>().rankUpBtn.gameObject.SetActive(false);
                gameObject.GetComponentInParent<CyborgInventoryCard>().speedUpBtn.gameObject.SetActive(false);
                //gameObject.GetComponentInParent<CyborgInventoryCard>().rankUpLockedOverlay.gameObject.SetActive(false);
                //gameObject.GetComponentInParent<lootboxCard>().speedUpBtn.gameObject.SetActive(false);
                TimeSpan timeSpan = TimeSpan.FromSeconds(0);
                countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");
                // Debug.Log("Countdown Timer| timer finished " + timerStart);
            }
            else
            {
                timerStart = Mathf.Max(0, timerStart - Time.deltaTime);
                TimeSpan timeSpan = TimeSpan.FromSeconds(timerStart);
                countDownText.text = timeSpan.Hours.ToString("00") + ":" + timeSpan.Minutes.ToString("00") + ":" + timeSpan.Seconds.ToString("00");

            }
        }

        //Debug.Log(timerStart);
    }
}

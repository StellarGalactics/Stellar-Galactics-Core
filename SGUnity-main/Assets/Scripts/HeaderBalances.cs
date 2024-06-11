using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class HeaderBalances : MonoBehaviour
{
    [SerializeField] TMP_Text token1Text, token2Text, rankUpText, solText, token1Title;
    // Start is called before the first frame update

    private float nextActionTime = 0.0f;
    public float period = 5f;

    void Update()
    {
        if (Time.time > nextActionTime)
        {
            nextActionTime += period;
            if (NetworkingManager.instance.gm.gameMode)
            {
                if (token1Text.text != (NetworkingManager.instance.userDetails.result.SGF2 / 1000000000).ToString() || rankUpText.text != NetworkingManager.instance.userDetails.result.rankupPoint.ToString() || solText.text != NetworkingManager.instance.SOLBalance.ToString("F3"))
                {
                    token1Text.text = (NetworkingManager.instance.userDetails.result.SGF2 / 1000000000).ToString();
                    //token2Text.text = NetworkingManager.instance.userDetails.result.SGF2.ToString();
                    rankUpText.text = NetworkingManager.instance.userDetails.result.rankupPoint.ToString();
                    solText.text = NetworkingManager.instance.SOLBalance.ToString("F3");
                }

            }
            else
            {
                if (token1Text.text != (NetworkingManager.instance.userDetails.result.SGF1 / 1000000000).ToString() || rankUpText.text != NetworkingManager.instance.userDetails.result.rankupPoint.ToString() || solText.text != NetworkingManager.instance.SOLBalance.ToString("F3"))
                {
                    token1Text.text = (NetworkingManager.instance.userDetails.result.SGF1 / 1000000000).ToString();
                    //token2Text.text = NetworkingManager.instance.userDetails.result.SGF2.ToString();
                    rankUpText.text = NetworkingManager.instance.userDetails.result.rankupPoint.ToString();
                    solText.text = NetworkingManager.instance.SOLBalance.ToString("F3");
                }
            }

            // execute block of code here
        }
    }
    void OnEnable()
    {
        if (NetworkingManager.instance.gm.gameMode)
        {
            token1Text.text = (NetworkingManager.instance.userDetails.result.SGF2 / 1000000000).ToString();
            token1Title.text = "$SGF2:";
        }
        else
        {
            token1Text.text = (NetworkingManager.instance.userDetails.result.SGF1 / 1000000000).ToString();
            token1Title.text = "$SGF1:";
        }
        //token2Text.text = NetworkingManager.instance.userDetails.data.SGF2.ToString();
        rankUpText.text = NetworkingManager.instance.userDetails.result.rankupPoint.ToString();
        solText.text = NetworkingManager.instance.SOLBalance.ToString("F3");
    }

    public void UpdateHeaderVals()
    {
        if (NetworkingManager.instance.gm.gameMode)
        {
            token1Text.text = (NetworkingManager.instance.userDetails.result.SGF2 / 1000000000).ToString();
            token1Title.text = "$SGF2:";
        }
        else
        {
            token1Text.text = (NetworkingManager.instance.userDetails.result.SGF1 / 1000000000).ToString();
            token1Title.text = "$SGF1:";
        }
        rankUpText.text = NetworkingManager.instance.userDetails.result.rankupPoint.ToString();
        solText.text = NetworkingManager.instance.SOLBalance.ToString("F3");
        //token2Text.text = NetworkingManager.instance.userDetails.result.SGF2.ToString();
    }

}

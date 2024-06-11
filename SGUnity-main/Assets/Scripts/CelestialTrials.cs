using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CelestialTrials : MonoBehaviour
{
    [SerializeField] TMP_Text rookieRumblePay, grandGambitPay, stellarShowdownPay;
    private void OnEnable()
    {
        if(NetworkingManager.instance.gm.gameMode)
        {
            rookieRumblePay.text = "$SGF2 : 100 \n$SGF2 : 200";
            grandGambitPay.text = "$SGF2 : 1000 \n$SGF2 : 2000";
            stellarShowdownPay.text = "$SGF2 : 10000 \n$SGF2 : 20000";
        }
        else
        {
            rookieRumblePay.text = "$SGF1 : 100 \n$SGF1 : 200";
            grandGambitPay.text = "$SGF1 : 1000 \n$SGF1 : 2000";
            stellarShowdownPay.text = "$SGF1 : 10000 \n$SGF1 : 20000";
        }
    }
}

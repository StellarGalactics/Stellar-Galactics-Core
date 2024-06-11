using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ProfileHandler : MonoBehaviour
{
    [SerializeField] TMP_Text userNameText, emailText, balance1Text, balance2Text, rankUpPointsText, solText, walletAddressText, hudBalance1Text, hudBalance2Text, balance1Title;
    NetworkingManager nm;
    // Start is called before the first frame update
    void OnEnable()
    {
        nm = NetworkingManager.instance;

        nm.CustomAnalytics("profile");
        userNameText.text = nm.userDetails.result.username;
        emailText.text = "Email: " + nm.userDetails.result.email;
        if (nm.gm.gameMode)
        {
            balance1Title.text = "$SGF2";
            balance1Text.text = (nm.userDetails.result.SGF2 / Math.Pow(10, 9)).ToString("F0");
        }
        else
        {
            balance1Title.text = "$SGF1";
            balance1Text.text = (nm.userDetails.result.SGF1 / Math.Pow(10, 9)).ToString("F0");
        }
        
        // balance2Text.text = nm.userDetails.result.SGF2.ToString();
        rankUpPointsText.text = nm.userDetails.result.rankupPoint.ToString();
        walletAddressText.text = "Wallet Address: " + nm.userDetails.result.wallet;
        solText.text = nm.SOLBalance.ToString();
        //hudBalance1Text.text = nm.userDetails.data.SGF1.ToString();
        //hudBalance2Text.text = nm.userDetails.data.SGF2.ToString();
    }

    // Update is called once per frame
    void Update()
    {

    }
}

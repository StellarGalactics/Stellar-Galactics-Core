using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CelestialTrialsResult : MonoBehaviour
{
    [SerializeField] public TMP_Text rewardAmountText, victoryDefeatText, rookiesRumblePayWin, rookiesRumbleButton, grandGambitPayWin, grandGambitButton, stellarShowdownPayWin, stellarShowdownButton;

    public void OnEnable()
    {
        if (NetworkingManager.instance.gm.gameMode)
        {
            rookiesRumblePayWin.text = "WIN\n$SGF2 200";
            rookiesRumbleButton.text = "$SGF2 100";
            grandGambitPayWin.text = "WIN\n$SGF2 2000";
            grandGambitButton.text = "$SGF2 1000";
            stellarShowdownPayWin.text = "WIN\n$SGF2 20000";
            stellarShowdownButton.text = "$SGF2 10000";

        }
        else
        {
            rookiesRumblePayWin.text = "WIN\n$SGF1 200";
            rookiesRumbleButton.text = "$SGF1 100";
            grandGambitPayWin.text = "WIN\n$SGF1 2000";
            grandGambitButton.text = "$SGF1 1000";
            stellarShowdownPayWin.text = "WIN\n$SGF1 20000";
            stellarShowdownButton.text = "$SGF1 10000";
        }
    }

    public void OnClickExit()
    {
        NetworkingManager.instance.isWager = false;
    }
}

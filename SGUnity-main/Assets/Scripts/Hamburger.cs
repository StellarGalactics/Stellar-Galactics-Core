using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Hamburger : MonoBehaviour
{
    [SerializeField] TMP_Text homeText, profileText, mineLootText, zionText;
    [SerializeField] GameObject mainMenu, profile, mineLoot, zion;
    public void Update()
    {
        if (mainMenu.activeInHierarchy)
        {
            //Debug.Log("Home");
            homeText.color = new Color(37f, 254f, 221f, 1f);
        }
        else
        {
            homeText.color = new Color(255f, 255f, 255f, 1f);
        }
        if (profile.activeInHierarchy)
        {
            profileText.color = new Color(37f, 254f, 221f, 1f);
        }
        else
        {
            profileText.color = new Color(255f, 255f, 255f, 1f);
        }
        if (mineLoot.activeInHierarchy)
        {
            mineLootText.color = new Color(37f, 254f, 221f, 1f);
        }
        else
        {
            mineLootText.color = new Color(255f, 255f, 255f, 1f);
        }
        if (zion.activeInHierarchy)
        {
            zionText.color = new Color(37f, 254f, 221f, 1f);
        }
        else
        {
            zionText.color = new Color(255f, 255f, 255f, 1f);
        }
    }

 
}

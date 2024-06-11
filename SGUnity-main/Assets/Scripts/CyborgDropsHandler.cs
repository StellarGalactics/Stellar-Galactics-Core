using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CyborgDropsHandler : MonoBehaviour
{
    [SerializeField] TMP_Text cyborgNameTitle, cyborgNameVal, dropTypeTitle, dropTypeVal, priceTitle, priceVal;
    [SerializeField] GameObject cyborgDropsPopupCanvas;
    // Start is called before the first frame update
    void OnEnable()
    {
        if (NetworkingManager.instance.gm.gameMode)
        {
            priceVal.text = "$SGF2 200, $SOL 0.012";
        }
        else
        {
            priceVal.text = "$SGF1 200, $SOL 0.012";
        }
    }

    public void OnClickMint()
    {
        cyborgDropsPopupCanvas.SetActive(true);
        if (NetworkingManager.instance.gm.gameMode)
        {
            cyborgDropsPopupCanvas.GetComponent<PopupCanvas>().descriptionText.text = "Mint this Cyborg drop for $SGF2 200 and add this to your inventory.";
        }
        else
        {
            cyborgDropsPopupCanvas.GetComponent<PopupCanvas>().descriptionText.text = "Mint this Cyborg drop for $SGF1 200 and add this to your inventory.";
        }

    }
}

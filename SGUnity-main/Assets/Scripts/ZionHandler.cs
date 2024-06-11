using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ZionHandler : MonoBehaviour
{

    [SerializeField] public GameObject barConfrimPopUp, brothelConfirmPopUp, hospitalConfrimPopUp, casinoConfirmPopUp, churchConfirmPopUp, zionPopupCanvas, zionSelectQuirkPopUp, zionSelectQuirkScrollView, quirkSelectPrefab;
    public string id = "", type = "";
    public int typeIndex, attributeIndex;


    public void OnClickBrothelBarCasinoChurch(string _type)
    {
        if (NetworkingManager.instance.gm.gameMode)
        {
            if (NetworkingManager.instance.userDetails.result.SGF2 / 1000000000 < NetworkingManager.instance.tavernAmount)
            {
                //Not enough sgf1 popup

                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF2 to put your cyborg in Zion";

            }
            else
            {
                id = FindSelectedCyborgID(GameManager.instance.zionSelectedCyborg.id);
                Debug.Log(id);
                if (id != "")
                {
                    if (GameManager.instance.zionSelectedCyborg.stressPoint == 0)
                    {

                        CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                        CanvasHandler.instance.noStressPopUp.SetActive(true);
                    }
                    else
                    {
                        type = _type;
                        switch (_type)
                        {

                            case "Brothel":
                                zionPopupCanvas.SetActive(true);
                                brothelConfirmPopUp.SetActive(true);
                                brothelConfirmPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Brothel. You can speed up by paying $SGF.";
                                break;
                            case "Bar":
                                zionPopupCanvas.SetActive(true);
                                barConfrimPopUp.SetActive(true);
                                barConfrimPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Bar. You can speed up by paying $SGF.";
                                break;
                            case "Casino":
                                zionPopupCanvas.SetActive(true);
                                casinoConfirmPopUp.SetActive(true);
                                casinoConfirmPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Casino. You can speed up by paying $SGF.";
                                break;
                            case "Church":
                                zionPopupCanvas.SetActive(true);
                                churchConfirmPopUp.SetActive(true);
                                churchConfirmPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Church. You can speed up by paying $SGF.";
                                break;
                        }

                    }
                }
            }
        }
        else if (!NetworkingManager.instance.gm.gameMode)
        {
            if (NetworkingManager.instance.userDetails.result.SGF1 / 1000000000 < NetworkingManager.instance.tavernAmount)
            {
                //Not enough sgf1 popup

                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1 to put your cyborg in Zion";
            }
            else
            {
                id = FindSelectedCyborgID(GameManager.instance.zionSelectedCyborg.id);
                Debug.Log(id);
                if (id != "")
                {
                    if (GameManager.instance.zionSelectedCyborg.stressPoint == 0)
                    {

                        CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                        CanvasHandler.instance.noStressPopUp.SetActive(true);
                    }
                    else
                    {
                        type = _type;
                        switch (_type)
                        {

                            case "Brothel":
                                zionPopupCanvas.SetActive(true);
                                brothelConfirmPopUp.SetActive(true);
                                brothelConfirmPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Brothel. You can speed up by paying $SGF.";
                                break;
                            case "Bar":
                                zionPopupCanvas.SetActive(true);
                                barConfrimPopUp.SetActive(true);
                                barConfrimPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Bar. You can speed up by paying $SGF.";
                                break;
                            case "Casino":
                                zionPopupCanvas.SetActive(true);
                                casinoConfirmPopUp.SetActive(true);
                                casinoConfirmPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Casino. You can speed up by paying $SGF.";
                                break;
                            case "Church":
                                zionPopupCanvas.SetActive(true);
                                churchConfirmPopUp.SetActive(true);
                                churchConfirmPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Church. You can speed up by paying $SGF.";
                                break;
                        }

                    }
                }
            }
        }

        


    }

    public void OnClickConfirmBrothelBarCasinoChurch()
    {

        Debug.Log("OnClickSendZion");
        StartCoroutine(NetworkingManager.instance.SendCyborgZion(id, type, 0, 0));
        OnClickBackBarBrothelCasinoChurch();
        id = "";
        //OnClickBackBarBrothelCasinoChurch();
    }
    public void OnClickHospital()
    {
        if (NetworkingManager.instance.gm.gameMode)
        {
            if (NetworkingManager.instance.userDetails.result.SGF1 / 2000000000 < NetworkingManager.instance.hospitalAmount)
            {
                //Not enough sgf1 popup

                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1 to Remove Quirks";
            }
            else
            {
                id = FindSelectedCyborgID(GameManager.instance.zionSelectedCyborg.id);
                Debug.Log(id);
                if (id != "")
                {



                    for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
                    {
                        if (id == NetworkingManager.instance.cyborgList.result[i].id)
                        {
                            foreach (Transform t in zionSelectQuirkScrollView.transform)
                            {
                                GameObject.Destroy(t.gameObject);
                            }
                            int quirkCount = 0;
                            foreach (QuirkN quirk in NetworkingManager.instance.cyborgList.result[i].cyborg.quirks)
                            {
                                if (quirk.attributes.Count > 0)
                                {
                                    quirkCount++;
                                    for (int k = 0; k < quirk.attributes.Count; k++)
                                    {
                                        GameObject quirkPref = Instantiate(quirkSelectPrefab, zionSelectQuirkScrollView.transform);
                                        SelectQuirkHospitalPrefab sqhp = quirkPref.GetComponent<SelectQuirkHospitalPrefab>();
                                        string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                                        sqhp.quirkEffect.text = quirkEffect;
                                        sqhp.type = quirk.type;
                                        sqhp.attribute = k;

                                        if (quirkCount == 1)
                                        {
                                            sqhp.gameObject.GetComponent<Toggle>().isOn = true;
                                            sqhp.OnClickQuirk();
                                        }
                                    }
                                }
                            }
                            if (quirkCount == 0)
                            {

                                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                                CanvasHandler.instance.failCasePopup.SetActive(true);
                                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "This cyborg has no quirks to remove";
                            }
                            else
                            {
                                zionPopupCanvas.SetActive(true);
                                //Debug.Log("Zion Popup Canvas SetActive True");
                                zionSelectQuirkPopUp.SetActive(true);
                            }
                        }
                    }
                }
            }
        }
        else if (!NetworkingManager.instance.gm.gameMode)
        {
            if (NetworkingManager.instance.userDetails.result.SGF1 / 1000000000 < NetworkingManager.instance.hospitalAmount)
            {
                //Not enough sgf1 popup

                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1 to Remove Quirks";

            }
            else
            {
                id = FindSelectedCyborgID(GameManager.instance.zionSelectedCyborg.id);
                Debug.Log(id);
                if (id != "")
                {



                    for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
                    {
                        if (id == NetworkingManager.instance.cyborgList.result[i].id)
                        {
                            foreach (Transform t in zionSelectQuirkScrollView.transform)
                            {
                                GameObject.Destroy(t.gameObject);
                            }
                            int quirkCount = 0;
                            foreach (QuirkN quirk in NetworkingManager.instance.cyborgList.result[i].cyborg.quirks)
                            {
                                if (quirk.attributes.Count > 0)
                                {
                                    quirkCount++;
                                    for (int k = 0; k < quirk.attributes.Count; k++)
                                    {
                                        GameObject quirkPref = Instantiate(quirkSelectPrefab, zionSelectQuirkScrollView.transform);
                                        SelectQuirkHospitalPrefab sqhp = quirkPref.GetComponent<SelectQuirkHospitalPrefab>();
                                        string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                                        sqhp.quirkEffect.text = quirkEffect;
                                        sqhp.type = quirk.type;
                                        sqhp.attribute = k;

                                        if (quirkCount == 1)
                                        {
                                            sqhp.gameObject.GetComponent<Toggle>().isOn = true;
                                            sqhp.OnClickQuirk();
                                        }
                                    }
                                }
                            }
                            if (quirkCount == 0)
                            {

                                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                                CanvasHandler.instance.failCasePopup.SetActive(true);
                                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "This cyborg has no quirks to remove";
                            }
                            else
                            {
                                zionPopupCanvas.SetActive(true);
                                //Debug.Log("Zion Popup Canvas SetActive True");
                                zionSelectQuirkPopUp.SetActive(true);
                            }
                        }
                    }
                }
            }
        }
      

    }
    public void OnClickRemoveQuirk()
    {
        //zionPopupCanvas.SetActive(true);
        zionSelectQuirkPopUp.SetActive(false);
        hospitalConfrimPopUp.SetActive(true);
        hospitalConfrimPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"Your {GameManager.instance.zionSelectedCyborg.name} will lock in for 6 Hours in Hospital and Quirk will be removed. There is 2% chance of death. You can speed up by paying $SGF.";
    }
    public void OnClickHospitalConfirm()
    {


        Debug.Log(typeIndex + " " + attributeIndex);
        StartCoroutine(NetworkingManager.instance.SendCyborgZion(id, "Hospital", typeIndex, attributeIndex));
        hospitalConfrimPopUp.SetActive(false);
        zionPopupCanvas.SetActive(false);



    }



    public void OnClickBackBarBrothelCasinoChurch()
    {
        barConfrimPopUp.SetActive(false);
        casinoConfirmPopUp.SetActive(false);
        churchConfirmPopUp.SetActive(false);
        brothelConfirmPopUp.SetActive(false);
        zionPopupCanvas.SetActive(false);
        CanvasHandler.instance.stressRelievedPopUpBar.SetActive(false);
        CanvasHandler.instance.stressRelievedPopUpBrothel.SetActive(false);
        CanvasHandler.instance.stressRelievedPopUpCasino.SetActive(false);
        CanvasHandler.instance.stressRelievedPopUpChurch.SetActive(false);
    }

    private string FindSelectedCyborgID(int cyborgId)
    {
        for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
        {
            if (cyborgId == NetworkingManager.instance.cyborgList.result[i].cyborg.id)
            {
                return NetworkingManager.instance.cyborgList.result[i].id;
            }
        }

        return "";
    }

}

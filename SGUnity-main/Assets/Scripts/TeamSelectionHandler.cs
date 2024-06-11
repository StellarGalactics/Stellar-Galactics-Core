using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TeamSelectionHandler : MonoBehaviour
{
    [SerializeField] public List<GameObject> CyborgImageGameObject;
    [SerializeField] public Dictionary<string, int> cyborgPos = new Dictionary<string, int>();
    [SerializeField] public Dictionary<string, string> cyborgPosWager = new Dictionary<string, string>();
    [SerializeField] public List<Button> mineBtnList, lootBtnList;
    [SerializeField] public Button wagerDeployButton, mineDeployButton, reRollButton;
    public GameObject noCyborgsMine, noCyborgsLoot, cyborgsOccupiedMine, cyborgsOccupiedLoot;
    public List<int> cybList = new List<int>();
    public List<string> sequenceList = new List<string>();
    public Mine mine = new Mine();
    public List<int> backRow, frontRow;
    public List<string> backRowWager, frontRowWager;
    public Sprite spr;
    public GameObject filterOptionsMine, filterOptionsLoot, mineHeaderBackButton, profileHeaderButton, hamburgerHeaderButton, dividerImage1, dividerImage2;
    public List<Image> selectedCyborgOriginPlanetImage;
    public List<Image> selectedCyborgBodyImage;
    public List<Image> selectedCyborgJawImage;
    public List<Image> selectedCyborgEyeImage;
    public List<Image> selectedCyborgNeckImage;
    public List<Image> selectedCyborgHelmetImage;
    public List<Image> selectedCyborgVestImage;
    public int rerollCount = 0;
    public long rerollAmtN = 0;

    public bool mb1, mb2, mb3, mf1, mf2, mf3, lb1, lb2, lb3, lf1, lf2, lf3;


    private void OnEnable()
    {
        if (NetworkingManager.instance.isWager)
        {
            //Debug.Log("Is wager enable");

            wagerDeployButton.gameObject.SetActive(true);
            mineDeployButton.gameObject.SetActive(false);
            mineHeaderBackButton.SetActive(false);
            hamburgerHeaderButton.SetActive(false);
            profileHeaderButton.SetActive(false);
            reRollButton.gameObject.SetActive(true);
            dividerImage1.SetActive(false);
            dividerImage2.SetActive(false);
            int rerollAmt = (NetworkingManager.instance.gwcb.amount * 30) / 100;
            rerollAmtN = NetworkingManager.instance.gwcb.amount;
            if (NetworkingManager.instance.gm.gameMode)
            {
                reRollButton.GetComponentInChildren<TMP_Text>().text = $"Re - Roll: $SGF2: {rerollAmt}";
            }
            else
            {
                reRollButton.GetComponentInChildren<TMP_Text>().text = $"Re - Roll: $SGF1: {rerollAmt}";
            }

        }
        else
        {
            //Debug.Log("!Is wager enable");
            wagerDeployButton.gameObject.SetActive(false);
            mineDeployButton.gameObject.SetActive(true);
            reRollButton.gameObject.SetActive(false);
            mineHeaderBackButton.SetActive(true);
            hamburgerHeaderButton.SetActive(true);
            profileHeaderButton.SetActive(true);
            dividerImage1.SetActive(true);
            dividerImage2.SetActive(true);
        }
    }

    public void SetReRollAmt()
    {
        long rerollAmt = 0;
        //rerollAmtN = rerollAmtN * 2;
        Debug.Log(rerollCount);
        if (rerollCount == 2)
        {
            rerollAmt = (rerollAmtN * 50) / 100;
        }
        else if(rerollCount > 2)
        {
            reRollButton.gameObject.SetActive(false);
            rerollCount = 0;
        }
        if (NetworkingManager.instance.gm.gameMode)
        {
            reRollButton.GetComponentInChildren<TMP_Text>().text = $"Re - Roll: $SGF2: {rerollAmt}";
        }
        else
        {
            reRollButton.GetComponentInChildren<TMP_Text>().text = $"Re - Roll: $SGF1: {rerollAmt}";
        }
    }
    public void OnClickBackBtn()
    {
        for (int i = 0; i < 24; i++)
        {
            CyborgImageGameObject[i].SetActive(false);
        }
        foreach (Button btn in mineBtnList)
        {
            btn.GetComponent<Image>().sprite = spr;
            btn.interactable = true;
        }
        foreach (Button btn in lootBtnList)
        {
            btn.GetComponent<Image>().sprite = spr;
            btn.interactable = true;
        }
        mb1 = false;
        mb2 = false;
        mb3 = false;
        mf1 = false;
        mf2 = false;
        mf3 = false;
        lb1 = false;
        lb2 = false;
        lb3 = false;
        lf1 = false;
        lf2 = false;
        lf3 = false;
        cybList.Clear();
        sequenceList.Clear();
        cyborgPos.Clear();
        cyborgPosWager.Clear();
        GameManager.instance.selectedCyborg = null;
        CanvasHandler.instance.CyborgStats.gameObject.SetActive(false);
        CanvasHandler.instance.CyborgStats2.gameObject.SetActive(false);
        CanvasHandler.instance.CyborgRightStats.gameObject.SetActive(false);
        CanvasHandler.instance.CyborgRightStats2.gameObject.SetActive(false);
        if (NetworkingManager.instance.isWager)
        {
            NetworkingManager.instance.isWager = false;
        }
    }

    public void OnClickButton(string str)
    {
        Debug.Log("Button Pressed");
        //Handling showing cyborg stats if already selected
        if (str == "mf1" && mf1)
        {
            Debug.Log("mf1 " + mf1);
            if (cyborgPos.ContainsKey("mf1") || cyborgPosWager.ContainsKey("mf1"))
            {
                string valueS = "";
                int value = 0;
                if (NetworkingManager.instance.isWager)
                {
                    valueS = cyborgPosWager["mf1"];
                }
                else
                {
                    value = cyborgPos["mf1"];
                }

                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.sequence == valueS)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                }

            }
        }
        else if (str == "mf2" && mf2)
        {
            Debug.Log("mf2 " + mf2);

            if (cyborgPos.ContainsKey("mf2") || cyborgPosWager.ContainsKey("mf2"))
            {
                string valueS = "";
                int value = 0;
                if (NetworkingManager.instance.isWager)
                {
                    valueS = cyborgPosWager["mf2"];
                }
                else
                {
                    value = cyborgPos["mf2"];
                }

                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.sequence == valueS)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                }

            }
        }
        else if (str == "mf3" && mf3)
        {
            Debug.Log("mf3 " + mf3);
            if (cyborgPos.ContainsKey("mf3") || cyborgPosWager.ContainsKey("mf3"))
            {
                string valueS = "";
                int value = 0;
                if (NetworkingManager.instance.isWager)
                {
                    valueS = cyborgPosWager["mf3"];
                }
                else
                {
                    value = cyborgPos["mf3"];
                }
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.sequence == valueS)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                }

            }
        }
        else if (str == "mb1" && mb1)
        {
            Debug.Log("mb1 " + mb1);
            if (cyborgPos.ContainsKey("mb1") || cyborgPosWager.ContainsKey("mb1"))
            {
                string valueS = "";
                int value = 0;
                if (NetworkingManager.instance.isWager)
                {
                    valueS = cyborgPosWager["mb1"];
                }
                else
                {
                    value = cyborgPos["mb1"];
                }
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.sequence == valueS)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                }

            }
        }
        else if (str == "mb2" && mb2)
        {
            Debug.Log("mb2 " + mb2);
            if (cyborgPos.ContainsKey("mb2") || cyborgPosWager.ContainsKey("mb2"))
            {
                string valueS = "";
                int value = 0;
                if (NetworkingManager.instance.isWager)
                {
                    valueS = cyborgPosWager["mb2"];
                }
                else
                {
                    value = cyborgPos["mb2"];
                }
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.sequence == valueS)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                }

            }
        }
        else if (str == "mb3" && mb3)
        {
            Debug.Log("mb3 " + mb3);
            if (cyborgPos.ContainsKey("mb3") || cyborgPosWager.ContainsKey("mb3"))
            {
                string valueS = "";
                int value = 0;
                if (NetworkingManager.instance.isWager)
                {
                    valueS = cyborgPosWager["mb3"];
                }
                else
                {
                    value = cyborgPos["mb3"];
                }
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.sequence == valueS)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg);
                    }
                }

            }
        }
        else if (str == "lf1" && lf1)
        {
            if (cyborgPos.ContainsKey("lf1"))
            {
                int value = cyborgPos["lf1"];
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg, true);
                    }
                }

            }
        }
        else if (str == "lf2" && lf2)
        {
            if (cyborgPos.ContainsKey("lf2"))
            {
                int value = cyborgPos["lf2"];
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg, true);
                    }
                }

            }
        }
        else if (str == "lf3" && lf3)
        {
            if (cyborgPos.ContainsKey("lf3"))
            {
                int value = cyborgPos["lf3"];
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg, true);
                    }
                }

            }
        }
        else if (str == "lb1" && lb1)
        {
            if (cyborgPos.ContainsKey("lb1"))
            {
                int value = cyborgPos["lb1"];
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg, true);
                    }
                }

            }
        }
        else if (str == "lb2" && lb2)
        {
            if (cyborgPos.ContainsKey("lb2"))
            {
                int value = cyborgPos["lb2"];
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg, true);
                    }
                }

            }
        }
        else if (str == "lb3" && lb3)
        {
            if (cyborgPos.ContainsKey("lb3"))
            {
                int value = cyborgPos["lb3"];
                foreach (Result res in NetworkingManager.instance.cyborgList.result)
                {
                    if (res.cyborg.id == value)
                    {
                        Cyborg cyborg = res.cyborg;
                        SetCards(cyborg, true);
                    }
                }

            }
        }
        //Handling Clicking the Selection Button for Loot and Mine Cyborgs when not selected
        else
        {
            if (NetworkingManager.instance.isWager)
            {
                if (NetworkingManager.instance.isWager && GameManager.instance.selectedCyborg != null && !sequenceList.Contains(GameManager.instance.selectedCyborg.sequence) && sequenceList.Count < 3)
                {
                    Debug.Log("GameManager.instance.selectedCyborg " + GameManager.instance.selectedCyborg.name + "cybList.Contains(GameManager.instance.selectedCyborg.id) " + cybList.Contains(GameManager.instance.selectedCyborg.id) + cybList.Count);
                    Debug.Log("else 2");
                    foreach (GameObject obj in GameManager.instance.playerCyborgList)
                    {
                        InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                        if (GameManager.instance.selectedCyborg == invCyb.cyborg)
                        {
                            invCyb.greyImage.gameObject.SetActive(true);
                            invCyb.goldBorder.gameObject.SetActive(false);
                            invCyb.button.enabled = false;
                        }
                    }
                    GameManager manager = GameManager.instance;
                    sequenceList.Add(manager.selectedCyborg.sequence);
                    cyborgPosWager.Add(str, manager.selectedCyborg.sequence);





                    if (str == "mf1")
                    {
                        mf1 = true;
                        //front1Btn.GetComponent<Image>().sprite = GameManager.instance.selectedCyborgImage.sprite;
                        //mineBtnList[3].interactable = false;
                        CyborgImageGameObject[0].SetActive(true);
                        CyborgImageGameObject[1].SetActive(true);
                        CyborgImageGameObject[1].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[1].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[0].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[0].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[0].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[0].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[0].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[0].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[0].sprite = manager.selectedCyborgVestImage.sprite;

                    }
                    if (str == "mf2")
                    {
                        mf2 = true;
                        //front2Btn.GetComponent<Image>().sprite = GameManager.instance.selectedCyborgImage.sprite;
                        //mineBtnList[4].interactable = false;
                        CyborgImageGameObject[2].SetActive(true);
                        CyborgImageGameObject[3].SetActive(true);
                        CyborgImageGameObject[3].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[3].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[1].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[1].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[1].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[1].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[1].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[1].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[1].sprite = manager.selectedCyborgVestImage.sprite;
                    }
                    if (str == "mf3")
                    {
                        mf3 = true;
                        //front3Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //mineBtnList[5].interactable = false;
                        CyborgImageGameObject[4].SetActive(true);
                        CyborgImageGameObject[5].SetActive(true);
                        CyborgImageGameObject[5].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[5].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[2].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[2].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[2].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[2].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[2].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[2].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[2].sprite = manager.selectedCyborgVestImage.sprite;
                    }
                    if (str == "mb1")
                    {
                        mb1 = true;
                        //back1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //mineBtnList[0].interactable = false;
                        CyborgImageGameObject[6].SetActive(true);
                        CyborgImageGameObject[7].SetActive(true);
                        CyborgImageGameObject[7].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[7].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[3].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[3].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[3].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[3].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[3].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[3].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[3].sprite = manager.selectedCyborgVestImage.sprite;
                    }
                    if (str == "mb2")
                    {
                        mb2 = true;
                        //back2Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //mineBtnList[1].interactable = false;
                        CyborgImageGameObject[8].SetActive(true);
                        CyborgImageGameObject[9].SetActive(true);
                        CyborgImageGameObject[9].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[9].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[4].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[4].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[4].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[4].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[4].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[4].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[4].sprite = manager.selectedCyborgVestImage.sprite;
                    }
                    if (str == "mb3")
                    {
                        mb3 = true;
                        //back3Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //mineBtnList[2].interactable = false;
                        CyborgImageGameObject[10].SetActive(true);
                        CyborgImageGameObject[11].SetActive(true);
                        CyborgImageGameObject[11].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[11].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[5].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[5].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[5].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[5].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[5].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[5].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[5].sprite = manager.selectedCyborgVestImage.sprite;
                    }
                    if (str == "lf1")
                    {
                        lf1 = true;
                        //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //lootBtnList[3].interactable = false;
                        CyborgImageGameObject[12].SetActive(true);
                        CyborgImageGameObject[13].SetActive(true);
                        CyborgImageGameObject[13].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[13].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[6].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[6].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[6].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[6].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[6].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[6].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[6].sprite = manager.selectedCyborgVestImage.sprite;

                        manager.selectedCyborg = null;
                    }
                    if (str == "lf2")
                    {
                        lf2 = true;
                        //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //lootBtnList[4].interactable = false;
                        CyborgImageGameObject[14].SetActive(true);
                        CyborgImageGameObject[15].SetActive(true);
                        CyborgImageGameObject[15].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[15].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[7].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[7].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[7].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[7].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[7].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[7].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[7].sprite = manager.selectedCyborgVestImage.sprite;

                        manager.selectedCyborg = null;
                    }
                    if (str == "lf3")
                    {
                        lf3 = true;
                        //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //lootBtnList[5].interactable = false;
                        CyborgImageGameObject[16].SetActive(true);
                        CyborgImageGameObject[17].SetActive(true);
                        CyborgImageGameObject[17].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[17].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[8].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[8].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[8].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[8].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[8].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[8].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[8].sprite = manager.selectedCyborgVestImage.sprite;

                        manager.selectedCyborg = null;
                    }
                    if (str == "lb1")
                    {
                        lb1 = true;
                        //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //lootBtnList[0].interactable = false;
                        CyborgImageGameObject[18].SetActive(true);
                        CyborgImageGameObject[19].SetActive(true);
                        CyborgImageGameObject[19].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        // CyborgImageGameObject[19].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[9].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[9].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[9].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[9].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[9].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[9].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[9].sprite = manager.selectedCyborgVestImage.sprite;

                        manager.selectedCyborg = null;
                    }
                    if (str == "lb2")
                    {
                        lb2 = true;
                        //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //lootBtnList[1].interactable = false;
                        CyborgImageGameObject[20].SetActive(true);
                        CyborgImageGameObject[21].SetActive(true);
                        CyborgImageGameObject[21].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[21].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[10].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[10].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[10].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[10].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[10].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[10].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[10].sprite = manager.selectedCyborgVestImage.sprite;

                        manager.selectedCyborg = null;
                    }
                    if (str == "lb3")
                    {
                        lb3 = true;
                        //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                        //lootBtnList[2].interactable = false;
                        CyborgImageGameObject[22].SetActive(true);
                        CyborgImageGameObject[23].SetActive(true);
                        CyborgImageGameObject[23].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                        //CyborgImageGameObject[23].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                        selectedCyborgOriginPlanetImage[11].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                        selectedCyborgBodyImage[11].sprite = manager.selectedCyborgBodyImage.sprite;
                        //selectedCyborgJawImage[11].sprite = manager.selectedCyborgJawImage.sprite;
                        selectedCyborgEyeImage[11].sprite = manager.selectedCyborgEyeImage.sprite;
                        selectedCyborgNeckImage[11].sprite = manager.selectedCyborgNeckImage.sprite;
                        selectedCyborgHelmetImage[11].sprite = manager.selectedCyborgHelmetImage.sprite;
                        selectedCyborgVestImage[11].sprite = manager.selectedCyborgVestImage.sprite;

                        manager.selectedCyborg = null;
                    }
                    //if (cybList.Count >= 3)
                    //{
                    //    foreach (Button btn in mineBtnList)
                    //    {

                    //        btn.interactable = false;
                    //    }
                    //    foreach (Button btn in lootBtnList)
                    //    {
                    //        btn.interactable = false;
                    //    }
                    //}

                }
            }
            else if (GameManager.instance.selectedCyborg != null && !cybList.Contains(GameManager.instance.selectedCyborg.id) && cybList.Count < 3)
            {
                Debug.Log("GameManager.instance.selectedCyborg " + GameManager.instance.selectedCyborg.name + "cybList.Contains(GameManager.instance.selectedCyborg.id) " + cybList.Contains(GameManager.instance.selectedCyborg.id) + cybList.Count);
                Debug.Log("else 2");
                foreach (GameObject obj in GameManager.instance.playerCyborgList)
                {
                    InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                    if (GameManager.instance.selectedCyborg == invCyb.cyborg)
                    {
                        invCyb.greyImage.gameObject.SetActive(true);
                        invCyb.goldBorder.gameObject.SetActive(false);
                        invCyb.button.enabled = false;
                    }
                }
                GameManager manager = GameManager.instance;
                cybList.Add(manager.selectedCyborg.id);
                cyborgPos.Add(str, manager.selectedCyborg.id);




                if (str == "mf1")
                {
                    mf1 = true;
                    //front1Btn.GetComponent<Image>().sprite = GameManager.instance.selectedCyborgImage.sprite;
                    //mineBtnList[3].interactable = false;
                    CyborgImageGameObject[0].SetActive(true);
                    CyborgImageGameObject[1].SetActive(true);
                    CyborgImageGameObject[1].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[1].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[0].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[0].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[0].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[0].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[0].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[0].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[0].sprite = manager.selectedCyborgVestImage.sprite;

                }
                if (str == "mf2")
                {
                    mf2 = true;
                    //front2Btn.GetComponent<Image>().sprite = GameManager.instance.selectedCyborgImage.sprite;
                    //mineBtnList[4].interactable = false;
                    CyborgImageGameObject[2].SetActive(true);
                    CyborgImageGameObject[3].SetActive(true);
                    CyborgImageGameObject[3].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[3].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[1].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[1].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[1].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[1].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[1].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[1].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[1].sprite = manager.selectedCyborgVestImage.sprite;
                }
                if (str == "mf3")
                {
                    mf3 = true;
                    //front3Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //mineBtnList[5].interactable = false;
                    CyborgImageGameObject[4].SetActive(true);
                    CyborgImageGameObject[5].SetActive(true);
                    CyborgImageGameObject[5].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[5].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[2].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[2].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[2].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[2].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[2].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[2].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[2].sprite = manager.selectedCyborgVestImage.sprite;
                }
                if (str == "mb1")
                {
                    mb1 = true;
                    //back1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //mineBtnList[0].interactable = false;
                    CyborgImageGameObject[6].SetActive(true);
                    CyborgImageGameObject[7].SetActive(true);
                    CyborgImageGameObject[7].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[7].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[3].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[3].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[3].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[3].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[3].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[3].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[3].sprite = manager.selectedCyborgVestImage.sprite;
                }
                if (str == "mb2")
                {
                    mb2 = true;
                    //back2Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //mineBtnList[1].interactable = false;
                    CyborgImageGameObject[8].SetActive(true);
                    CyborgImageGameObject[9].SetActive(true);
                    CyborgImageGameObject[9].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[9].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[4].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[4].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[4].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[4].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[4].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[4].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[4].sprite = manager.selectedCyborgVestImage.sprite;
                }
                if (str == "mb3")
                {
                    mb3 = true;
                    //back3Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //mineBtnList[2].interactable = false;
                    CyborgImageGameObject[10].SetActive(true);
                    CyborgImageGameObject[11].SetActive(true);
                    CyborgImageGameObject[11].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[11].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[5].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[5].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[5].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[5].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[5].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[5].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[5].sprite = manager.selectedCyborgVestImage.sprite;
                }
                if (str == "lf1")
                {
                    lf1 = true;
                    //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //lootBtnList[3].interactable = false;
                    CyborgImageGameObject[12].SetActive(true);
                    CyborgImageGameObject[13].SetActive(true);
                    CyborgImageGameObject[13].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[13].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[6].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[6].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[6].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[6].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[6].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[6].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[6].sprite = manager.selectedCyborgVestImage.sprite;

                    manager.selectedCyborg = null;
                }
                if (str == "lf2")
                {
                    lf2 = true;
                    //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //lootBtnList[4].interactable = false;
                    CyborgImageGameObject[14].SetActive(true);
                    CyborgImageGameObject[15].SetActive(true);
                    CyborgImageGameObject[15].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[15].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[7].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[7].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[7].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[7].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[7].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[7].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[7].sprite = manager.selectedCyborgVestImage.sprite;

                    manager.selectedCyborg = null;
                }
                if (str == "lf3")
                {
                    lf3 = true;
                    //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //lootBtnList[5].interactable = false;
                    CyborgImageGameObject[16].SetActive(true);
                    CyborgImageGameObject[17].SetActive(true);
                    CyborgImageGameObject[17].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[17].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[8].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[8].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[8].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[8].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[8].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[8].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[8].sprite = manager.selectedCyborgVestImage.sprite;

                    manager.selectedCyborg = null;
                }
                if (str == "lb1")
                {
                    lb1 = true;
                    //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //lootBtnList[0].interactable = false;
                    CyborgImageGameObject[18].SetActive(true);
                    CyborgImageGameObject[19].SetActive(true);
                    CyborgImageGameObject[19].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    // CyborgImageGameObject[19].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[9].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[9].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[9].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[9].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[9].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[9].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[9].sprite = manager.selectedCyborgVestImage.sprite;

                    manager.selectedCyborg = null;
                }
                if (str == "lb2")
                {
                    lb2 = true;
                    //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //lootBtnList[1].interactable = false;
                    CyborgImageGameObject[20].SetActive(true);
                    CyborgImageGameObject[21].SetActive(true);
                    CyborgImageGameObject[21].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[21].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[10].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[10].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[10].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[10].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[10].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[10].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[10].sprite = manager.selectedCyborgVestImage.sprite;

                    manager.selectedCyborg = null;
                }
                if (str == "lb3")
                {
                    lb3 = true;
                    //front1Btn.GetComponent<Image>().sprite = manager.selectedCyborgImage.sprite;
                    //lootBtnList[2].interactable = false;
                    CyborgImageGameObject[22].SetActive(true);
                    CyborgImageGameObject[23].SetActive(true);
                    CyborgImageGameObject[23].GetComponentInChildren<TMP_Text>().text = manager.selectedCyborg.name;
                    //CyborgImageGameObject[23].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
                    selectedCyborgOriginPlanetImage[11].sprite = manager.selectedCyborgOriginPlanetImage.sprite;
                    selectedCyborgBodyImage[11].sprite = manager.selectedCyborgBodyImage.sprite;
                    //selectedCyborgJawImage[11].sprite = manager.selectedCyborgJawImage.sprite;
                    selectedCyborgEyeImage[11].sprite = manager.selectedCyborgEyeImage.sprite;
                    selectedCyborgNeckImage[11].sprite = manager.selectedCyborgNeckImage.sprite;
                    selectedCyborgHelmetImage[11].sprite = manager.selectedCyborgHelmetImage.sprite;
                    selectedCyborgVestImage[11].sprite = manager.selectedCyborgVestImage.sprite;

                    manager.selectedCyborg = null;
                }
                //if (cybList.Count >= 3)
                //{
                //    foreach (Button btn in mineBtnList)
                //    {

                //        btn.interactable = false;
                //    }
                //    foreach (Button btn in lootBtnList)
                //    {
                //        btn.interactable = false;
                //    }
                //}


            }
        }

    }


    private void SetCards(Cyborg cyborg, bool isLoot = false)
    {
        CyborgStats cybStats = new CyborgStats();
        if (isLoot)
        {
            cybStats = CanvasHandler.instance.CyborgStats2.GetComponent<CyborgStats>();
        }
        else
        {
            cybStats = CanvasHandler.instance.CyborgStats.GetComponent<CyborgStats>();
        }

        QuirksMedalsEquipment qme = CanvasHandler.instance.CyborgRightStats.GetComponent<QuirksMedalsEquipment>();
        if (!CanvasHandler.instance.CyborgStats.activeInHierarchy)
        {
            CanvasHandler.instance.CyborgStats.SetActive(true);
            CanvasHandler.instance.CyborgRightStats.SetActive(true);
        }
        cybStats.cybName.text = cyborg.name;
        cybStats.stress.text = cyborg.stressPoint.ToString();
        cybStats.energy.text = cyborg.energy.ToString();
        cybStats.attack.text = cyborg.attack.ToString("F1");
        cybStats.accuracy.text = cyborg.accuracy.ToString("F1");
        cybStats.health.text = cyborg.health.ToString("F1");
        cybStats.persistence.text = cyborg.persistence.ToString("F1");
        cybStats.crit.text = cyborg.criticalHit.ToString("F1");
        cybStats.rank.text = cyborg.rank;
        cybStats.lifePoints.text = cyborg.lifePoint.ToString();
        cybStats.level.text = "Level: " + cyborg.level.ToString();
        cybStats.luck.text = cyborg.luck.ToString("F1");
        cybStats.gender.text = cyborg.trait.bodyParts.gender;
        cybStats.neck.text = cyborg.trait.bodyParts.neck.name;
        cybStats.eyes.text = cyborg.trait.bodyParts.eye.name;
        cybStats.helmet.text = cyborg.trait.bodyParts.helmet;
        cybStats.vest.text = cyborg.trait.bodyParts.vest;
        cybStats.origin.text = cyborg.trait.bodyParts.originPlanet.name;

        NetworkingManager.instance.SetCyborgPfp(cybStats.originPlanetImage, cybStats.neckImage, cybStats.bodyImage, cybStats.jawImage, cybStats.vestImage, cybStats.helmetImage, cybStats.eyeImage, cyborg.trait.bodyParts.originPlanet.name, cyborg.trait.bodyParts.gender, cyborg.trait.bodyParts.vest, cyborg.trait.bodyParts.eye.name, cyborg.trait.bodyParts.neck.name, cyborg.trait.bodyParts.skin, cyborg.rank);
        //Debug.Log(cyborg.trait.@class);
        CloseeAllBackgrounds(cybStats, qme);
        switch (cyborg.trait.@class)
        {
            case "Aviator":
                cybStats.aviatorBg.gameObject.SetActive(true);
                qme.aviatorBg.gameObject.SetActive(true);
                cybStats.cybName.color = new Color32(38, 253, 221, 255); ;
                break;
            case "Warrior":
                cybStats.warriorBg.gameObject.SetActive(true);
                qme.warriorBg.gameObject.SetActive(true);
                cybStats.cybName.color = Color.green;
                break;
            case "Tactician":
                cybStats.tacticianBg.gameObject.SetActive(true);
                qme.tacticianBg.gameObject.SetActive(true);
                cybStats.cybName.color = Color.white;
                break;
            case "Marine":
                cybStats.marinesBg.gameObject.SetActive(true);
                qme.marinesBg.gameObject.SetActive(true);
                cybStats.cybName.color = Color.yellow;
                break;
            case "Brawler":
                cybStats.brawlersBg.gameObject.SetActive(true);
                qme.brawlersBg.gameObject.SetActive(true);
                cybStats.cybName.color = new Color32(253, 116, 2, 255);
                break;
        }
        foreach (Transform t in qme.quirkScrollViewContent.transform)
        {
            GameObject.Destroy(t.gameObject);
        }
        foreach (QuirkN quirk in cyborg.quirks)
        {
            if (quirk.attributes.Count > 0)
            {
                for (int k = 0; k < quirk.attributes.Count; k++)
                {
                    GameObject quirkPref = Instantiate(CanvasHandler.instance.quirkInfoPrefab, qme.quirkScrollViewContent.transform);
                    string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                    quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                }
            }
        }
    }

    public void CloseeAllBackgrounds(CyborgStats cybStats, QuirksMedalsEquipment qme)
    {
        cybStats.aviatorBg.gameObject.SetActive(false);
        cybStats.warriorBg.gameObject.SetActive(false);
        cybStats.tacticianBg.gameObject.SetActive(false);
        cybStats.brawlersBg.gameObject.SetActive(false);
        cybStats.marinesBg.gameObject.SetActive(false);
        qme.aviatorBg.gameObject.SetActive(false);
        qme.warriorBg.gameObject.SetActive(false);
        qme.tacticianBg.gameObject.SetActive(false);
        qme.brawlersBg.gameObject.SetActive(false);
        qme.marinesBg.gameObject.SetActive(false);
    }
    private Color GetColorForTrait(string trait)
    {
        switch (trait)
        {
            case "Aviator":
                return new Color32(38, 253, 221, 255);
            case "Warrior":
                return Color.green;
            case "Tactician":
                return Color.white;
            case "Marine":
                return Color.yellow;
            case "Brawler":
                return new Color32(253, 116, 2, 255);
            default:
                return Color.white;
        }
    }

    public void OnClickDeployWager()
    {
        if (cyborgPosWager.ContainsKey("mf1"))
        {
            string value = cyborgPosWager["mf1"];
            frontRowWager.Add(value);
        }
        else
        {
            frontRowWager.Add("");
        }
        if (cyborgPosWager.ContainsKey("mf2"))
        {
            string value = cyborgPosWager["mf2"];
            frontRowWager.Add(value);
        }
        else
        {
            frontRowWager.Add("");
        }
        if (cyborgPosWager.ContainsKey("mf3"))
        {
            string value = cyborgPosWager["mf3"];
            frontRowWager.Add(value);
        }
        else
        {
            frontRowWager.Add("");
        }
        if (cyborgPosWager.ContainsKey("mb1"))
        {
            string value = cyborgPosWager["mb1"];
            backRowWager.Add(value);
        }
        else
        {
            backRowWager.Add("");
        }
        if (cyborgPosWager.ContainsKey("mb2"))
        {
            string value = cyborgPosWager["mb2"];
            backRowWager.Add(value);
        }
        else
        {
            backRowWager.Add("");
        }
        if (cyborgPosWager.ContainsKey("mb3"))
        {
            string value = cyborgPosWager["mb3"];
            backRowWager.Add(value);
        }
        else
        {
            backRowWager.Add("");
        }

        //Mine mine = new Mine();

        if (sequenceList.Count < 3)
        {
            frontRowWager.Clear();
            backRowWager.Clear();
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Please select three cyborgs";
        }
        else
        {

            WagerWarBody wwb = new WagerWarBody();
            wwb.gameId = NetworkingManager.instance.gwcr.gameID;
            wwb.frontRow = frontRowWager;
            wwb.backRow = backRowWager;

            for (int i = 0; i < 24; i++)
            {
                CyborgImageGameObject[i].SetActive(false);
            }

            foreach (Button btn in mineBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            foreach (Button btn in lootBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            //cybList.Clear();
            sequenceList.Clear();
            cyborgPosWager.Clear();

            StartCoroutine(NetworkingManager.instance.WagerWar(wwb));
            frontRowWager.Clear();
            backRowWager.Clear();
            //rerollCount = 1;
            //    NetworkingManager.instance.mineOrLoot = "mine";
        }
        //NetworkingManager.instance.startMine = true;
    }

    public void OnClickDeployMine()
    {
        if (cyborgPos.ContainsKey("mf1"))
        {
            int value = cyborgPos["mf1"];
            frontRow.Add(value);
        }
        else
        {
            frontRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("mf2"))
        {
            int value = cyborgPos["mf2"];
            frontRow.Add(value);
        }
        else
        {
            frontRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("mf3"))
        {
            int value = cyborgPos["mf3"];
            frontRow.Add(value);
        }
        else
        {
            frontRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("mb1"))
        {
            int value = cyborgPos["mb1"];
            backRow.Add(value);
        }
        else
        {
            backRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("mb2"))
        {
            int value = cyborgPos["mb2"];
            backRow.Add(value);
        }
        else
        {
            backRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("mb3"))
        {
            int value = cyborgPos["mb3"];
            backRow.Add(value);
        }
        else
        {
            backRow.Add(-1);
        }

        Mine mine = new Mine();

        if (cybList.Count < 3)
        {
            frontRow.Clear();
            backRow.Clear();
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Please select three cyborgs";
        }
        else
        {
            mine.id = new List<int> { cybList[0], cybList[1], cybList[2] };

            mine.frontRow = frontRow;
            mine.backRow = backRow;
            for (int i = 0; i < 24; i++)
            {
                CyborgImageGameObject[i].SetActive(false);
            }

            foreach (Button btn in mineBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            foreach (Button btn in lootBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            cybList.Clear();
            cyborgPos.Clear();

            StartCoroutine(NetworkingManager.instance.Mine(mine));
            frontRow.Clear();
            backRow.Clear();
            NetworkingManager.instance.mineOrLoot = "mine";
        }
        NetworkingManager.instance.startMine = true;
    }

    public void OnClickDeployLoot()
    {
        if (cyborgPos.ContainsKey("lf1"))
        {
            int value = cyborgPos["lf1"];
            frontRow.Add(value);
        }
        else
        {
            frontRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("lf2"))
        {
            int value = cyborgPos["lf2"];
            frontRow.Add(value);
        }
        else
        {
            frontRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("lf3"))
        {
            int value = cyborgPos["lf3"];
            frontRow.Add(value);
        }
        else
        {
            frontRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("lb1"))
        {
            int value = cyborgPos["lb1"];
            backRow.Add(value);
        }
        else
        {
            backRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("lb2"))
        {
            int value = cyborgPos["lb2"];
            backRow.Add(value);
        }
        else
        {
            backRow.Add(-1);
        }
        if (cyborgPos.ContainsKey("lb3"))
        {
            int value = cyborgPos["lb3"];
            backRow.Add(value);
        }
        else
        {
            backRow.Add(-1);
        }



        List<List<int>> listOfLists = new List<List<int>>
        {
            frontRow,
            backRow
        };

        Loot loot = new Loot();
        loot.mineId = NetworkingManager.instance.mineToLootID;
        if (cybList.Count < 3)
        {
            frontRow.Clear();
            backRow.Clear();
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Please select three cyborgs";
        }
        else
        {
            loot.id = new List<int> { cybList[0], cybList[1], cybList[2] };
            loot.frontRow = frontRow;
            loot.backRow = backRow;

            for (int i = 0; i < 24; i++)
            {
                CyborgImageGameObject[i].SetActive(false);
            }

            foreach (Button btn in mineBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            foreach (Button btn in lootBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            cybList.Clear();
            cyborgPos.Clear();

            StartCoroutine(NetworkingManager.instance.Loot(loot));
            frontRow.Clear();
            backRow.Clear();
            NetworkingManager.instance.mineOrLoot = "loot";
        }
        NetworkingManager.instance.startLoot = true;
    }

    public void OnClickX(string str)
    {

        string cyborgSequence = "";
        int cyborgID = cyborgPos.GetValueOrDefault(str);
        if (NetworkingManager.instance.isWager)
        {
            cyborgSequence = cyborgPosWager.GetValueOrDefault(str);
            sequenceList.Remove(cyborgSequence);
        }
        cyborgPos.Remove(str);
        cyborgPosWager.Remove(str);
        cybList.Remove(cyborgID);


        if (cybList.Count < 3)
        {
            for (int i = 0; i < mineBtnList.Count; i++)
            {
                if (mineBtnList[i].interactable == false)
                {
                    switch (i)
                    {
                        case 0:
                            if (!mb1)
                            {
                                mineBtnList[i].interactable = true;
                            }
                            break;
                        case 1:
                            if (!mb2)
                            {
                                mineBtnList[i].interactable = true;
                            }
                            break;
                        case 2:
                            if (!mb3)
                            {
                                mineBtnList[i].interactable = true;
                            }
                            break;
                        case 3:
                            if (!mf1)
                            {
                                mineBtnList[i].interactable = true;
                            }
                            break;
                        case 4:
                            if (!mf2)
                            {
                                mineBtnList[i].interactable = true;
                            }
                            break;
                        case 5:
                            if (!mf3)
                            {
                                mineBtnList[i].interactable = true;
                            }
                            break;
                    }
                }

            }
        }
        for (int j = 0; j < lootBtnList.Count; j++)
        {
            if (lootBtnList[j].interactable == false)
            {
                switch (j)
                {
                    case 0:
                        if (lb1)
                        {
                            lootBtnList[j].interactable = true;
                        }
                        break;
                    case 1:
                        if (lb2)
                        {
                            lootBtnList[j].interactable = true;
                        }
                        break;
                    case 2:
                        if (lb3)
                        {
                            lootBtnList[j].interactable = true;
                        }
                        break;
                    case 3:
                        if (lf1)
                        {
                            lootBtnList[j].interactable = true;
                        }
                        break;
                    case 4:
                        if (lf2)
                        {
                            lootBtnList[j].interactable = true;
                        }
                        break;
                    case 5:
                        if (lf3)
                        {
                            lootBtnList[j].interactable = true;
                        }
                        break;
                }
            }
            foreach (Button btn in lootBtnList)
            {
                if (btn.interactable == false && btn.GetComponent<Image>().sprite == spr)
                {
                    //btn.GetComponent<Image>().sprite = spr;
                    btn.interactable = true;
                }
            }
        }
        if (cybList.Count == 0)
        {
            foreach (Button btn in mineBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            foreach (Button btn in lootBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
        }
        if (NetworkingManager.instance.isWager && sequenceList.Count > 0)
        {
            foreach (Button btn in mineBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
            foreach (Button btn in lootBtnList)
            {
                btn.GetComponent<Image>().sprite = spr;
                btn.interactable = true;
            }
        }
        //Remove Grey out on Click 
        foreach (GameObject obj in GameManager.instance.playerCyborgList)
        {
            InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
            if (NetworkingManager.instance.isWager)
            {
                if (cyborgSequence == invCyb.cyborg.sequence)
                {
                    invCyb.greyImage.gameObject.SetActive(false);
                    invCyb.button.enabled = true;
                }
            }
            if (cyborgID == invCyb.cyborg.id)
            {
                invCyb.greyImage.gameObject.SetActive(false);
                invCyb.button.enabled = true;
            }
            //Add Gold border to whichever is selected currently
            if (GameManager.instance.selectedCyborg == invCyb.cyborg)
            {
                invCyb.goldBorder.gameObject.SetActive(true);
            }
        }


        if (str == "mb1")
        {
            if (CyborgImageGameObject[6].activeInHierarchy && CyborgImageGameObject[7].activeInHierarchy)
            {
                mb1 = false;
                CyborgImageGameObject[6].SetActive(false);
                CyborgImageGameObject[7].SetActive(false);
                mineBtnList[0].GetComponent<Image>().sprite = spr;
                mineBtnList[0].interactable = true;
            }


        }
        else if (str == "mb2")
        {
            if (CyborgImageGameObject[8].activeInHierarchy && CyborgImageGameObject[9].activeInHierarchy)
            {
                mb2 = false;
                CyborgImageGameObject[8].SetActive(false);
                CyborgImageGameObject[9].SetActive(false);
                mineBtnList[1].GetComponent<Image>().sprite = spr;
                mineBtnList[1].interactable = true;
            }

        }
        else if (str == "mb3")
        {
            if (CyborgImageGameObject[10].activeInHierarchy && CyborgImageGameObject[11].activeInHierarchy)
            {
                mb3 = false;
                CyborgImageGameObject[10].SetActive(false);
                CyborgImageGameObject[11].SetActive(false);
                mineBtnList[2].GetComponent<Image>().sprite = spr;
                mineBtnList[2].interactable = true;
            }

        }
        else if (str == "mf1")
        {
            if (CyborgImageGameObject[0].activeInHierarchy && CyborgImageGameObject[1].activeInHierarchy)
            {
                mf1 = false;
                CyborgImageGameObject[0].SetActive(false);
                CyborgImageGameObject[1].SetActive(false);
                mineBtnList[3].GetComponent<Image>().sprite = spr;
                mineBtnList[3].interactable = true;
            }

        }
        else if (str == "mf2")
        {
            if (CyborgImageGameObject[2].activeInHierarchy && CyborgImageGameObject[3].activeInHierarchy)
            {
                mf2 = false;
                CyborgImageGameObject[2].SetActive(false);
                CyborgImageGameObject[3].SetActive(false);
                mineBtnList[4].GetComponent<Image>().sprite = spr;
                mineBtnList[4].interactable = true;
            }

        }
        else if (str == "mf3")
        {
            if (CyborgImageGameObject[4].activeInHierarchy && CyborgImageGameObject[5].activeInHierarchy)
            {
                mf3 = false;
                CyborgImageGameObject[4].SetActive(false);
                CyborgImageGameObject[5].SetActive(false);
                mineBtnList[5].GetComponent<Image>().sprite = spr;
                mineBtnList[5].interactable = true;
            }

        }
        else if (str == "lb1")
        {
            if (CyborgImageGameObject[18].activeInHierarchy && CyborgImageGameObject[19].activeInHierarchy)
            {
                lb1 = false;
                CyborgImageGameObject[18].SetActive(false);
                CyborgImageGameObject[19].SetActive(false);
                lootBtnList[0].GetComponent<Image>().sprite = spr;
                lootBtnList[0].interactable = true;
            }

        }
        else if (str == "lb2")
        {
            if (CyborgImageGameObject[20].activeInHierarchy && CyborgImageGameObject[21].activeInHierarchy)
            {
                lb2 = false;
                CyborgImageGameObject[20].SetActive(false);
                CyborgImageGameObject[21].SetActive(false);
                lootBtnList[1].GetComponent<Image>().sprite = spr;
                lootBtnList[1].interactable = true;
            }

        }
        else if (str == "lb3")
        {
            if (CyborgImageGameObject[22].activeInHierarchy && CyborgImageGameObject[23].activeInHierarchy)
            {
                lb3 = false;
                CyborgImageGameObject[22].SetActive(false);
                CyborgImageGameObject[23].SetActive(false);
                lootBtnList[2].GetComponent<Image>().sprite = spr;
                lootBtnList[2].interactable = true;
            }

        }
        else if (str == "lf1")
        {
            if (CyborgImageGameObject[12].activeInHierarchy && CyborgImageGameObject[13].activeInHierarchy)
            {
                lf1 = false;
                CyborgImageGameObject[12].SetActive(false);
                CyborgImageGameObject[13].SetActive(false);
                lootBtnList[3].GetComponent<Image>().sprite = spr;
                lootBtnList[3].interactable = true;
            }

        }
        else if (str == "lf2")
        {
            if (CyborgImageGameObject[14].activeInHierarchy && CyborgImageGameObject[15].activeInHierarchy)
            {
                lf2 = false;
                CyborgImageGameObject[14].SetActive(false);
                CyborgImageGameObject[15].SetActive(false);
                lootBtnList[4].GetComponent<Image>().sprite = spr;
                lootBtnList[4].interactable = true;
            }

        }
        else if (str == "lf3")
        {
            if (CyborgImageGameObject[16].activeInHierarchy && CyborgImageGameObject[17].activeInHierarchy)
            {
                lf3 = false;
                CyborgImageGameObject[16].SetActive(false);
                CyborgImageGameObject[17].SetActive(false);
                lootBtnList[5].GetComponent<Image>().sprite = spr;
                lootBtnList[5].interactable = true;
            }

        }

    }


}

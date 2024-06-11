using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DemoManager : MonoBehaviour
{
    NetworkingManager nm = NetworkingManager.instance;
    [SerializeField] public GameObject popup4, popup5, popup6, mineTeamSelectionScrollView, mineTeamSelectionScrollView2, mineDescriptionScrollView, descriptionPrefab,
                                       placeButton1, placeButton2, placeButton3, placeButton4, placeButton5, placeButton6, cyborg1, cyborg2, cyborg3, cyborg4, cyborg5, cyborg6, bottomMf3, bottomMb3, bottomMf2, bottomLf1, bottomLf2, bottomLf3;
    [SerializeField] public List<GameObject> mf3, mb3, mf2, lf1, lf2, lf3, balances, solBalances;
    [SerializeField] public TMP_Text popup2Text;
    public TeamSelectionHandler tsh;


    private void Start()
    {
        nm.dmlr2 = JsonUtility.FromJson<DemoMineLossResp>(nm.lootWinJsonFile.text);
        nm.dmlr = JsonUtility.FromJson<DemoMineLossResp>(nm.mineLossJsonFile.text);
    }
    public void ClaimDemoNFTs()
    {
        nm.DemoClaimCyborg(gameObject);
    }

    public void SpawnTeamSelectionCyborgs()
    { 
        nm.SpawnTeamSelectionCyborgs(gameObject);
    }

    public void SpawnTeamDescription()
    {
        Debug.Log("Spawn team desc " + nm.dmlr.result.participant.mine.Count);
        for (int i = 0; i < nm.dmlr.result.participant.mine.Count; i++)
        {

            GameObject description = Instantiate(descriptionPrefab, mineDescriptionScrollView.transform);
            //GameManager.instance.playerCyborgList.Add(inventCyborg);
            TraitN trait = nm.dmlr.result.participant.mine[i].trait;
            nm.SetCyborgPfp(description.GetComponent<InventoryCyborg>().originPlanetImage,
                        description.GetComponent<InventoryCyborg>().neckImage,
                        description.GetComponent<InventoryCyborg>().bodyImage,
                        description.GetComponent<InventoryCyborg>().jawImage,
                        description.GetComponent<InventoryCyborg>().vestImage,
                        description.GetComponent<InventoryCyborg>().helmetImage,
                        description.GetComponent<InventoryCyborg>().eyeImage,
                        trait.bodyParts.originPlanet.name,
                        trait.bodyParts.gender,
                        trait.bodyParts.vest,
                        trait.bodyParts.eye.name,
                        trait.bodyParts.neck.name,
                        trait.bodyParts.skin,
                        "mint");

            description.GetComponent<InventoryCyborg>().demoParticipant = nm.dmlr.result.participant.mine[i];
            description.GetComponent<InventoryCyborg>().energyText.text = nm.dmlr.result.participant.mine[i].energy.ToString();
            description.GetComponent<InventoryCyborg>().stressText.text = nm.dmlr.result.participant.mine[i].stressPoint.ToString();
            description.GetComponent<InventoryCyborg>().nameText.text = "#" + nm.dmlr.result.participant.mine[i].id.ToString();
            description.GetComponent<InventoryCyborg>().levelText.text = "Lv." + nm.dmlr.result.participant.mine[i].level.ToString();
            description.GetComponent<InventoryCyborg>().demoDescriptionText.text = nm.dmlr.result.participant.mine[i].trait.@class;
            Debug.Log(trait.@class);
            if(trait.@class == "Brawler")
            {
                description.GetComponent<InventoryCyborg>().critDescriptionText.text = "Skips 1 turn of the target and deals 1x hit damage to the target";
            }
            if(trait.@class == "Marine")
            {
                description.GetComponent<InventoryCyborg>().critDescriptionText.text = "Increases stress of the target by 15% and deals 1x hit damage to the target";
            }
            if (trait.@class == "Warrior")
            {
                description.GetComponent<InventoryCyborg>().critDescriptionText.text = "Deals 3x hit damage to the target";
            }


        }

      
    }
   
    public void PlaceSelection(int index)
    {
        if(index == 1)
        {
            tsh.CyborgImageGameObject[8].SetActive(true);
            tsh.CyborgImageGameObject[9].SetActive(true);
            tsh.CyborgImageGameObject[9].GetComponentInChildren<TMP_Text>().text = GameManager.instance.selectedParticipant.name;
            //CyborgImageGameObject[9].GetComponentInChildren<TMP_Text>().color = GetColorForTrait(manager.selectedCyborg.trait.@class);
            tsh.selectedCyborgOriginPlanetImage[4].sprite = GameManager.instance.selectedCyborgOriginPlanetImage.sprite;
            tsh.selectedCyborgBodyImage[4].sprite = GameManager.instance.selectedCyborgBodyImage.sprite;
            //selectedCyborgJawImage[4].sprite = manager.selectedCyborgJawImage.sprite;
            tsh.selectedCyborgEyeImage[4].sprite = GameManager.instance.selectedCyborgEyeImage.sprite;
            tsh.selectedCyborgNeckImage[4].sprite = GameManager.instance.selectedCyborgNeckImage.sprite;
            tsh.selectedCyborgHelmetImage[4].sprite = GameManager.instance.selectedCyborgHelmetImage.sprite;
            tsh.selectedCyborgVestImage[4].sprite = GameManager.instance.selectedCyborgVestImage.sprite;
        }
       
    }

    public void DemoMineSet(int i)
    {
        if(i == 1)
        {
            placeButton1.SetActive(true);
            bottomMf3.SetActive(true);
            nm.SetCyborgPfp(mf3[0].GetComponent<Image>(), mf3[4].GetComponent<Image>(), mf3[1].GetComponent<Image>(), mf3[2].GetComponent<Image>(), mf3[6].GetComponent<Image>(), mf3[5].GetComponent<Image>(), mf3[3].GetComponent<Image>(), "Arcturia", "Male", "MarineCorporal", "MechaVision", "LunarCharged", "Espresso", "mint");
        }
        if (i == 2)
        {
            placeButton3.SetActive(true);
            bottomMf2.SetActive(true);
            nm.SetCyborgPfp(mf2[0].GetComponent<Image>(), mf2[4].GetComponent<Image>(), mf2[1].GetComponent<Image>(), mf2[2].GetComponent<Image>(), mf2[6].GetComponent<Image>(), mf2[5].GetComponent<Image>(), mf2[3].GetComponent<Image>(), "Helios", "Male", "WarriorCorporal", "MechaSight", "LunarCrest", "Almond", "mint");
        }
        if (i == 3)
        {
            placeButton2.SetActive(true);
            bottomMb3.SetActive(true);
            nm.SetCyborgPfp(mb3[0].GetComponent<Image>(), mb3[4].GetComponent<Image>(), mb3[1].GetComponent<Image>(), mb3[2].GetComponent<Image>(), mb3[6].GetComponent<Image>(), mb3[5].GetComponent<Image>(), mb3[3].GetComponent<Image>(), "Zephyr", "Male", "BrawlerCorporal", "MechaGaze", "LunarCore", "Beige", "mint");
        }
        
    }

    public void DemoLootSet(int i)
    {
        if (i == 1)
        {
            placeButton4.SetActive(true);
            bottomLf1.SetActive(true);
            nm.SetCyborgPfp(lf1[0].GetComponent<Image>(), lf1[4].GetComponent<Image>(), lf1[1].GetComponent<Image>(), lf1[2].GetComponent<Image>(), lf1[6].GetComponent<Image>(), lf1[5].GetComponent<Image>(), lf1[3].GetComponent<Image>(), "Helios", "Male", "WarriorCorporal", "MechaSight", "LunarCrest", "Almond", "mint");
        }
        if (i == 2)
        {
            placeButton5.SetActive(true);
            bottomLf2.SetActive(true);
            nm.SetCyborgPfp(lf2[0].GetComponent<Image>(), lf2[4].GetComponent<Image>(), lf2[1].GetComponent<Image>(), lf2[2].GetComponent<Image>(), lf2[6].GetComponent<Image>(), lf2[5].GetComponent<Image>(), lf2[3].GetComponent<Image>(), "Arcturia", "Male", "MarineCorporal", "MechaVision", "LunarCharged", "Espresso", "mint");
        }
        if (i == 3)
        {
            placeButton6.SetActive(true);
            bottomLf3.SetActive(true);
            nm.SetCyborgPfp(lf3[0].GetComponent<Image>(), lf3[4].GetComponent<Image>(), lf3[1].GetComponent<Image>(), lf3[2].GetComponent<Image>(), lf3[6].GetComponent<Image>(), lf3[5].GetComponent<Image>(), lf3[3].GetComponent<Image>(), "Zephyr", "Male", "BrawlerCorporal", "MechaGaze", "LunarCore", "Beige", "mint");
        }
    }

    public void HighlightCyborg2(int i)
    {
        if(i == 2)
        {
            cyborg2.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
            cyborg1.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
        }
        if(i == 3)
        {
            cyborg3.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
            cyborg2.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
        }
        if(i == 4)
        {
            cyborg3.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
        }
        if (i == 5)
        {
            cyborg5.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
            cyborg4.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
        }
        if (i == 6)
        {
            cyborg6.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
            cyborg5.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
        }
        if (i == 7)
        {
            cyborg6.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
        }
    }

    public void Deploy()
    {
        SceneManager.LoadScene(4);
    }

    public void LootDeploy()
    {
        SceneManager.LoadScene(6);
        nm.SetLootWinTrue();
    }

    public void SetTextPopup2()
    {
        popup2Text.text = $"Hi <color=yellow><b>{nm.userDetails.result.username}</b></color>,";
    }

    public void SetBalance(int amount)
    {
        foreach(GameObject obj in balances)
        {
            obj.GetComponent<TMP_Text>().text = amount.ToString();
        }
    }

    public void SetSOLBalance(int amount)
    {
        foreach (GameObject obj in solBalances)
        {
            double _amount = (double)amount / 1000;
            obj.GetComponent<TMP_Text>().text = _amount.ToString();
        }
    }

    public void OpenUrl()
    {
        nm.OpenURL("https://discord.com/invite/Rm7y3tZe4X");
    }
}

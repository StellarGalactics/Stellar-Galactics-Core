using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class InventoryCyborg : MonoBehaviour
{
    [SerializeField] public TMP_Text nameText, stressText, energyText, levelText, demoDescriptionText, critDescriptionText;
    public Cyborg cyborg;
    public string sequence;
    public MineN demoParticipant;
    public Button button;
    public Image greyImage, goldBorder, deadBorder;
    public Image originPlanetImage;
    public Image bodyImage;
    public Image jawImage;
    public Image eyeImage;
    public Image neckImage;
    public Image helmetImage;
    public Image vestImage;

    private void Start()
    {
        if (nameText != null && !NetworkingManager.instance.isDemo)
        {
            nameText.text = cyborg.name;
        }
        if (levelText != null && !NetworkingManager.instance.isDemo)
        {
            levelText.text = "Lvl." + cyborg.level;
        }

        stressText.text = cyborg.stressPoint.ToString();
        energyText.text = cyborg.energy.ToString();

        //Debug.Log(cyborg.id);
    }


    public void OnClickButton()
    {
        Debug.Log("On Click Btn");
        //On Picking Cyborg in MineSelection
        if (CanvasHandler.instance.demoCanvas.activeInHierarchy)
        {
            CyborgStats cybStats = CanvasHandler.instance.CyborgStats.GetComponent<CyborgStats>();
            QuirksMedalsEquipment qme = CanvasHandler.instance.CyborgRightStats.GetComponent<QuirksMedalsEquipment>();
            if (!CanvasHandler.instance.CyborgStats.activeInHierarchy)
            {
                CanvasHandler.instance.CyborgStats.SetActive(true);
                CanvasHandler.instance.CyborgRightStats.SetActive(true);
            }
            cybStats.cybName.text = demoParticipant.name;
            cybStats.stress.text = demoParticipant.stressPoint.ToString();
            cybStats.energy.text = demoParticipant.energy.ToString();
            cybStats.attack.text = demoParticipant.attack.ToString("F1");
            cybStats.accuracy.text = demoParticipant.accuracy.ToString("F1");
            cybStats.health.text = demoParticipant.health.ToString("F1");
            cybStats.persistence.text = demoParticipant.persistence.ToString("F1");
            cybStats.crit.text = demoParticipant.criticalHit.ToString("F1");
            cybStats.rank.text = demoParticipant.rank;
            cybStats.lifePoints.text = demoParticipant.lifePoint.ToString();
            cybStats.level.text = "Level: " + demoParticipant.level.ToString();
            cybStats.luck.text = demoParticipant.luck.ToString("F1");
            cybStats.gender.text = demoParticipant.trait.bodyParts.gender;
            cybStats.neck.text = demoParticipant.trait.bodyParts.neck.name;
            cybStats.eyes.text = demoParticipant.trait.bodyParts.eye.name;
            cybStats.helmet.text = demoParticipant.trait.bodyParts.helmet;
            cybStats.vest.text = demoParticipant.trait.bodyParts.vest;
            cybStats.origin.text = demoParticipant.trait.bodyParts.originPlanet.name;

            cybStats.originPlanetImage.sprite = originPlanetImage.sprite;
            cybStats.bodyImage.sprite = bodyImage.sprite;
            //cybStats.jawImage.sprite = jawImage.sprite;
            cybStats.eyeImage.sprite = eyeImage.sprite;
            cybStats.neckImage.sprite = neckImage.sprite;
            cybStats.helmetImage.sprite = helmetImage.sprite;
            cybStats.vestImage.sprite = vestImage.sprite;
            //Debug.Log(cyborg.trait.@class);
            CloseeAllBackgrounds(cybStats, qme);
            switch (demoParticipant.trait.@class)
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
            foreach (QuirkN quirk in demoParticipant.quirks)
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
        else if (CanvasHandler.instance.mineTeamSelectionGroup.activeInHierarchy)
        {
            CanvasHandler.instance.noCyborgSelectedMine.SetActive(false);
            GameManager.instance.selectedCyborg = cyborg;
            CyborgStats cybStats = CanvasHandler.instance.CyborgStats.GetComponent<CyborgStats>();
            foreach (GameObject obj in GameManager.instance.playerCyborgList)
            {
                obj.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
            }
                goldBorder.gameObject.SetActive(true);
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
            cybStats.speed.text = cyborg.speed.ToString("F1");
            cybStats.persistence.text = cyborg.persistence.ToString("F1");
            cybStats.crit.text = cyborg.criticalHit.ToString("F1");
            cybStats.rank.text = cyborg.rank;
            cybStats.lifePoints.text = cyborg.lifePoint.ToString();
            cybStats.level.text = "Level: " + cyborg.level.ToString();
            cybStats.luck.text = cyborg.luck.ToString("F1");
            cybStats.gender.text = cyborg.trait.bodyParts.gender;
            cybStats.neck.text = cyborg.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyborg.trait.bodyParts.neck.name);
            //cybStats.neck.color = NetworkingManager.instance.GetColorOfNeck(cyborg.trait.bodyParts.neck.name);
            cybStats.eyes.text = cyborg.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyborg.trait.bodyParts.eye.name);
            //cybStats.eyes.color = NetworkingManager.instance.GetColorOfEye(cyborg.trait.bodyParts.eye.name);
            cybStats.helmet.text = cyborg.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyborg.trait.bodyParts.helmet);
            //cybStats.helmet.color = NetworkingManager.instance.GetColorOfHelmetVest(cyborg.trait.bodyParts.helmet);
            cybStats.vest.text = cyborg.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyborg.trait.bodyParts.vest);
            //cybStats.vest.color = NetworkingManager.instance.GetColorOfHelmetVest(cyborg.trait.bodyParts.vest);
            cybStats.origin.text = cyborg.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyborg.trait.bodyParts.originPlanet.name);
            //cybStats.origin.color = NetworkingManager.instance.GetColorOfPlanet(cyborg.trait.bodyParts.originPlanet.name);

            cybStats.originPlanetImage.sprite = originPlanetImage.sprite;
            cybStats.bodyImage.sprite = bodyImage.sprite;
            //cybStats.jawImage.sprite = jawImage.sprite;
            cybStats.eyeImage.sprite = eyeImage.sprite;
            cybStats.neckImage.sprite = neckImage.sprite;
            cybStats.helmetImage.sprite = helmetImage.sprite;
            cybStats.vestImage.sprite = vestImage.sprite;
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
        //On Picking Cyborg in LootSelection
        else if (CanvasHandler.instance.lootTeamSelectionGroup.activeInHierarchy)
        {
            GameManager.instance.selectedCyborg = cyborg;
            CanvasHandler.instance.noCyborgSelectedLoot.SetActive(false);
            foreach (GameObject obj in GameManager.instance.playerCyborgList)
            {
                obj.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
            }
            goldBorder.gameObject.SetActive(true);
            CyborgStats cybStats = CanvasHandler.instance.CyborgStats2.GetComponent<CyborgStats>();
            QuirksMedalsEquipment qme = CanvasHandler.instance.CyborgRightStats2.GetComponent<QuirksMedalsEquipment>();
            foreach (Transform t in CanvasHandler.instance.lootCardsScrollViewContent.transform)
            {
                InventoryCyborg ic = t.gameObject.GetComponent<InventoryCyborg>();
                if (ic.cyborg.id == GameManager.instance.selectedCyborg.id)
                {
                    ic.greyImage.gameObject.SetActive(true);
                }
                else
                {
                    ic.greyImage.gameObject.SetActive(false);
                }
            }
            if (!CanvasHandler.instance.CyborgStats2.activeInHierarchy)
            {
                CanvasHandler.instance.CyborgStats2.SetActive(true);
                CanvasHandler.instance.CyborgRightStats2.SetActive(true);
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
            cybStats.speed.text = cyborg.speed.ToString("F1");
            cybStats.lifePoints.text = cyborg.lifePoint.ToString();
            cybStats.level.text = "Level: " + cyborg.level.ToString();
            cybStats.luck.text = cyborg.luck.ToString("F1");

            cybStats.originPlanetImage.sprite = originPlanetImage.sprite;
            cybStats.bodyImage.sprite = bodyImage.sprite;
            //cybStats.jawImage.sprite = jawImage.sprite;
            cybStats.eyeImage.sprite = eyeImage.sprite;
            cybStats.neckImage.sprite = neckImage.sprite;
            cybStats.helmetImage.sprite = helmetImage.sprite;
            cybStats.vestImage.sprite = vestImage.sprite;
            cybStats.gender.text = cyborg.trait.bodyParts.gender;
            cybStats.neck.text = cyborg.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyborg.trait.bodyParts.neck.name); 
            //cybStats.neck.color = NetworkingManager.instance.GetColorOfNeck(cyborg.trait.bodyParts.neck.name);
            cybStats.eyes.text = cyborg.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyborg.trait.bodyParts.eye.name);
            //cybStats.eyes.color = NetworkingManager.instance.GetColorOfEye(cyborg.trait.bodyParts.eye.name);
            cybStats.helmet.text = cyborg.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyborg.trait.bodyParts.helmet);
            //cybStats.helmet.color = NetworkingManager.instance.GetColorOfHelmetVest(cyborg.trait.bodyParts.helmet);
            cybStats.vest.text = cyborg.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyborg.trait.bodyParts.vest);
            //cybStats.vest.color = NetworkingManager.instance.GetColorOfHelmetVest(cyborg.trait.bodyParts.vest);
            cybStats.origin.text = cyborg.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyborg.trait.bodyParts.originPlanet.name);
            //cybStats.origin.color = NetworkingManager.instance.GetColorOfPlanet(cyborg.trait.bodyParts.originPlanet.name);

            Debug.Log(cyborg.trait.@class);
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
                        //SelectQuirkHospitalPrefab sqhp = quirkPref.GetComponent<SelectQuirkHospitalPrefab>();
                        string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                        quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                    }
                }
            }
        }
        else if (CanvasHandler.instance.inventoryCanvas.activeInHierarchy)
        {
            GameManager.instance.inventorySelectedCyborg = cyborg;
            if(CanvasHandler.instance.inventoryCyborgScrollViewContent.activeInHierarchy)
            {
                //CanvasHandler.instance.cyborgFlow.SetActive(false);
                CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().ShowSelectedCyborg();
            }
            else if(CanvasHandler.instance.cemeteryScrollViewContent.activeInHierarchy)
            {
                //CanvasHandler.instance.cemeteryFlow.SetActive(false);
                CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().ShowSelectedCyborg(0, true);
            }
            CanvasHandler.instance.cyborgSelectedChild.SetActive(true);
            
        }
        else if (CanvasHandler.instance.zionObject.activeInHierarchy)
        {
            GameManager.instance.zionSelectedCyborg = cyborg;
            foreach (Transform t in CanvasHandler.instance.zionCardsScrollViewContent.transform)
            {
                InventoryCyborg ic = t.gameObject.GetComponent<InventoryCyborg>();
                if (ic.cyborg.id == GameManager.instance.zionSelectedCyborg.id)
                {
                    ic.greyImage.gameObject.SetActive(true);
                }
                else
                {
                    ic.greyImage.gameObject.SetActive(false);
                }
            }
            CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().ShowSelectedCyborg();
        }





        GameManager.instance.selectedParticipant = demoParticipant;


        //GameManager.instance.selectedCyborgImage = image;

        GameManager.instance.selectedCyborgOriginPlanetImage = originPlanetImage;
        GameManager.instance.selectedCyborgBodyImage = bodyImage;
        //GameManager.instance.selectedCyborgJawImage = jawImage;
        GameManager.instance.selectedCyborgEyeImage = eyeImage;
        GameManager.instance.selectedCyborgNeckImage = neckImage;
        GameManager.instance.selectedCyborgHelmetImage = helmetImage;
        GameManager.instance.selectedCyborgVestImage = vestImage;

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
}

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CyborgInventoryCard : MonoBehaviour
{
    [SerializeField]
    TMP_Text healthVal, attackVal, speedVal, persistenceVal, critVal, accuracyVal, luckVal, nameText, stress, energy, lifePoints, genderVal, neckVal, eyesVal, vestVal, helmVal, originVal, colorVal, timeToUnlockVal, rankValText, LevelValText, XPValText, rankUpPointsText, aliveOrDeadText, SGF1Val, purityText, SGFTitle;
    [SerializeField]
    TMP_Text minHealth, maxHealth, minAttack, maxAttack, minSpeed, maxSpeed, minPersistence, maxPersistence, minCrit, maxCrit, minAccuracy, maxAccuracy, minLuck, maxLuck;
    [SerializeField]
    public Image originPlanetImg, bodyImg, jawImg, eyeImg, neckImg, helmetImg, vestImg, aviatorBg, tacticianBg, warriorBg, marinesBg, brawlerBg, yellowBG, redBG;
    [SerializeField]
    public GameObject bodyParts, viewStats, quirkScrollViewContent, inventoryQuirkPrefab, rankUpLockedOverlay, rankUpCountdownText, claimBtn, rankUpBtn, speedUpBtn;
    public Slider healthSlider, attackSlider, speedSlider, persistenceSlider, critSlider, accuracySlider, luckSlider;
    int _id = 0;
    //double baseCost = 0.017;
    float lockDuration = 180;

    private void OnEnable()
    {
        NetworkingManager.instance.GetServerTime(true);
    }

    public void ShowSelectedCyborg(int id = 0, bool isCemetery = false)
    {

        if (id == 0)
        {
            Cyborg cyb = new Cyborg();
            cyb = GameManager.instance.inventorySelectedCyborg;
            float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
            float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
            float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
            float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
            float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
            float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
            float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
            float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
            float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
            float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
            float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
            float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
            float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
            float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


            minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
            maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
            minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
            maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
            minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
            maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
            minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
            maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
            minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
            maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
            minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
            maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
            minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
            maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

            healthSlider.maxValue = maxHealthVal;
            healthSlider.minValue = minHealthVal;
            healthSlider.value = cyb.health;

            attackSlider.maxValue = maxAttackVal;
            attackSlider.minValue = minAttackVal;
            attackSlider.value = (float)cyb.attack;

            speedSlider.maxValue = maxSpeedVal;
            speedSlider.minValue = minSpeedVal;
            speedSlider.value = (float)cyb.speed;

            persistenceSlider.maxValue = maxPersistenceVal;
            persistenceSlider.minValue = minPersistenceVal;
            persistenceSlider.value = (float)cyb.persistence;

            critSlider.maxValue = maxCritVal;
            critSlider.minValue = minCritVal;
            critSlider.value = (float)cyb.criticalHit;

            accuracySlider.maxValue = maxAccuracyVal;
            accuracySlider.minValue = minAccuracyVal;
            accuracySlider.value = (float)cyb.accuracy;

            luckSlider.maxValue = maxLuckVal;
            luckSlider.minValue = minLuckVal;
            luckSlider.value = (float)cyb.luck;

            healthVal.text = cyb.health.ToString();
            attackVal.text = cyb.attack.ToString("F1");
            speedVal.text = cyb.speed.ToString("F1");
            persistenceVal.text = cyb.persistence.ToString("F1");
            critVal.text = cyb.criticalHit.ToString("F1");
            accuracyVal.text = cyb.accuracy.ToString("F1");
            luckVal.text = cyb.luck.ToString("F1");
            stress.text = cyb.stressPoint.ToString();
            energy.text = cyb.energy.ToString();
            lifePoints.text = cyb.lifePoint.ToString();
            nameText.text = cyb.name;
            int purity = 0;
            if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
            {
                purity += 1;
            }
            if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
            {
                purity += 1;
            }
            if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
            {
                purity += 1;
            }
            purity += 2;
            purityText.text = purity.ToString() + "/5";
            if (cyb.status == "Idle")
            {
                timeToUnlockVal.text = "Unlocked";
                //yellowBG.gameObject.SetActive(false);
                //redBG.gameObject.SetActive(false);
            }
            else
            {
                timeToUnlockVal.text = cyb.status;
                //yellowBG.gameObject.SetActive(true);
                //redBG.gameObject.SetActive(false);
            }

            if (cyb.status.ToLower() == "dead")
            {
                aliveOrDeadText.text = "Dead";
                aliveOrDeadText.color = Color.red;
                //redBG.gameObject.SetActive(true);
            }
            else
            {
                aliveOrDeadText.text = "Alive";
                aliveOrDeadText.color = new Color32(8, 222, 9, 255);
            }

            CloseeAllBackgrounds();
            switch (cyb.trait.@class)
            {
                case "Aviator":
                    nameText.color = new Color32(38, 253, 221, 255);
                    aviatorBg.gameObject.SetActive(true);
                    break;
                case "Warrior":
                    warriorBg.gameObject.SetActive(true);
                    nameText.color = Color.green;
                    break;
                case "Tactician":
                    tacticianBg.gameObject.SetActive(true);
                    nameText.color = Color.white;
                    break;
                case "Marine":
                    marinesBg.gameObject.SetActive(true);
                    nameText.color = Color.yellow;
                    break;
                case "Brawler":
                    brawlerBg.gameObject.SetActive(true);
                    nameText.color = new Color32(253, 116, 2, 255);
                    break;
            }





            NetworkingManager nm = NetworkingManager.instance;

            nm.SetCyborgPfp(originPlanetImg,
                          neckImg,
                          bodyImg,
                          jawImg,
                          vestImg,
                          helmetImg,
                          eyeImg,
                          GameManager.instance.inventorySelectedCyborg.trait.bodyParts.originPlanet.name,
                          GameManager.instance.inventorySelectedCyborg.trait.bodyParts.gender,
                          GameManager.instance.inventorySelectedCyborg.trait.bodyParts.vest,
                          GameManager.instance.inventorySelectedCyborg.trait.bodyParts.eye.name,
                          GameManager.instance.inventorySelectedCyborg.trait.bodyParts.neck.name,
                          GameManager.instance.inventorySelectedCyborg.trait.bodyParts.skin,
                          GameManager.instance.inventorySelectedCyborg.rank);
            foreach (Transform t in CanvasHandler.instance.cyborgSelectedChildScrollView.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            for (int i = 0; i < nm.cyborgList.result.Count; i++)
            {
                if (nm.gm.gameMode)
                {
                    if (nm.cyborgList.result[i].mode == null || nm.cyborgList.result[i].mode != "tournament")
                    {
                        continue;
                    }
                }
                else if (isCemetery)
                {
                    if (nm.cyborgList.result[i].cyborg.status.ToLower() != "dead")
                    {
                        continue;
                    }
                }
                else
                {
                    if (nm.cyborgList.result[i].cyborg.status.ToLower() == "dead")
                    {
                        continue;
                    }
                }
                GameObject inventCyborg = Instantiate(CanvasHandler.instance.inventoryCyborgPrefab, CanvasHandler.instance.cyborgSelectedChildScrollView.transform);
                //inventCyborg.GetComponent<InventoryCyborg>().
                nm.SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                            inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                            inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                            inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                            inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                            inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                            inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                            nm.cyborgList.result[i].cyborg.trait.bodyParts.originPlanet.name,
                            nm.cyborgList.result[i].cyborg.trait.bodyParts.gender,
                            nm.cyborgList.result[i].cyborg.trait.bodyParts.vest,
                            nm.cyborgList.result[i].cyborg.trait.bodyParts.eye.name,
                            nm.cyborgList.result[i].cyborg.trait.bodyParts.neck.name,
                            nm.cyborgList.result[i].cyborg.trait.bodyParts.skin,
                            nm.cyborgList.result[i].cyborg.rank);


                inventCyborg.GetComponent<InventoryCyborg>().cyborg = nm.cyborgList.result[i].cyborg;
                inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
                inventCyborg.GetComponent<InventoryCyborg>().deadBorder.gameObject.SetActive(false);
                if (nm.cyborgList.result[i].cyborg.status != "Idle" && nm.cyborgList.result[i].cyborg.status.ToLower() != "dead")
                {
                    //Debug.Log("YellowBorder");
                    inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                    inventCyborg.GetComponent<InventoryCyborg>().deadBorder.gameObject.SetActive(false);
                }
                if (nm.cyborgList.result[i].cyborg.status.ToLower() == "dead")
                {
                    //Debug.Log("RedBorder");
                    inventCyborg.GetComponent<InventoryCyborg>().deadBorder.gameObject.SetActive(true);
                    inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(false);
                }
            }

        }
        else if (NetworkingManager.instance.mineOrLoot == "view")
        {
            _id = id;
            foreach (MineCyborgN mine in NetworkingManager.instance.mineSimData.mineCyborgs)
            {
                if (mine.id == id)
                {
                    MineCyborgN cyb = mine;
                    float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
                    float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
                    float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
                    float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
                    float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
                    float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
                    float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
                    float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
                    float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
                    float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
                    float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
                    float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
                    float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
                    float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


                    minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
                    maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
                    minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
                    maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
                    minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
                    maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
                    minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
                    maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
                    minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
                    maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
                    minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
                    maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
                    minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
                    maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

                    healthSlider.maxValue = maxHealthVal;
                    healthSlider.minValue = minHealthVal;
                    healthSlider.value = cyb.health;

                    attackSlider.maxValue = maxAttackVal;
                    attackSlider.minValue = minAttackVal;
                    attackSlider.value = (float)cyb.attack;

                    speedSlider.maxValue = maxSpeedVal;
                    speedSlider.minValue = minSpeedVal;
                    speedSlider.value = (float)cyb.speed;

                    persistenceSlider.maxValue = maxPersistenceVal;
                    persistenceSlider.minValue = minPersistenceVal;
                    persistenceSlider.value = (float)cyb.persistence;

                    critSlider.maxValue = maxCritVal;
                    critSlider.minValue = minCritVal;
                    critSlider.value = (float)cyb.criticalHit;

                    accuracySlider.maxValue = maxAccuracyVal;
                    accuracySlider.minValue = minAccuracyVal;
                    accuracySlider.value = (float)cyb.accuracy;

                    luckSlider.maxValue = maxLuckVal;
                    luckSlider.minValue = minLuckVal;
                    luckSlider.value = (float)cyb.luck;
                    healthVal.text = cyb.health.ToString();
                    attackVal.text = cyb.attack.ToString("F1");
                    speedVal.text = cyb.speed.ToString("F1");
                    persistenceVal.text = cyb.persistence.ToString("F1");
                    critVal.text = cyb.criticalHit.ToString("F1");
                    accuracyVal.text = cyb.accuracy.ToString("F1");
                    luckVal.text = cyb.luck.ToString("F1");
                    stress.text = cyb.stressPoint.ToString();
                    energy.text = cyb.energy.ToString();
                    lifePoints.text = cyb.lifePoint.ToString();
                    nameText.text = cyb.name;
                    int purity = 0;
                    Debug.Log(cyb.trait.bodyParts.vest);
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    purity += 2;
                    purityText.text = purity.ToString() + "/5";


                    CloseeAllBackgrounds();
                    switch (cyb.trait.@class)
                    {
                        case "Aviator":
                            nameText.color = new Color32(38, 253, 221, 255);
                            aviatorBg.gameObject.SetActive(true);
                            break;
                        case "Warrior":
                            warriorBg.gameObject.SetActive(true);
                            nameText.color = Color.green;
                            break;
                        case "Tactician":
                            tacticianBg.gameObject.SetActive(true);
                            nameText.color = Color.white;
                            break;
                        case "Marine":
                            marinesBg.gameObject.SetActive(true);
                            nameText.color = Color.yellow;
                            break;
                        case "Brawler":
                            brawlerBg.gameObject.SetActive(true);
                            nameText.color = new Color32(253, 116, 2, 255);
                            break;
                    }

                    NetworkingManager nm = NetworkingManager.instance;

                    nm.SetCyborgPfp(originPlanetImg,
                                  neckImg,
                                  bodyImg,
                                  jawImg,
                                  vestImg,
                                  helmetImg,
                                  eyeImg,
                                  cyb.trait.bodyParts.originPlanet.name,
                                  cyb.trait.bodyParts.gender,
                                  cyb.trait.bodyParts.vest,
                                  cyb.trait.bodyParts.eye.name,
                                  cyb.trait.bodyParts.neck.name,
                                  cyb.trait.bodyParts.skin,
                                  cyb.rank);
                }
            }
        }
        else if (NetworkingManager.instance.mineOrLoot == "mine")
        {
            _id = id;
            foreach (MineCyborgN mine in BattleHandler.instance.mineResponse.result.mineCyborgs)
            {
                if (mine.id == id)
                {
                    MineCyborgN cyb = mine;
                    float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
                    float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
                    float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
                    float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
                    float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
                    float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
                    float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
                    float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
                    float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
                    float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
                    float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
                    float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
                    float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
                    float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


                    minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
                    maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
                    minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
                    maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
                    minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
                    maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
                    minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
                    maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
                    minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
                    maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
                    minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
                    maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
                    minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
                    maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

                    healthSlider.maxValue = maxHealthVal;
                    healthSlider.minValue = minHealthVal;
                    healthSlider.value = cyb.health;

                    attackSlider.maxValue = maxAttackVal;
                    attackSlider.minValue = minAttackVal;
                    attackSlider.value = (float)cyb.attack;

                    speedSlider.maxValue = maxSpeedVal;
                    speedSlider.minValue = minSpeedVal;
                    speedSlider.value = (float)cyb.speed;

                    persistenceSlider.maxValue = maxPersistenceVal;
                    persistenceSlider.minValue = minPersistenceVal;
                    persistenceSlider.value = (float)cyb.persistence;

                    critSlider.maxValue = maxCritVal;
                    critSlider.minValue = minCritVal;
                    critSlider.value = (float)cyb.criticalHit;

                    accuracySlider.maxValue = maxAccuracyVal;
                    accuracySlider.minValue = minAccuracyVal;
                    accuracySlider.value = (float)cyb.accuracy;

                    luckSlider.maxValue = maxLuckVal;
                    luckSlider.minValue = minLuckVal;
                    luckSlider.value = (float)cyb.luck;
                    healthVal.text = cyb.health.ToString();
                    attackVal.text = cyb.attack.ToString("F1");
                    speedVal.text = cyb.speed.ToString("F1");
                    persistenceVal.text = cyb.persistence.ToString("F1");
                    critVal.text = cyb.criticalHit.ToString("F1");
                    accuracyVal.text = cyb.accuracy.ToString("F1");
                    luckVal.text = cyb.luck.ToString("F1");
                    stress.text = cyb.stressPoint.ToString();
                    energy.text = cyb.energy.ToString();
                    lifePoints.text = cyb.lifePoint.ToString();
                    nameText.text = cyb.name;
                    int purity = 0;
                    Debug.Log(cyb.trait.bodyParts.vest);
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    purity += 2;
                    purityText.text = purity.ToString() + "/5";


                    CloseeAllBackgrounds();
                    switch (cyb.trait.@class)
                    {
                        case "Aviator":
                            nameText.color = new Color32(38, 253, 221, 255);
                            aviatorBg.gameObject.SetActive(true);
                            break;
                        case "Warrior":
                            warriorBg.gameObject.SetActive(true);
                            nameText.color = Color.green;
                            break;
                        case "Tactician":
                            tacticianBg.gameObject.SetActive(true);
                            nameText.color = Color.white;
                            break;
                        case "Marine":
                            marinesBg.gameObject.SetActive(true);
                            nameText.color = Color.yellow;
                            break;
                        case "Brawler":
                            brawlerBg.gameObject.SetActive(true);
                            nameText.color = new Color32(253, 116, 2, 255);
                            break;
                    }

                    NetworkingManager nm = NetworkingManager.instance;

                    nm.SetCyborgPfp(originPlanetImg,
                                  neckImg,
                                  bodyImg,
                                  jawImg,
                                  vestImg,
                                  helmetImg,
                                  eyeImg,
                                  cyb.trait.bodyParts.originPlanet.name,
                                  cyb.trait.bodyParts.gender,
                                  cyb.trait.bodyParts.vest,
                                  cyb.trait.bodyParts.eye.name,
                                  cyb.trait.bodyParts.neck.name,
                                  cyb.trait.bodyParts.skin,
                                  cyb.rank);
                }
            }
        }
        else if(NetworkingManager.instance.isWager)
        {
            _id = id;
            foreach (MineN mine in NetworkingManager.instance.wwr.simulation.participant.mine)
            {
                if(mine.id == id)
                {
                    MineN cyb = mine;
                    float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
                    float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
                    float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
                    float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
                    float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
                    float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
                    float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
                    float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
                    float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
                    float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
                    float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
                    float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
                    float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
                    float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


                    minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
                    maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
                    minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
                    maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
                    minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
                    maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
                    minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
                    maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
                    minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
                    maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
                    minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
                    maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
                    minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
                    maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

                    healthSlider.maxValue = maxHealthVal;
                    healthSlider.minValue = minHealthVal;
                    healthSlider.value = cyb.health;

                    attackSlider.maxValue = maxAttackVal;
                    attackSlider.minValue = minAttackVal;
                    attackSlider.value = (float)cyb.attack;

                    speedSlider.maxValue = maxSpeedVal;
                    speedSlider.minValue = minSpeedVal;
                    speedSlider.value = (float)cyb.speed;

                    persistenceSlider.maxValue = maxPersistenceVal;
                    persistenceSlider.minValue = minPersistenceVal;
                    persistenceSlider.value = (float)cyb.persistence;

                    critSlider.maxValue = maxCritVal;
                    critSlider.minValue = minCritVal;
                    critSlider.value = (float)cyb.criticalHit;

                    accuracySlider.maxValue = maxAccuracyVal;
                    accuracySlider.minValue = minAccuracyVal;
                    accuracySlider.value = (float)cyb.accuracy;

                    luckSlider.maxValue = maxLuckVal;
                    luckSlider.minValue = minLuckVal;
                    luckSlider.value = (float)cyb.luck;
                    healthVal.text = cyb.health.ToString();
                    attackVal.text = cyb.attack.ToString("F1");
                    speedVal.text = cyb.speed.ToString("F1");
                    persistenceVal.text = cyb.persistence.ToString("F1");
                    critVal.text = cyb.criticalHit.ToString("F1");
                    accuracyVal.text = cyb.accuracy.ToString("F1");
                    luckVal.text = cyb.luck.ToString("F1");
                    stress.text = cyb.stressPoint.ToString();
                    energy.text = cyb.energy.ToString();
                    lifePoints.text = cyb.lifePoint.ToString();
                    nameText.text = cyb.name;
                    int purity = 0;
                    Debug.Log(cyb.trait.bodyParts.vest);
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    purity += 2;
                    purityText.text = purity.ToString() + "/5";


                    CloseeAllBackgrounds();
                    switch (cyb.trait.@class)
                    {
                        case "Aviator":
                            nameText.color = new Color32(38, 253, 221, 255);
                            aviatorBg.gameObject.SetActive(true);
                            break;
                        case "Warrior":
                            warriorBg.gameObject.SetActive(true);
                            nameText.color = Color.green;
                            break;
                        case "Tactician":
                            tacticianBg.gameObject.SetActive(true);
                            nameText.color = Color.white;
                            break;
                        case "Marine":
                            marinesBg.gameObject.SetActive(true);
                            nameText.color = Color.yellow;
                            break;
                        case "Brawler":
                            brawlerBg.gameObject.SetActive(true);
                            nameText.color = new Color32(253, 116, 2, 255);
                            break;
                    }





                    NetworkingManager nm = NetworkingManager.instance;

                    nm.SetCyborgPfp(originPlanetImg,
                                  neckImg,
                                  bodyImg,
                                  jawImg,
                                  vestImg,
                                  helmetImg,
                                  eyeImg,
                                  cyb.trait.bodyParts.originPlanet.name,
                                  cyb.trait.bodyParts.gender,
                                  cyb.trait.bodyParts.vest,
                                  cyb.trait.bodyParts.eye.name,
                                  cyb.trait.bodyParts.neck.name,
                                  cyb.trait.bodyParts.skin,
                                  cyb.rank);
                }    
            }
            foreach (LootN loot in NetworkingManager.instance.wwr.simulation.participant.loot)
            {
                if (loot.id == id)
                {

                    LootN cyb = loot;
                    float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
                    float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
                    float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
                    float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
                    float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
                    float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
                    float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
                    float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
                    float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
                    float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
                    float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
                    float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
                    float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
                    float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


                    minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
                    maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
                    minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
                    maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
                    minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
                    maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
                    minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
                    maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
                    minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
                    maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
                    minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
                    maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
                    minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
                    maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

                    healthSlider.maxValue = maxHealthVal;
                    healthSlider.minValue = minHealthVal;
                    healthSlider.value = cyb.health;

                    attackSlider.maxValue = maxAttackVal;
                    attackSlider.minValue = minAttackVal;
                    attackSlider.value = (float)cyb.attack;

                    speedSlider.maxValue = maxSpeedVal;
                    speedSlider.minValue = minSpeedVal;
                    speedSlider.value = (float)cyb.speed;

                    persistenceSlider.maxValue = maxPersistenceVal;
                    persistenceSlider.minValue = minPersistenceVal;
                    persistenceSlider.value = (float)cyb.persistence;

                    critSlider.maxValue = maxCritVal;
                    critSlider.minValue = minCritVal;
                    critSlider.value = (float)cyb.criticalHit;

                    accuracySlider.maxValue = maxAccuracyVal;
                    accuracySlider.minValue = minAccuracyVal;
                    accuracySlider.value = (float)cyb.accuracy;

                    luckSlider.maxValue = maxLuckVal;
                    luckSlider.minValue = minLuckVal;
                    luckSlider.value = (float)cyb.luck;
                    healthVal.text = cyb.health.ToString();
                    attackVal.text = cyb.attack.ToString("F1");
                    speedVal.text = cyb.speed.ToString("F1");
                    persistenceVal.text = cyb.persistence.ToString("F1");
                    critVal.text = cyb.criticalHit.ToString("F1");
                    accuracyVal.text = cyb.accuracy.ToString("F1");
                    luckVal.text = cyb.luck.ToString("F1");
                    stress.text = cyb.stressPoint.ToString();
                    energy.text = cyb.energy.ToString();
                    lifePoints.text = cyb.lifePoint.ToString();
                    nameText.text = cyb.name;
                    int purity = 0;
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    purity += 2;
                    purityText.text = purity.ToString() + "/5";


                    CloseeAllBackgrounds();
                    switch (cyb.trait.@class)
                    {
                        case "Aviator":
                            nameText.color = new Color32(38, 253, 221, 255);
                            aviatorBg.gameObject.SetActive(true);
                            break;
                        case "Warrior":
                            warriorBg.gameObject.SetActive(true);
                            nameText.color = Color.green;
                            break;
                        case "Tactician":
                            tacticianBg.gameObject.SetActive(true);
                            nameText.color = Color.white;
                            break;
                        case "Marine":
                            marinesBg.gameObject.SetActive(true);
                            nameText.color = Color.yellow;
                            break;
                        case "Brawler":
                            brawlerBg.gameObject.SetActive(true);
                            nameText.color = new Color32(253, 116, 2, 255);
                            break;
                    }





                    NetworkingManager nm = NetworkingManager.instance;

                    nm.SetCyborgPfp(originPlanetImg,
                                  neckImg,
                                  bodyImg,
                                  jawImg,
                                  vestImg,
                                  helmetImg,
                                  eyeImg,
                                  cyb.trait.bodyParts.originPlanet.name,
                                  cyb.trait.bodyParts.gender,
                                  cyb.trait.bodyParts.vest,
                                  cyb.trait.bodyParts.eye.name,
                                  cyb.trait.bodyParts.neck.name,
                                  cyb.trait.bodyParts.skin,
                                  cyb.rank);



                }
            }
        }
        else
        {
            _id = id;
            foreach (MineCyborgN mine in BattleHandler.instance.battleSimulation.result.mineCyborgs)
            {
                if (mine.id == id)
                {
                    MineCyborgN cyb = mine;
                    float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
                    float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
                    float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
                    float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
                    float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
                    float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
                    float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
                    float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
                    float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
                    float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
                    float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
                    float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
                    float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
                    float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


                    minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
                    maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
                    minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
                    maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
                    minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
                    maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
                    minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
                    maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
                    minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
                    maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
                    minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
                    maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
                    minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
                    maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

                    healthSlider.maxValue = maxHealthVal;
                    healthSlider.minValue = minHealthVal;
                    healthSlider.value = cyb.health;

                    attackSlider.maxValue = maxAttackVal;
                    attackSlider.minValue = minAttackVal;
                    attackSlider.value = (float)cyb.attack;

                    speedSlider.maxValue = maxSpeedVal;
                    speedSlider.minValue = minSpeedVal;
                    speedSlider.value = (float)cyb.speed;

                    persistenceSlider.maxValue = maxPersistenceVal;
                    persistenceSlider.minValue = minPersistenceVal;
                    persistenceSlider.value = (float)cyb.persistence;

                    critSlider.maxValue = maxCritVal;
                    critSlider.minValue = minCritVal;
                    critSlider.value = (float)cyb.criticalHit;

                    accuracySlider.maxValue = maxAccuracyVal;
                    accuracySlider.minValue = minAccuracyVal;
                    accuracySlider.value = (float)cyb.accuracy;

                    luckSlider.maxValue = maxLuckVal;
                    luckSlider.minValue = minLuckVal;
                    luckSlider.value = (float)cyb.luck;
                    healthVal.text = cyb.health.ToString();
                    attackVal.text = cyb.attack.ToString("F1");
                    speedVal.text = cyb.speed.ToString("F1");
                    persistenceVal.text = cyb.persistence.ToString("F1");
                    critVal.text = cyb.criticalHit.ToString("F1");
                    accuracyVal.text = cyb.accuracy.ToString("F1");
                    luckVal.text = cyb.luck.ToString("F1");
                    stress.text = cyb.stressPoint.ToString();
                    energy.text = cyb.energy.ToString();
                    lifePoints.text = cyb.lifePoint.ToString();
                    nameText.text = cyb.name;
                    int purity = 0;
                    Debug.Log(cyb.trait.bodyParts.vest);
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    purity += 2;
                    purityText.text = purity.ToString() + "/5";


                    CloseeAllBackgrounds();
                    switch (cyb.trait.@class)
                    {
                        case "Aviator":
                            nameText.color = new Color32(38, 253, 221, 255);
                            aviatorBg.gameObject.SetActive(true);
                            break;
                        case "Warrior":
                            warriorBg.gameObject.SetActive(true);
                            nameText.color = Color.green;
                            break;
                        case "Tactician":
                            tacticianBg.gameObject.SetActive(true);
                            nameText.color = Color.white;
                            break;
                        case "Marine":
                            marinesBg.gameObject.SetActive(true);
                            nameText.color = Color.yellow;
                            break;
                        case "Brawler":
                            brawlerBg.gameObject.SetActive(true);
                            nameText.color = new Color32(253, 116, 2, 255);
                            break;
                    }





                    NetworkingManager nm = NetworkingManager.instance;

                    nm.SetCyborgPfp(originPlanetImg,
                                  neckImg,
                                  bodyImg,
                                  jawImg,
                                  vestImg,
                                  helmetImg,
                                  eyeImg,
                                  cyb.trait.bodyParts.originPlanet.name,
                                  cyb.trait.bodyParts.gender,
                                  cyb.trait.bodyParts.vest,
                                  cyb.trait.bodyParts.eye.name,
                                  cyb.trait.bodyParts.neck.name,
                                  cyb.trait.bodyParts.skin,
                                  cyb.rank);




                }
            }
            foreach (LootCyborgN loot in BattleHandler.instance.battleSimulation.result.lootCyborgs)
            {
                if (loot.id == id)
                {

                    LootCyborgN cyb = loot;
                    float minHealthVal = maxMinCalc(cyb.rank, cyb.level, "minHealth");
                    float maxHealthVal = maxMinCalc(cyb.rank, cyb.level, "maxHealth");
                    float minAttackVal = maxMinCalc(cyb.rank, cyb.level, "minAttack");
                    float maxAttackVal = maxMinCalc(cyb.rank, cyb.level, "maxAttack");
                    float minSpeedVal = maxMinCalc(cyb.rank, cyb.level, "minSpeed");
                    float maxSpeedVal = maxMinCalc(cyb.rank, cyb.level, "maxSpeed");
                    float minPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "minPersistence");
                    float maxPersistenceVal = maxMinCalc(cyb.rank, cyb.level, "maxPersistence");
                    float minCritVal = maxMinCalc(cyb.rank, cyb.level, "minCrit");
                    float maxCritVal = maxMinCalc(cyb.rank, cyb.level, "maxCrit");
                    float minAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "minAccuracy");
                    float maxAccuracyVal = maxMinCalc(cyb.rank, cyb.level, "maxAccuracy");
                    float minLuckVal = maxMinCalc(cyb.rank, cyb.level, "minLuck");
                    float maxLuckVal = maxMinCalc(cyb.rank, cyb.level, "maxLuck");


                    minHealth.text = "Min " + $"({minHealthVal.ToString("F1")})";
                    maxHealth.text = "Max " + $"({maxHealthVal.ToString("F1")})";
                    minAttack.text = "Min " + $"({minAttackVal.ToString("F1")})";
                    maxAttack.text = "Max " + $"({maxAttackVal.ToString("F1")})";
                    minSpeed.text = "Min " + $"({minSpeedVal.ToString("F1")})";
                    maxSpeed.text = "Max " + $"({maxSpeedVal.ToString("F1")})";
                    minPersistence.text = "Min " + $"({minPersistenceVal.ToString("F1")})";
                    maxPersistence.text = "Max " + $"({maxPersistenceVal.ToString("F1")})";
                    minCrit.text = "Min " + $"({minCritVal.ToString("F1")})";
                    maxCrit.text = "Max " + $"({maxCritVal.ToString("F1")})";
                    minAccuracy.text = "Min " + $"({minAccuracyVal.ToString("F1")})";
                    maxAccuracy.text = "Max " + $"({maxAccuracyVal.ToString("F1")})";
                    minLuck.text = "Min " + $"({minLuckVal.ToString("F1")})";
                    maxLuck.text = "Max " + $"({maxLuckVal.ToString("F1")})";

                    healthSlider.maxValue = maxHealthVal;
                    healthSlider.minValue = minHealthVal;
                    healthSlider.value = cyb.health;

                    attackSlider.maxValue = maxAttackVal;
                    attackSlider.minValue = minAttackVal;
                    attackSlider.value = (float)cyb.attack;

                    speedSlider.maxValue = maxSpeedVal;
                    speedSlider.minValue = minSpeedVal;
                    speedSlider.value = (float)cyb.speed;

                    persistenceSlider.maxValue = maxPersistenceVal;
                    persistenceSlider.minValue = minPersistenceVal;
                    persistenceSlider.value = (float)cyb.persistence;

                    critSlider.maxValue = maxCritVal;
                    critSlider.minValue = minCritVal;
                    critSlider.value = (float)cyb.criticalHit;

                    accuracySlider.maxValue = maxAccuracyVal;
                    accuracySlider.minValue = minAccuracyVal;
                    accuracySlider.value = (float)cyb.accuracy;

                    luckSlider.maxValue = maxLuckVal;
                    luckSlider.minValue = minLuckVal;
                    luckSlider.value = (float)cyb.luck;
                    healthVal.text = cyb.health.ToString();
                    attackVal.text = cyb.attack.ToString("F1");
                    speedVal.text = cyb.speed.ToString("F1");
                    persistenceVal.text = cyb.persistence.ToString("F1");
                    critVal.text = cyb.criticalHit.ToString("F1");
                    accuracyVal.text = cyb.accuracy.ToString("F1");
                    luckVal.text = cyb.luck.ToString("F1");
                    stress.text = cyb.stressPoint.ToString();
                    energy.text = cyb.energy.ToString();
                    lifePoints.text = cyb.lifePoint.ToString();
                    nameText.text = cyb.name;
                    int purity = 0;
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest))
                    {
                        purity += 1;
                    }
                    purity += 2;
                    purityText.text = purity.ToString() + "/5";


                    CloseeAllBackgrounds();
                    switch (cyb.trait.@class)
                    {
                        case "Aviator":
                            nameText.color = new Color32(38, 253, 221, 255);
                            aviatorBg.gameObject.SetActive(true);
                            break;
                        case "Warrior":
                            warriorBg.gameObject.SetActive(true);
                            nameText.color = Color.green;
                            break;
                        case "Tactician":
                            tacticianBg.gameObject.SetActive(true);
                            nameText.color = Color.white;
                            break;
                        case "Marine":
                            marinesBg.gameObject.SetActive(true);
                            nameText.color = Color.yellow;
                            break;
                        case "Brawler":
                            brawlerBg.gameObject.SetActive(true);
                            nameText.color = new Color32(253, 116, 2, 255);
                            break;
                    }





                    NetworkingManager nm = NetworkingManager.instance;

                    nm.SetCyborgPfp(originPlanetImg,
                                  neckImg,
                                  bodyImg,
                                  jawImg,
                                  vestImg,
                                  helmetImg,
                                  eyeImg,
                                  cyb.trait.bodyParts.originPlanet.name,
                                  cyb.trait.bodyParts.gender,
                                  cyb.trait.bodyParts.vest,
                                  cyb.trait.bodyParts.eye.name,
                                  cyb.trait.bodyParts.neck.name,
                                  cyb.trait.bodyParts.skin,
                                  cyb.rank);



                }
            }



        }
        if (quirkScrollViewContent.activeInHierarchy)
        {
            //Updating if cyborg changed while showing
            OnClickQnM();
        }
        if (_id == 0 && !NetworkingManager.instance.isWager)
        {
            if (rankValText.gameObject.activeInHierarchy)
            {
                //Updating if cyborg changed while showing
                OnClickLevelUp();
            }
        }

        if (genderVal.gameObject.activeInHierarchy)
        {
            //Updating if cyborg changed while showing
            OnClickBodyParts();
        }
    }

    public void OnClickViewStats()
    {
        viewStats.SetActive(true);
        bodyParts.SetActive(false);
        ShowSelectedCyborg(_id);
    }
    public void OnClickBodyParts()
    {
        if (_id == 0)
        {
            Cyborg cyb = GameManager.instance.inventorySelectedCyborg;
            viewStats.SetActive(false);
            bodyParts.SetActive(true);
            genderVal.text = cyb.trait.bodyParts.gender;
            neckVal.text = cyb.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name);
            //neckVal.color = NetworkingManager.instance.GetColorOfNeck(cyb.trait.bodyParts.neck.name);
            eyesVal.text = cyb.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name);
            //eyesVal.color = NetworkingManager.instance.GetColorOfEye(cyb.trait.bodyParts.eye.name);
            originVal.text = cyb.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name);
            //originVal.color = NetworkingManager.instance.GetColorOfPlanet(cyb.trait.bodyParts.originPlanet.name);
            vestVal.text = cyb.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest);
            //vestVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.vest);
            helmVal.text = cyb.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.helmet);
            //helmVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.helmet);
            colorVal.text = cyb.trait.bodyParts.skin;
        }
        if (NetworkingManager.instance.mineOrLoot == "mine")
        {
            if (BattleHandler.instance != null)
            {
                foreach (MineCyborgN mine in BattleHandler.instance.mineResponse.result.mineCyborgs)
                {
                    if (mine.id == _id)
                    {

                        MineCyborgN cyb = mine;
                        viewStats.SetActive(false);
                        bodyParts.SetActive(true);
                        genderVal.text = cyb.trait.bodyParts.gender;
                        neckVal.text = cyb.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name);
                        //neckVal.color = NetworkingManager.instance.GetColorOfNeck(cyb.trait.bodyParts.neck.name);
                        eyesVal.text = cyb.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name);
                        //eyesVal.color = NetworkingManager.instance.GetColorOfEye(cyb.trait.bodyParts.eye.name);
                        originVal.text = cyb.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                        //originVal.color = NetworkingManager.instance.GetColorOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                        vestVal.text = cyb.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest);
                        //vestVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.vest);
                        helmVal.text = cyb.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.helmet);
                        //helmVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.helmet);
                        colorVal.text = cyb.trait.bodyParts.skin;
                    }
                }
            }

        }
        else if (NetworkingManager.instance.mineOrLoot == "view")
        {
            foreach (MineCyborgN mine in NetworkingManager.instance.mineSimData.mineCyborgs)
            {
                if (mine.id == _id)
                {

                    MineCyborgN cyb = mine;
                    viewStats.SetActive(false);
                    bodyParts.SetActive(true);
                    genderVal.text = cyb.trait.bodyParts.gender;
                    neckVal.text = cyb.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name);
                    //neckVal.color = NetworkingManager.instance.GetColorOfNeck(cyb.trait.bodyParts.neck.name);
                    eyesVal.text = cyb.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name);
                    //eyesVal.color = NetworkingManager.instance.GetColorOfEye(cyb.trait.bodyParts.eye.name);
                    originVal.text = cyb.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                    //originVal.color = NetworkingManager.instance.GetColorOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                    vestVal.text = cyb.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest);
                    //vestVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.vest);
                    helmVal.text = cyb.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.helmet);
                    //helmVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.helmet);
                    colorVal.text = cyb.trait.bodyParts.skin;
                }
            }
        }
        else
        {
            if (BattleHandler.instance != null)
            {
                foreach (MineCyborgN mine in BattleHandler.instance.battleSimulation.result.mineCyborgs)
                {
                    if (mine.id == _id)
                    {

                        MineCyborgN cyb = mine;
                        viewStats.SetActive(false);
                        bodyParts.SetActive(true);
                        genderVal.text = cyb.trait.bodyParts.gender;
                        neckVal.text = cyb.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name);
                        //neckVal.color = NetworkingManager.instance.GetColorOfNeck(cyb.trait.bodyParts.neck.name);
                        eyesVal.text = cyb.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name);
                        //eyesVal.color = NetworkingManager.instance.GetColorOfEye(cyb.trait.bodyParts.eye.name);
                        originVal.text = cyb.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                        //originVal.color = NetworkingManager.instance.GetColorOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                        vestVal.text = cyb.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest);
                        //vestVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.vest);
                        helmVal.text = cyb.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.helmet);
                        //helmVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.helmet);
                        colorVal.text = cyb.trait.bodyParts.skin;
                    }
                }
                foreach (LootCyborgN loot in BattleHandler.instance.battleSimulation.result.lootCyborgs)
                {
                    if (loot.id == _id)
                    {
                        LootCyborgN cyb = loot;
                        viewStats.SetActive(false);
                        bodyParts.SetActive(true);
                        genderVal.text = cyb.trait.bodyParts.gender;
                        neckVal.text = cyb.trait.bodyParts.neck.name + " " + NetworkingManager.instance.GetInitialOfNeck(cyb.trait.bodyParts.neck.name);
                        //neckVal.color = NetworkingManager.instance.GetColorOfNeck(cyb.trait.bodyParts.neck.name);
                        eyesVal.text = cyb.trait.bodyParts.eye.name + " " + NetworkingManager.instance.GetInitialOfEye(cyb.trait.bodyParts.eye.name);
                        //eyesVal.color = NetworkingManager.instance.GetColorOfEye(cyb.trait.bodyParts.eye.name);
                        originVal.text = cyb.trait.bodyParts.originPlanet.name + " " + NetworkingManager.instance.GetInitialOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                        //originVal.color = NetworkingManager.instance.GetColorOfPlanet(cyb.trait.bodyParts.originPlanet.name);
                        vestVal.text = cyb.trait.bodyParts.vest + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.vest);
                        //vestVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.vest);
                        helmVal.text = cyb.trait.bodyParts.helmet + " " + NetworkingManager.instance.GetInitialOfHelmetVest(cyb.trait.bodyParts.helmet);
                        //helmVal.color = NetworkingManager.instance.GetColorOfHelmetVest(cyb.trait.bodyParts.helmet);
                        colorVal.text = cyb.trait.bodyParts.skin;
                    }
                }
            }

        }



    }

    public void OnClickQnM()
    {
        if (_id == 0)
        {
            Cyborg cyb = GameManager.instance.inventorySelectedCyborg;
            foreach (Transform t in quirkScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            foreach (QuirkN quirk in cyb.quirks)
            {
                if (quirk.attributes.Count > 0)
                {
                    for (int k = 0; k < quirk.attributes.Count; k++)
                    {
                        GameObject quirkPref = Instantiate(inventoryQuirkPrefab, quirkScrollViewContent.transform);
                        string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                        quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                    }
                }
            }
        }
        else if (NetworkingManager.instance.mineOrLoot == "mine")
        {
            foreach (MineCyborgN mine in BattleHandler.instance.mineResponse.result.mineCyborgs)
            {
                if (mine.id == _id)
                {
                    Debug.Log("Mine Quirks");
                    MineCyborgN cyb = mine;
                    foreach (Transform t in quirkScrollViewContent.transform)
                    {
                        GameObject.Destroy(t.gameObject);
                    }
                    foreach (QuirkN quirk in cyb.quirks)
                    {
                        if (quirk.attributes.Count > 0)
                        {
                            for (int k = 0; k < quirk.attributes.Count; k++)
                            {
                                GameObject quirkPref = Instantiate(inventoryQuirkPrefab, quirkScrollViewContent.transform);
                                string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                                quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                            }
                        }
                    }
                }
            }
        }
        else if (NetworkingManager.instance.mineOrLoot == "view")
        {
            foreach (MineCyborgN mine in NetworkingManager.instance.mineSimData.mineCyborgs)
            {
                if (mine.id == _id)
                {
                    Debug.Log("Mine Quirks");
                    MineCyborgN cyb = mine;
                    foreach (Transform t in quirkScrollViewContent.transform)
                    {
                        GameObject.Destroy(t.gameObject);
                    }
                    foreach (QuirkN quirk in cyb.quirks)
                    {
                        if (quirk.attributes.Count > 0)
                        {
                            for (int k = 0; k < quirk.attributes.Count; k++)
                            {
                                GameObject quirkPref = Instantiate(inventoryQuirkPrefab, quirkScrollViewContent.transform);
                                string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                                quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                            }
                        }
                    }
                }
            }
        }
        else
        {
            foreach (MineCyborgN mine in BattleHandler.instance.battleSimulation.result.mineCyborgs)
            {
                if (mine.id == _id)
                {
                    Debug.Log("Mine Quirks");
                    MineCyborgN cyb = mine;
                    foreach (Transform t in quirkScrollViewContent.transform)
                    {
                        GameObject.Destroy(t.gameObject);
                    }
                    foreach (QuirkN quirk in cyb.quirks)
                    {
                        if (quirk.attributes.Count > 0)
                        {
                            for (int k = 0; k < quirk.attributes.Count; k++)
                            {
                                GameObject quirkPref = Instantiate(inventoryQuirkPrefab, quirkScrollViewContent.transform);
                                string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                                quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                            }
                        }
                    }
                }
            }
            foreach (LootCyborgN loot in BattleHandler.instance.battleSimulation.result.lootCyborgs)
            {
                if (loot.id == _id)
                {
                    LootCyborgN cyb = loot;
                    foreach (Transform t in quirkScrollViewContent.transform)
                    {
                        GameObject.Destroy(t.gameObject);
                    }
                    foreach (QuirkN quirk in cyb.quirks)
                    {
                        if (quirk.attributes.Count > 0)
                        {
                            for (int k = 0; k < quirk.attributes.Count; k++)
                            {
                                GameObject quirkPref = Instantiate(inventoryQuirkPrefab, quirkScrollViewContent.transform);
                                string quirkEffect = NetworkingManager.instance.GetQuirk(quirk.type, quirk.attributes[k].attribute, quirk.attributes[k].effect);
                                quirkPref.GetComponentInChildren<TMP_Text>().text = quirkEffect;

                            }
                        }
                    }
                }
            }
        }
    }

    public void OnClickLevelUp()
    {
        //StartCoroutine(NetworkingManager.instance.GetServerTime());
        Cyborg cyb = GameManager.instance.inventorySelectedCyborg;
        rankUpBtn.SetActive(true);
        claimBtn.SetActive(false);
        long prevRankupTimeStamp = 0;
        for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
        {
            if (NetworkingManager.instance.cyborgList.result[i].cyborg.id == GameManager.instance.inventorySelectedCyborg.id)
            {
                prevRankupTimeStamp = NetworkingManager.instance.cyborgList.result[i].prevRankupTimeStamp;
            }
        }
        rankValText.text = cyb.rank;
        LevelValText.text = cyb.level.ToString() + "/10";
        XPValText.text = cyb.xp.ToString() + "/" + XPReqCalc(cyb.rank);
        //rankUpPointsText.text = RankUpPointsReqCalc(cyb.rank).ToString();
        SGF1Val.text = SGF1ReqCalc(cyb.rank).ToString();
        if (NetworkingManager.instance.gm.gameMode)
        {
            SGFTitle.text = "$SGF2 :";
        }
        else
        {
            SGFTitle.text = "$SGF1 :";
        }
        //Debug.Log("Prev rank time stamp " + prevRankupTimeStamp);
        //Debug.Log(NetworkingManager.instance.st.timestamp);
        if (prevRankupTimeStamp != 0)
        {
            long timePassed = NetworkingManager.instance.st.timestamp / 1000 - prevRankupTimeStamp / 1000;
            //Debug.Log("Time passed " + timePassed);
            float time = timeCalc(cyb.rank) - (float)timePassed;
            //Debug.Log("Time " + time);
            if (cyb.status == "Rankup")
            {
                rankUpLockedOverlay.SetActive(true);
                rankUpLockedOverlay.GetComponentInChildren<CountdownTimer>().timerStart = time;
                if (time <= 0)
                {
                    speedUpBtn.SetActive(false);
                    claimBtn.SetActive(true);
                    rankUpLockedOverlay.GetComponentInChildren<CountdownTimer>().timerStart = 0;

                }
            }
            else
            {
                rankUpLockedOverlay.SetActive(false);
            }
        }


    }

    public void OnClickRankUp()
    {
        if (GameManager.instance.inventorySelectedCyborg.status != "Idle")
        {
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "This Cyborg is not Idle";
        }
        else if (NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF2 / 1000000000 < SGF1ReqCalc(GameManager.instance.inventorySelectedCyborg.rank))
        {
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF2 to Rank Up";
        }
        else if (!NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF1 / 1000000000 < SGF1ReqCalc(GameManager.instance.inventorySelectedCyborg.rank))
        {
            //Not enough sgf1 popup

            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1 to Rank Up";
        }
        //else if (NetworkingManager.instance.userDetails.result.rankupPoint < RankUpPointsReqCalc(GameManager.instance.inventorySelectedCyborg.rank))
        //{
        //    //Not enough rankup popup

        //    CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
        //    CanvasHandler.instance.failCasePopup.SetActive(true);
        //    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
        //    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $RP to Rank Up";
        //}
        else if (GameManager.instance.inventorySelectedCyborg.xp < XPReqCalc(GameManager.instance.inventorySelectedCyborg.rank))
        {
            //Not enough xp popup

            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Your cyborg doesn't have enough XP to Rank Up";
        }
        else if (GameManager.instance.inventorySelectedCyborg.rank == "General")
        {
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Your cyborg is the max rank";
        }
        else
        {
            CanvasHandler.instance.inventoryPopUpCanvas.SetActive(true);
            CanvasHandler.instance.RankUpPopUp.SetActive(true);
            if (NetworkingManager.instance.gm.gameMode)
            {
                CanvasHandler.instance.RankUpPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"You have <b>{NetworkingManager.instance.userDetails.result.SGF2 / 1000000000}</b> $SGF2, You can increase your rank by spending {SGF1ReqCalc(GameManager.instance.inventorySelectedCyborg.rank)} $SGF2.";
            }
            else
            {
                CanvasHandler.instance.RankUpPopUp.GetComponent<PopupCanvas>().descriptionText.text = $"You have <b>{NetworkingManager.instance.userDetails.result.SGF1 / 1000000000}</b> $SGF1, You can increase your rank by spending {SGF1ReqCalc(GameManager.instance.inventorySelectedCyborg.rank)} $SGF1.";
            }

            StartCoroutine(NetworkingManager.instance.GetServerTime());
        }

    }

    public void OnClickSpeedUp()
    {
        CanvasHandler.instance.inventoryPopUpCanvas.SetActive(true);
        CanvasHandler.instance.rankUpSpeedUp.SetActive(true);
        long prevRankupTimeStamp = 0;
        for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
        {
            if (NetworkingManager.instance.cyborgList.result[i].cyborg.id == GameManager.instance.inventorySelectedCyborg.id)
            {
                prevRankupTimeStamp = NetworkingManager.instance.cyborgList.result[i].prevRankupTimeStamp;
            }
        }
        lockDuration = timeCalc(GameManager.instance.inventorySelectedCyborg.rank);
        double timeRemaining = ((prevRankupTimeStamp / 1000 / 60) + (lockDuration / 60) - (NetworkingManager.instance.st.timestamp / 1000 / 60));
        if (NetworkingManager.instance.gm.gameMode)
        {
            CanvasHandler.instance.rankUpSpeedUp.GetComponent<PopupCanvas>().descriptionText.text = $"You can Speed Up the rank up process of {GameManager.instance.inventorySelectedCyborg.name} by paying {0.017 * timeRemaining} $SGF2 ";
        }
        else
        {
            CanvasHandler.instance.rankUpSpeedUp.GetComponent<PopupCanvas>().descriptionText.text = $"You can Speed Up the rank up process of {GameManager.instance.inventorySelectedCyborg.name} by paying {0.017 * timeRemaining} $SGF1 ";
        }


    }



    public void OnClickClaim(bool speedup)
    {
        string id = "";
        for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
        {
            if (GameManager.instance.inventorySelectedCyborg.id == NetworkingManager.instance.cyborgList.result[i].cyborg.id)
            {
                id = NetworkingManager.instance.cyborgList.result[i].id;
            }
        }
        StartCoroutine(NetworkingManager.instance.ClaimRankUp(id, speedup));
        StartCoroutine(NetworkingManager.instance.GetServerTime());
    }

    public void CloseeAllBackgrounds()
    {
        aviatorBg.gameObject.SetActive(false);
        warriorBg.gameObject.SetActive(false);
        tacticianBg.gameObject.SetActive(false);
        brawlerBg.gameObject.SetActive(false);
        marinesBg.gameObject.SetActive(false);

    }



    int RankUpPointsReqCalc(string rank)
    {
        switch (rank)
        {
            case "Corporal": return 80;
            case "Sergeant": return 200;
            case "Major": return 320;
            case "Lieutenant": return 440;
            case "Brigadier": return 560;
            case "General": return 0;
            default: return 0;
        }
    }

    int XPReqCalc(string rank)
    {
        switch (rank)
        {
            case "Corporal": return 3685;
            case "Sergeant": return 24455;
            case "Major": return 75710;
            case "Lieutenant": return 170850;
            case "Brigadier": return 323275;
            case "General": return 0;
            default: return 0;
        }
    }

    int SGF1ReqCalc(string rank)
    {
        switch (rank)
        {
            case "Corporal": return 3000;
            case "Sergeant": return 6000;
            case "Major": return 12000;
            case "Lieutenant": return 24000;
            case "Brigadier": return 36000;
            case "General": return 0;
            default: return 0;
        }
    }

    float timeCalc(string rank)
    {
        switch (rank)
        {
            case "Corporal": return 21630f;
            case "Sergeant": return 43230f;
            case "Major": return 64830f;
            case "Lieutenant": return 86430f;
            case "Brigadier": return 108030f;
            case "General": return 0f;
            default: return 0;
        }
    }

    float maxMinCalc(string rank, int level, string type)
    {
        if (rank == "Sergeant")
        {
            level += 10;
        }
        else if(rank == "Major")
        {
            level += 20;
        }
        else if(rank == "Lieutenant")
        {
            level += 30;
        }
        else if(rank == "Brigadier")
        {
            level += 40;
        }
        else if(rank == "General")
        {
            level += 50;
        }
        float baseVal = 0.0f, diff = 0.0f;
        if(type == "maxHealth")
        {
            baseVal = 187.125f;
            diff = 9f;
        }
        else if(type == "minHealth")
        {
            baseVal = 23.71f;
            diff = 3f;
        }
        else if(type == "maxAttack")
        {
            baseVal = 23.53f;
            diff = 0.75f;
        }
        else if (type == "minAttack")
        {
            baseVal = 2.6628f;
            diff = 0.315f;
        }
        else if (type == "minAttack")
        {
            baseVal = 2.6628f;
            diff = 0.315f;
        }
        else if (type == "maxAccuracy")
        {
            baseVal = 84.942f;
            diff = 0.5148f;
        }
        else if (type == "minAccuracy")
        {
            baseVal = 48.555f;
            diff = 0.3652f;
        }
        else if (type == "maxCrit")
        {
            baseVal = 36.288f;
            diff = 1.092f;
        }
        else if (type == "minCrit")
        {
            baseVal = 1.2256f;
            diff = 0.28f;
        }
        else if (type == "maxSpeed")
        {
            baseVal = 46.98f;
            diff = 3.48f;
        }
        else if (type == "minSpeed")
        {
            baseVal = 0.814f;
            diff = 0.5198f;
        }
        else if (type == "maxLuck")
        {
            baseVal = 10.56f;
            diff = 0.32f;
        }
        else if (type == "minLuck")
        {
            baseVal = 0.544f;
            diff = 0.08f;
        }
        else if (type == "maxPersistence")
        {
            baseVal = 52.8272f;
            diff = 1.602f;
        }
        else if (type == "minPersistence")
        {
            baseVal = 1.302f;
            diff = 0.27f;
        }


        return (baseVal + (diff * level));

    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using UnityEngine.SceneManagement;
using TMPro;
using System;

public class BattleHandler : MonoBehaviour
{

    [SerializeField]
    public TextAsset jsonFile;
    public static BattleHandler instance;
    [SerializeField] GameObject mineWin, winScreen, claimBtn, demoPopup6, lossImage1, winImage1, greyBGPopup7, demoPopup1, skipButton, cyborgDetails;
    [SerializeField] public TMP_InputField activationInputField;
    public List<GameObject> mineBackRowList;
    public List<GameObject> mineFrontRowList;
    public List<GameObject> lootBackRowList;
    public List<GameObject> lootFrontRowList;
    public CyborgInventoryCard cic;

    public Texture placeHolderImage1, placeHolderImage2, placeHolderImage3;
    public Transform popupPrefab;
    public BattleSimulation battleSimulation;
    public MineResponse mineResponse;
    public DemoMineLossResp dmlr;
    public List<int> lootBackRow;
    public List<int> lootFrontRow;
    public List<int> mineBackRow;
    public List<int> mineFrontRow;
    SoundManager sm = SoundManager.instance;
    public bool isReplay = false, canCollectReward = false, skip = false;
    public GameObject mineVFX;
    [SerializeField] float seconds = 0f;
    List<int> brawlerCritHolder = new List<int>();
    bool isMine = false, battleEnded = false;
    public NetworkingManager nm;
    List<MineCyborgN> mineCyborgs = new List<MineCyborgN>();
    List<LootCyborgN> lootCyborgs = new List<LootCyborgN>();
    List<MineN> mineCyborgs2 = new List<MineN>();
    List<LootN> lootCyborgs2 = new List<LootN>();

    #region BattleLog Vars
    public GameObject mineBattleText, lootBattleText, battleLogTable, battleLogTableScrollViewContent, upperLogScrollViewContent, upperLogPrefab;
    public TMP_Text mineName, lootName, mineSpeed, lootSpeed;
    bool isOpen = false;
    public float scrollSpeedUpper = 10f, scrollSpeedTable = 10f;
    #endregion

    #region PostBattle References
    [SerializeField] TMP_Text leftUsername, rightUsername, rewardText, tokenText, victoryDefeatText, mineUsernameText, lootUsernameText, mineSpeedText, lootSpeedText, lossRewardText, lossTokenText, lootBoxNameText;
    [SerializeField] Image mineAvatar, lootAvatar;
    public List<PostBattleCyborg> leftCyborgs, rightCyborgs;
    [SerializeField] GameObject quirkPrefab, medalPrefab, qmScrollViewContent;
    public GameObject failPopup, activationPopup;
    #endregion


    private void Awake()
    {
        instance = this;
    }

    //Clicking the Cyborg Cards
    public void OnClickButtons(string position)
    {
        cyborgDetails.SetActive(true);
        Datum data = new Datum();
        //If is viewing a mine
        if (nm.mineOrLoot == "mine")
        {
            data = mineResponse.result;
        }
        else if (nm.mineOrLoot == "view")
        {
            data = nm.mineSimData;
        }
        if (nm.mineOrLoot == "mine" || nm.mineOrLoot == "view")
        {
            switch (position)
            {
                case "mf1":
                    cic.ShowSelectedCyborg(data.minePosition.frontRow[0]);
                    break;
                case "mf2":
                    cic.ShowSelectedCyborg(data.minePosition.frontRow[1]);
                    break;
                case "mf3":
                    cic.ShowSelectedCyborg(data.minePosition.frontRow[2]);
                    break;
                case "mb1":
                    cic.ShowSelectedCyborg(data.minePosition.backRow[0]);
                    break;
                case "mb2":
                    cic.ShowSelectedCyborg(data.minePosition.backRow[1]);
                    break;
                case "mb3":
                    cic.ShowSelectedCyborg(data.minePosition.backRow[2]);
                    break;
            }
        }
        else
        {
            if (position == "mf1")
            {
                cic.ShowSelectedCyborg(mineFrontRow[0]);
            }
            else if (position == "mf2")
            {
                cic.ShowSelectedCyborg(mineFrontRow[1]);
            }
            else if (position == "mf3")
            {
                cic.ShowSelectedCyborg(mineFrontRow[2]);
            }
            else if (position == "mb1")
            {
                cic.ShowSelectedCyborg(mineBackRow[0]);
            }
            else if (position == "mb2")
            {
                cic.ShowSelectedCyborg(mineBackRow[1]);
            }
            else if (position == "mb3")
            {
                cic.ShowSelectedCyborg(mineBackRow[2]);
            }
            else if (position == "lf1")
            {
                cic.ShowSelectedCyborg(lootFrontRow[0]);
            }
            else if (position == "lf2")
            {
                cic.ShowSelectedCyborg(lootFrontRow[1]);
            }
            else if (position == "lf3")
            {
                cic.ShowSelectedCyborg(lootFrontRow[2]);
            }
            else if (position == "lb1")
            {
                cic.ShowSelectedCyborg(lootBackRow[0]);
            }
            else if (position == "lb2")
            {
                cic.ShowSelectedCyborg(lootBackRow[1]);
            }
            else if (position == "lb3")
            {
                cic.ShowSelectedCyborg(lootBackRow[2]);
            }
        }

    }

    public void OnClickSpeedButton(float speed)
    {
        Time.timeScale = speed;
        sm.clickVfx.pitch = Time.timeScale;
        sm.mineVfx.pitch = Time.timeScale;
        sm.hitVfx.pitch = Time.timeScale;
        sm.dodgVfx.pitch = Time.timeScale;
        sm.missVfx.pitch = Time.timeScale;
        sm.stressIncVfx.pitch = Time.timeScale;
        sm.stressDecVfx.pitch = Time.timeScale;
        sm.aviatorCrit.pitch = Time.timeScale;
        sm.tacticianCrit.pitch = Time.timeScale;
        sm.marineCrit.pitch = Time.timeScale;
        sm.warriorCrit.pitch = Time.timeScale;
        sm.brawlerCrit.pitch = Time.timeScale;
        sm.brawlerCritLinger.pitch = Time.timeScale;
        sm.faint.pitch = Time.timeScale;
        sm.fleeSfx.pitch = Time.timeScale;
    }

    // Start is called before the first frame update
    void Start()
    {
        nm = NetworkingManager.instance;
        OnClickSpeedButton(1.5f);
        battleSimulation = nm.battleSimulation;
        mineResponse = nm.mineResponse;
        battleEnded = false;
        if (nm.isDemo)
        {
            if (nm.isLootWin)
            {
                dmlr = nm.dmlr2;
                PlaceMineTeam();
                PlaceLootTeam();
                StartCoroutine(SimulateBattle(dmlr.result.corePlay));
                mineUsernameText.text = "SG";
                mineName.text = "SG";
                lootUsernameText.text = nm.userDetails.result.username;
                lootName.text = nm.userDetails.result.username;

            }
            else
            {
                dmlr = nm.dmlr;
                PlaceMineTeam();
                //Debug.Log("Setting names");
                mineUsernameText.text = nm.userDetails.result.username;
                mineName.text = nm.userDetails.result.username;
                lootSpeedText.gameObject.SetActive(false);
                lootAvatar.gameObject.SetActive(false);
                lootUsernameText.text = "";
            }


        }
        else if (nm.isWager)
        {
            mineUsernameText.text = nm.wwr.simulation.mineUserName;
            lootUsernameText.text = "Stellar Galactics";
            mineName.text = nm.wwr.simulation.mineUserName;
            lootName.text = "Stellar Galactics";

            PlaceTeams();
            StartCoroutine(SimulateBattle(nm.wwr.simulation.corePlay));
        }
        else
        {
            if (nm.mineOrLoot == "loot")
            {
                mineUsernameText.text = battleSimulation.result.lootSimulation.mineUserName;
                lootUsernameText.text = battleSimulation.result.lootSimulation.lootUserName;
                mineName.text = battleSimulation.result.lootSimulation.mineUserName;
                lootName.text = battleSimulation.result.lootSimulation.lootUserName;

                PlaceTeams();
                StartCoroutine(SimulateBattle(battleSimulation.result.lootSimulation.corePlay));
            }
            else if (nm.mineOrLoot == "mine" || nm.mineOrLoot == "view")
            {
                mineName.text = battleSimulation.result.lootSimulation.mineUserName;
                lootName.text = "";
                sm.mineVfx.Play();
                lootUsernameText.gameObject.SetActive(false);
                lootSpeedText.gameObject.SetActive(false);
                lootAvatar.gameObject.SetActive(false);
                mineUsernameText.text = nm.userDetails.result.username;
                PlaceMineTeam();
            }

            if (nm.playerId == battleSimulation.result.minePlayerId)
            {
                isMine = true;
            }
        }
    }

    public void PlaceTeams()
    {
        if (nm.isWager)
        {
            lootBackRow = nm.wwr.simulation.gamePosition.loot.backRow;
            lootFrontRow = nm.wwr.simulation.gamePosition.loot.frontRow;
            mineBackRow = nm.wwr.simulation.gamePosition.mine.backRow;
            mineFrontRow = nm.wwr.simulation.gamePosition.mine.frontRow;
            mineCyborgs2 = nm.wwr.simulation.participant.mine;
            lootCyborgs2 = nm.wwr.simulation.participant.loot;
            double speedMine = 0;
            foreach (MineN mc in mineCyborgs2)
            {
                speedMine += mc.speed;
            }
            mineSpeed.text = "Speed - " + speedMine.ToString("F1");
            double speedLoot = 0;
            foreach (LootN mc in lootCyborgs2)
            {
                speedLoot += mc.speed;
            }
            lootSpeed.text = $"Speed - " + speedLoot.ToString("F1");

            for (int j = 0; j < mineCyborgs2.Count; j++)
            {
                int id = mineCyborgs2[j].id;
                if (mineBackRow.Contains(id))
                {
                    int index = mineBackRow.IndexOf(id);
                    mineBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs2[j].health);
                    mineBackRowList[index].GetComponent<BattleCard>().stress = mineCyborgs2[j].stressPoint;
                    if (mineCyborgs2[j].stressPoint >= 50)
                    {
                        mineBackRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }


                    nm.SetCyborgPfp(mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs2[j].trait.bodyParts.gender,
                                                            mineCyborgs2[j].trait.bodyParts.vest,
                                                            mineCyborgs2[j].trait.bodyParts.eye.name,
                                                            mineCyborgs2[j].trait.bodyParts.neck.name,
                                                            mineCyborgs2[j].trait.bodyParts.skin,
                                                            mineCyborgs2[j].rank);


                }
                else if (mineFrontRow.Contains(id))
                {
                    int index = mineFrontRow.IndexOf(id);
                    mineFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs2[j].health);
                    mineFrontRowList[index].GetComponent<BattleCard>().stress = mineCyborgs2[j].stressPoint;
                    if (mineCyborgs2[j].stressPoint >= 50)
                    {
                        mineFrontRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }

                    nm.SetCyborgPfp(mineFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs2[j].trait.bodyParts.gender,
                                                            mineCyborgs2[j].trait.bodyParts.vest,
                                                            mineCyborgs2[j].trait.bodyParts.eye.name,
                                                            mineCyborgs2[j].trait.bodyParts.neck.name,
                                                            mineCyborgs2[j].trait.bodyParts.skin,
                                                            mineCyborgs2[j].rank);


                }

            }
            for (int j = 0; j < lootCyborgs2.Count; j++)
            {
                int id = lootCyborgs2[j].id;
                if (lootBackRow.Contains(id))
                {
                    int index = lootBackRow.IndexOf(id);
                    lootBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(lootCyborgs2[j].health);
                    lootBackRowList[index].GetComponent<BattleCard>().stress = lootCyborgs2[j].stressPoint;
                    if (lootCyborgs2[j].stressPoint >= 50)
                    {
                        lootBackRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }

                    nm.SetCyborgPfp(lootBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().neckImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().jawImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().vestImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            lootCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            lootCyborgs2[j].trait.bodyParts.gender,
                                                            lootCyborgs2[j].trait.bodyParts.vest,
                                                            lootCyborgs2[j].trait.bodyParts.eye.name,
                                                            lootCyborgs2[j].trait.bodyParts.neck.name,
                                                            lootCyborgs2[j].trait.bodyParts.skin,
                                                            lootCyborgs2[j].rank);



                }
                else if (lootFrontRow.Contains(id))
                {
                    int index = lootFrontRow.IndexOf(id);
                    lootFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(lootCyborgs2[j].health);
                    lootFrontRowList[index].GetComponent<BattleCard>().stress = lootCyborgs2[j].stressPoint;
                    if (lootCyborgs2[j].stressPoint >= 50)
                    {
                        lootFrontRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }

                    nm.SetCyborgPfp(lootFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            lootCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            lootCyborgs2[j].trait.bodyParts.gender,
                                                            lootCyborgs2[j].trait.bodyParts.vest,
                                                            lootCyborgs2[j].trait.bodyParts.eye.name,
                                                            lootCyborgs2[j].trait.bodyParts.neck.name,
                                                            lootCyborgs2[j].trait.bodyParts.skin,
                                                            lootCyborgs2[j].rank);

                }

            }
            for (int i = 0; i < mineBackRow.Count; i++)
            {

                if (mineBackRow[i] == -1)
                {
                    GameObject obj = mineBackRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {

                    GameObject obj = mineBackRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }
            for (int i = 0; i < mineFrontRow.Count; i++)
            {
                if (mineFrontRow[i] == -1)
                {
                    GameObject obj = mineFrontRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = mineFrontRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }
            for (int i = 0; i < lootBackRow.Count; i++)
            {
                if (lootBackRow[i] == -1)
                {
                    GameObject obj = lootBackRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = lootBackRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }

            for (int i = 0; i < lootFrontRow.Count; i++)
            {
                if (lootFrontRow[i] == -1)
                {
                    GameObject obj = lootFrontRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = lootFrontRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }
            }

        }
        else
        {
            lootBackRow = battleSimulation.result.lootPosition.backRow;
            lootFrontRow = battleSimulation.result.lootPosition.frontRow;
            mineBackRow = battleSimulation.result.minePosition.backRow;
            mineFrontRow = battleSimulation.result.minePosition.frontRow;
            mineCyborgs = battleSimulation.result.mineCyborgs;
            lootCyborgs = battleSimulation.result.lootCyborgs;
            double speedMine = 0;
            foreach (MineCyborgN mc in mineCyborgs)
            {
                speedMine += mc.speed;
            }
            mineSpeed.text = "Speed - " + speedMine.ToString("F1");
            double speedLoot = 0;
            foreach (LootCyborgN mc in lootCyborgs)
            {
                speedLoot += mc.speed;
            }
            lootSpeed.text = $"Speed - " + speedLoot.ToString("F1");

            for (int j = 0; j < mineCyborgs.Count; j++)
            {
                int id = mineCyborgs[j].id;
                if (mineBackRow.Contains(id))
                {
                    int index = mineBackRow.IndexOf(id);
                    mineBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs[j].health);
                    mineBackRowList[index].GetComponent<BattleCard>().stress = mineCyborgs[j].stressPoint;
                    if (mineCyborgs[j].stressPoint >= 50)
                    {
                        mineBackRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }


                    nm.SetCyborgPfp(mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs[j].trait.bodyParts.gender,
                                                            mineCyborgs[j].trait.bodyParts.vest,
                                                            mineCyborgs[j].trait.bodyParts.eye.name,
                                                            mineCyborgs[j].trait.bodyParts.neck.name,
                                                            mineCyborgs[j].trait.bodyParts.skin,
                                                            mineCyborgs[j].rank);


                }
                else if (mineFrontRow.Contains(id))
                {
                    int index = mineFrontRow.IndexOf(id);
                    mineFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs[j].health);
                    mineFrontRowList[index].GetComponent<BattleCard>().stress = mineCyborgs[j].stressPoint;
                    if (mineCyborgs[j].stressPoint >= 50)
                    {
                        mineFrontRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }

                    nm.SetCyborgPfp(mineFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs[j].trait.bodyParts.gender,
                                                            mineCyborgs[j].trait.bodyParts.vest,
                                                            mineCyborgs[j].trait.bodyParts.eye.name,
                                                            mineCyborgs[j].trait.bodyParts.neck.name,
                                                            mineCyborgs[j].trait.bodyParts.skin,
                                                            mineCyborgs[j].rank);


                }

            }
            for (int j = 0; j < lootCyborgs.Count; j++)
            {
                int id = lootCyborgs[j].id;
                if (lootBackRow.Contains(id))
                {
                    int index = lootBackRow.IndexOf(id);
                    lootBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(lootCyborgs[j].health);
                    lootBackRowList[index].GetComponent<BattleCard>().stress = lootCyborgs[j].stressPoint;
                    if (lootCyborgs[j].stressPoint >= 50)
                    {
                        lootBackRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }

                    nm.SetCyborgPfp(lootBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().neckImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().jawImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().vestImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            lootBackRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            lootCyborgs[j].trait.bodyParts.originPlanet.name,
                                                            lootCyborgs[j].trait.bodyParts.gender,
                                                            lootCyborgs[j].trait.bodyParts.vest,
                                                            lootCyborgs[j].trait.bodyParts.eye.name,
                                                            lootCyborgs[j].trait.bodyParts.neck.name,
                                                            lootCyborgs[j].trait.bodyParts.skin,
                                                            lootCyborgs[j].rank);



                }
                else if (lootFrontRow.Contains(id))
                {
                    int index = lootFrontRow.IndexOf(id);
                    lootFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(lootCyborgs[j].health);
                    lootFrontRowList[index].GetComponent<BattleCard>().stress = lootCyborgs[j].stressPoint;
                    if (lootCyborgs[j].stressPoint >= 50)
                    {
                        lootFrontRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                    }

                    nm.SetCyborgPfp(lootFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            lootCyborgs[j].trait.bodyParts.originPlanet.name,
                                                            lootCyborgs[j].trait.bodyParts.gender,
                                                            lootCyborgs[j].trait.bodyParts.vest,
                                                            lootCyborgs[j].trait.bodyParts.eye.name,
                                                            lootCyborgs[j].trait.bodyParts.neck.name,
                                                            lootCyborgs[j].trait.bodyParts.skin,
                                                            lootCyborgs[j].rank);

                }

            }
            for (int i = 0; i < mineBackRow.Count; i++)
            {

                if (mineBackRow[i] == -1)
                {
                    GameObject obj = mineBackRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {

                    GameObject obj = mineBackRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }
            for (int i = 0; i < mineFrontRow.Count; i++)
            {
                if (mineFrontRow[i] == -1)
                {
                    GameObject obj = mineFrontRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = mineFrontRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }
            for (int i = 0; i < lootBackRow.Count; i++)
            {
                if (lootBackRow[i] == -1)
                {
                    GameObject obj = lootBackRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = lootBackRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }

            for (int i = 0; i < lootFrontRow.Count; i++)
            {
                if (lootFrontRow[i] == -1)
                {
                    GameObject obj = lootFrontRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = lootFrontRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }
            }
        }

    }


    public void PlaceMineTeam()
    {
        Debug.Log("PlaceMineTeam");

        if (nm.isDemo)
        {
            mineBackRow = dmlr.result.gamePosition.mine.backRow;
            mineFrontRow = dmlr.result.gamePosition.mine.frontRow;
            mineCyborgs2 = dmlr.result.participant.mine;
            double mineSpeed = 0.0;
            foreach (MineN cyb in mineCyborgs2)
            {
                mineSpeed += cyb.speed;
            }
            mineSpeedText.text = "Speed - " + mineSpeed.ToString("F1");
            nm.mineOrLoot = "mine";
        }
        if (nm.mineOrLoot == "mine")
        {
            if (!nm.isDemo)
            {
                mineBackRow = mineResponse.result.minePosition.backRow;
                mineFrontRow = mineResponse.result.minePosition.frontRow;
                mineCyborgs = mineResponse.result.mineCyborgs;
                double mineSpeed = 0.0;
                foreach (MineCyborgN cyb in mineCyborgs)
                {
                    mineSpeed += cyb.speed;
                }
                mineSpeedText.text = "Speed - " + mineSpeed.ToString("F1");
            }



        }
        else
        {
            if (nm.isDemo)
            {
                mineBackRow = dmlr.result.gamePosition.mine.backRow;
                mineFrontRow = dmlr.result.gamePosition.mine.frontRow;
                mineCyborgs2 = dmlr.result.participant.mine;
                nm.mineOrLoot = "mine";
            }
            //view case
            else
            {
                Debug.Log(nm.mineSimData.minePosition.backRow[0]);
                mineBackRow = nm.mineSimData.minePosition.backRow;
                mineFrontRow = nm.mineSimData.minePosition.frontRow;
                mineCyborgs = nm.mineSimData.mineCyborgs;
                double mineSpeed = 0.0;
                foreach (MineCyborgN cyb in mineCyborgs)
                {
                    mineSpeed += cyb.speed;
                }
                mineSpeedText.text = "Speed - " + mineSpeed.ToString("F1");
            }

        }
        if (nm.isDemo)
        {
            for (int j = 0; j < mineCyborgs2.Count; j++)
            {
                int id = mineCyborgs2[j].id;
                if (mineBackRow.Contains(id))
                {
                    int index = mineBackRow.IndexOf(id);
                    mineBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs2[j].health);
                    mineBackRowList[index].GetComponent<BattleCard>().currentHealth = mineCyborgs2[j].health;
                    mineBackRowList[index].GetComponent<BattleCard>().stress = mineCyborgs2[j].stressPoint;


                    //Debug.Log("-------------------------------------------------------------------------------------");

                    //Debug.Log("Cyborg: " + mineCyborgs[j].name);
                    //Debug.Log("Image name" + mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage.name);
                    //Debug.Log("Origin Planet: " + mineCyborgs[j].trait.bodyParts.originPlanet.name);
                    //Debug.Log("Gender: " + mineCyborgs[j].trait.bodyParts.gender);
                    //Debug.Log("Vest: " + mineCyborgs[j].trait.bodyParts.vest);
                    //Debug.Log("Eye: " + mineCyborgs[j].trait.bodyParts.eye.name);
                    //Debug.Log("Neck: " + mineCyborgs[j].trait.bodyParts.neck.name);

                    //Debug.Log("=====================================================================================");


                    nm.SetCyborgPfp(mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs2[j].trait.bodyParts.gender,
                                                            mineCyborgs2[j].trait.bodyParts.vest,
                                                            mineCyborgs2[j].trait.bodyParts.eye.name,
                                                            mineCyborgs2[j].trait.bodyParts.neck.name,
                                                            mineCyborgs2[j].trait.bodyParts.skin,
                                                            mineCyborgs2[j].rank);

                    //Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                }
                else if (mineFrontRow.Contains(id))
                {
                    int index = mineFrontRow.IndexOf(id);
                    mineFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs2[j].health);
                    mineFrontRowList[index].GetComponent<BattleCard>().currentHealth = mineCyborgs2[j].health;
                    mineFrontRowList[index].GetComponent<BattleCard>().stress = mineCyborgs2[j].stressPoint;

                    //Debug.Log("-------------------------------------------------------------------------------------");

                    //Debug.Log("Cyborg: " + mineCyborgs[j].name);
                    //Debug.Log("Image name" + mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage.name);
                    //Debug.Log("Origin Planet: " + mineCyborgs[j].trait.bodyParts.originPlanet.name);
                    //Debug.Log("Gender: " + mineCyborgs[j].trait.bodyParts.gender);
                    //Debug.Log("Vest: " + mineCyborgs[j].trait.bodyParts.vest);
                    //Debug.Log("Eye: " + mineCyborgs[j].trait.bodyParts.eye.name);
                    //Debug.Log("Neck: " + mineCyborgs[j].trait.bodyParts.neck.name);

                    //Debug.Log("=====================================================================================");

                    nm.SetCyborgPfp(mineFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs2[j].trait.bodyParts.gender,
                                                            mineCyborgs2[j].trait.bodyParts.vest,
                                                            mineCyborgs2[j].trait.bodyParts.eye.name,
                                                            mineCyborgs2[j].trait.bodyParts.neck.name,
                                                            mineCyborgs2[j].trait.bodyParts.skin,
                                                            mineCyborgs2[j].rank);

                    //Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                }

            }
        }

        else
        {
            for (int j = 0; j < mineCyborgs.Count; j++)
            {
                int id = mineCyborgs[j].id;
                if (mineBackRow.Contains(id))
                {
                    int index = mineBackRow.IndexOf(id);
                    mineBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs[j].health);
                    mineBackRowList[index].GetComponent<BattleCard>().currentHealth = mineCyborgs[j].health;
                    mineBackRowList[index].GetComponent<BattleCard>().stress = mineCyborgs[j].stressPoint;


                    //Debug.Log("-------------------------------------------------------------------------------------");

                    //Debug.Log("Cyborg: " + mineCyborgs[j].name);
                    //Debug.Log("Image name" + mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage.name);
                    //Debug.Log("Origin Planet: " + mineCyborgs[j].trait.bodyParts.originPlanet.name);
                    //Debug.Log("Gender: " + mineCyborgs[j].trait.bodyParts.gender);
                    //Debug.Log("Vest: " + mineCyborgs[j].trait.bodyParts.vest);
                    //Debug.Log("Eye: " + mineCyborgs[j].trait.bodyParts.eye.name);
                    //Debug.Log("Neck: " + mineCyborgs[j].trait.bodyParts.neck.name);

                    //Debug.Log("=====================================================================================");


                    nm.SetCyborgPfp(mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineBackRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs[j].trait.bodyParts.gender,
                                                            mineCyborgs[j].trait.bodyParts.vest,
                                                            mineCyborgs[j].trait.bodyParts.eye.name,
                                                            mineCyborgs[j].trait.bodyParts.neck.name,
                                                            mineCyborgs[j].trait.bodyParts.skin,
                                                            mineCyborgs[j].rank);

                    //Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                }
                else if (mineFrontRow.Contains(id))
                {
                    int index = mineFrontRow.IndexOf(id);
                    mineFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(mineCyborgs[j].health);
                    mineFrontRowList[index].GetComponent<BattleCard>().currentHealth = mineCyborgs[j].health;
                    mineFrontRowList[index].GetComponent<BattleCard>().stress = mineCyborgs[j].stressPoint;

                    //Debug.Log("-------------------------------------------------------------------------------------");

                    //Debug.Log("Cyborg: " + mineCyborgs[j].name);
                    //Debug.Log("Image name" + mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage.name);
                    //Debug.Log("Origin Planet: " + mineCyborgs[j].trait.bodyParts.originPlanet.name);
                    //Debug.Log("Gender: " + mineCyborgs[j].trait.bodyParts.gender);
                    //Debug.Log("Vest: " + mineCyborgs[j].trait.bodyParts.vest);
                    //Debug.Log("Eye: " + mineCyborgs[j].trait.bodyParts.eye.name);
                    //Debug.Log("Neck: " + mineCyborgs[j].trait.bodyParts.neck.name);

                    //Debug.Log("=====================================================================================");

                    nm.SetCyborgPfp(mineFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            mineFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            mineCyborgs[j].trait.bodyParts.originPlanet.name,
                                                            mineCyborgs[j].trait.bodyParts.gender,
                                                            mineCyborgs[j].trait.bodyParts.vest,
                                                            mineCyborgs[j].trait.bodyParts.eye.name,
                                                            mineCyborgs[j].trait.bodyParts.neck.name,
                                                            mineCyborgs[j].trait.bodyParts.skin,
                                                            mineCyborgs[j].rank);

                    //Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                }

            }
        }

        if (nm.isDemo)
        {
            for (int i = 0; i < dmlr.result.gamePosition.mine.backRow.Count; i++)
            {
                if (dmlr.result.gamePosition.mine.backRow[i] == -1)
                {
                    GameObject obj = mineBackRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = mineBackRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }
            }


            for (int i = 0; i < dmlr.result.gamePosition.mine.frontRow.Count; i++)
            {
                if (dmlr.result.gamePosition.mine.frontRow[i] == -1)
                {
                    GameObject obj = mineFrontRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = mineFrontRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }




            //for (int i = 0; i < dmlr.result.gamePosition.mine.backRow.Count; i++)
            //{
            //    if (dmlr.result.gamePosition.mine.backRow[i] == -1)
            //    {
            //        GameObject obj = mineBackRowList[i];
            //        obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
            //        obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
            //        continue;
            //    }
            //    else
            //    {
            //        GameObject obj = mineBackRowList[i];
            //        Material mat = obj.GetComponent<Renderer>().material;
            //        mat.mainTexture = placeHolderImage1;
            //    }
            //}
            //for (int i = 0; i < dmlr.result.gamePosition.mine.frontRow.Count; i++)
            //{
            //    if (dmlr.result.gamePosition.mine.frontRow[i] == -1)
            //    {
            //        GameObject obj = mineFrontRowList[i];
            //        obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
            //        obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
            //        continue;
            //    }
            //    else
            //    {
            //        GameObject obj = mineFrontRowList[i];
            //        Material mat = obj.GetComponent<Renderer>().material;
            //        mat.mainTexture = placeHolderImage1;
            //    }
            //}
        }
        else
        {
            Debug.Log("Here");
            for (int i = 0; i < mineResponse.result.minePosition.backRow.Count; i++)
            {
                if (!nm.isDemo)
                {
                    if (nm.mineOrLoot == "mine")
                    {
                        if (mineResponse.result.minePosition.backRow[i] == -1)
                        {
                            GameObject obj = mineBackRowList[i];
                            obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                            obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                            continue;
                        }
                        else
                        {
                            GameObject obj = mineBackRowList[i];
                            Material mat = obj.GetComponent<Renderer>().material;
                            mat.mainTexture = placeHolderImage1;
                        }

                    }

                }

            }
            for (int i = 0; i < mineResponse.result.minePosition.frontRow.Count; i++)
            {
                if (!nm.isDemo)
                {
                    if (nm.mineOrLoot == "mine")
                    {
                        if (mineResponse.result.minePosition.frontRow[i] == -1)
                        {
                            GameObject obj = mineFrontRowList[i];
                            obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                            obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                            continue;
                        }
                        else
                        {
                            GameObject obj = mineFrontRowList[i];
                            Material mat = obj.GetComponent<Renderer>().material;
                            mat.mainTexture = placeHolderImage1;
                        }
                    }
                }

            }




            if (nm.mineOrLoot == "view")
            {
                Debug.Log("View");
                for (int i = 0; i < nm.mineSimData.minePosition.backRow.Count; i++)
                {
                    if (nm.mineSimData.minePosition.backRow[i] == -1)
                    {
                        GameObject obj = mineBackRowList[i];
                        obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                        obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                        continue;
                    }
                    else
                    {
                        GameObject obj = mineBackRowList[i];
                        Material mat = obj.GetComponent<Renderer>().material;
                        mat.mainTexture = placeHolderImage1;
                    }
                }
                for (int i = 0; i < nm.mineSimData.minePosition.frontRow.Count; i++)
                {
                    if (nm.mineSimData.minePosition.frontRow[i] == -1)
                    {
                        GameObject obj = mineFrontRowList[i];
                        obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                        obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                        continue;
                    }
                    else
                    {
                        GameObject obj = mineFrontRowList[i];
                        Material mat = obj.GetComponent<Renderer>().material;
                        mat.mainTexture = placeHolderImage1;
                    }
                }

            }
        }



        foreach (GameObject obj in lootFrontRowList)
        {
            obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
            Debug.Log(obj.name);
            obj.GetComponentInChildren<Canvas>().transform.localScale = Vector3.zero;
        }
        foreach (GameObject obj in lootBackRowList)
        {
            obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
            Debug.Log(obj.name);
            obj.GetComponentInChildren<Canvas>().transform.localScale = Vector3.zero;
        }



        mineVFX.SetActive(true);
        //backBtn.SetActive(true);

    }

    public void PlaceLootTeam()
    {
        mineVFX.SetActive(false);
        lootSpeedText.gameObject.SetActive(true);
        lootAvatar.gameObject.SetActive(true);
        lootUsernameText.text = "SG";
        lootName.text = "SG";
        sm.mineVfx.Stop();
        Debug.Log("Place Loot Team");
        List<LootCyborgN> lootCyborgs = new List<LootCyborgN>();
        List<LootN> lootCyborgs2 = new List<LootN>();

        if (nm.mineOrLoot == "mine")
        {
            if (nm.isDemo)
            {
                lootBackRow = dmlr.result.gamePosition.loot.backRow;
                lootFrontRow = dmlr.result.gamePosition.loot.frontRow;
                lootCyborgs2 = dmlr.result.participant.loot;
                nm.mineOrLoot = "mine";
            }
            //else
            //{
            //    mineBackRow = mineResponse.result.minePosition.backRow;
            //    mineFrontRow = mineResponse.result.minePosition.frontRow;
            //    lootCyborgs = mineResponse.result.loot;
            //}

        }
        else
        {
            if (nm.isDemo)
            {
                double lootSpeed = 0.0;
                lootBackRow = dmlr.result.gamePosition.loot.backRow;
                lootFrontRow = dmlr.result.gamePosition.loot.frontRow;
                lootCyborgs2 = dmlr.result.participant.loot;
                foreach (LootN cyb in lootCyborgs2)
                {
                    lootSpeed += cyb.speed;
                }
                lootSpeedText.text = "Speed - " + lootSpeed.ToString("F2");
                nm.mineOrLoot = "mine";
            }
            //else
            //{
            //    Debug.Log(nm.mineSimData.minePosition.backRow[0]);
            //    mineBackRow = nm.mineSimData.minePosition.backRow;
            //    mineFrontRow = nm.mineSimData.minePosition.frontRow;
            //    lootCyborgs = nm.mineSimData.mineCyborgs;
            //}

        }
        if (nm.isDemo)
        {
            for (int j = 0; j < lootCyborgs2.Count; j++)
            {
                int id = lootCyborgs2[j].id;
                if (lootBackRow.Contains(id))
                {
                    int index = lootBackRow.IndexOf(id);
                    lootBackRowList[index].GetComponent<BattleCard>().SetMaxHealth(lootCyborgs2[j].health);
                    lootBackRowList[index].GetComponent<BattleCard>().currentHealth = lootCyborgs2[j].health;
                    lootBackRowList[index].GetComponent<BattleCard>().stress = lootCyborgs2[j].stressPoint;
                    //lootBackRowList[index].GetComponent<BattleCard>().healthSlider.GetComponentInParent<Canvas>().gameObject.SetActive(true);
                    lootBackRowList[index].GetComponentInChildren<Canvas>().transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
                    lootBackRowList[index].GetComponent<MeshRenderer>().material = lootBackRowList[index].GetComponent<BattleCard>().regularMat;
                    //lootBackRowList[index].GetComponentInChildren<Canvas>().gameObject.SetActive(false);


                    //Debug.Log("-------------------------------------------------------------------------------------");

                    Debug.Log("Cyborg: " + lootCyborgs2[j].name);
                    //Debug.Log("Image name" + mineBackRowList[index].GetComponent<BattleCard>().originPlanetImage.name);
                    Debug.Log("Origin Planet: " + lootCyborgs2[j].trait.bodyParts.originPlanet.name);
                    Debug.Log("Gender: " + lootCyborgs2[j].trait.bodyParts.gender);
                    Debug.Log("Vest: " + lootCyborgs2[j].trait.bodyParts.vest);
                    Debug.Log("Eye: " + lootCyborgs2[j].trait.bodyParts.eye.name);
                    Debug.Log("Neck: " + lootCyborgs2[j].trait.bodyParts.neck.name);

                    //Debug.Log("=====================================================================================");


                    nm.SetCyborgPfp(lootBackRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            lootCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            lootCyborgs2[j].trait.bodyParts.gender,
                                                            lootCyborgs2[j].trait.bodyParts.vest,
                                                            lootCyborgs2[j].trait.bodyParts.eye.name,
                                                            lootCyborgs2[j].trait.bodyParts.neck.name,
                                                            lootCyborgs2[j].trait.bodyParts.skin,
                                                            lootCyborgs2[j].rank);

                    //Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                }
                else if (lootFrontRow.Contains(id))
                {
                    int index = lootFrontRow.IndexOf(id);
                    lootFrontRowList[index].GetComponent<BattleCard>().SetMaxHealth(lootCyborgs2[j].health);
                    lootFrontRowList[index].GetComponent<BattleCard>().currentHealth = lootCyborgs2[j].health;
                    lootFrontRowList[index].GetComponent<BattleCard>().stress = lootCyborgs2[j].stressPoint;
                    lootFrontRowList[index].GetComponentInChildren<Canvas>().transform.localScale = new Vector3(0.01f, 0.01f, 0.01f);
                    lootFrontRowList[index].GetComponent<MeshRenderer>().material = lootFrontRowList[index].GetComponent<BattleCard>().regularMat;
                    //lootFrontRowList[index].GetComponentInChildren<Canvas>().gameObject.SetActive(false);

                    //Debug.Log("-------------------------------------------------------------------------------------");

                    Debug.Log("Cyborg: " + lootCyborgs2[j].name);

                    Debug.Log("Origin Planet: " + lootCyborgs2[j].trait.bodyParts.originPlanet.name);
                    Debug.Log("Gender: " + lootCyborgs2[j].trait.bodyParts.gender);
                    Debug.Log("Vest: " + lootCyborgs2[j].trait.bodyParts.vest);
                    Debug.Log("Eye: " + lootCyborgs2[j].trait.bodyParts.eye.name);
                    Debug.Log("Neck: " + lootCyborgs2[j].trait.bodyParts.neck.name);

                    //Debug.Log("=====================================================================================");

                    nm.SetCyborgPfp(lootFrontRowList[index].GetComponent<BattleCard>().originPlanetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().neckImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().bodyImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().jawImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().vestImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().helmetImage,
                                                            lootFrontRowList[index].GetComponent<BattleCard>().eyeImage,
                                                            lootCyborgs2[j].trait.bodyParts.originPlanet.name,
                                                            lootCyborgs2[j].trait.bodyParts.gender,
                                                            lootCyborgs2[j].trait.bodyParts.vest,
                                                            lootCyborgs2[j].trait.bodyParts.eye.name,
                                                            lootCyborgs2[j].trait.bodyParts.neck.name,
                                                            lootCyborgs2[j].trait.bodyParts.skin,
                                                            lootCyborgs2[j].rank);

                    //Debug.Log("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
                }

            }
        }



        if (nm.isDemo)
        {
            for (int i = 0; i < dmlr.result.gamePosition.loot.backRow.Count; i++)
            {
                if (dmlr.result.gamePosition.loot.backRow[i] == -1)
                {
                    GameObject obj = lootBackRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    //obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = lootBackRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }
            }


            for (int i = 0; i < dmlr.result.gamePosition.loot.frontRow.Count; i++)
            {
                if (dmlr.result.gamePosition.loot.frontRow[i] == -1)
                {
                    GameObject obj = lootFrontRowList[i];
                    obj.GetComponent<MeshRenderer>().material = obj.GetComponent<BattleCard>().ghostMat;
                    //obj.GetComponentInChildren<Canvas>().gameObject.SetActive(false);
                    continue;
                }
                else
                {
                    GameObject obj = lootFrontRowList[i];
                    Material mat = obj.GetComponent<Renderer>().material;
                    mat.mainTexture = placeHolderImage1;
                }

            }
        }


    }
    public IEnumerator SimulateBattle(List<CorePlayN> corePlay)
    {
        mineCyborgs = battleSimulation.result.mineCyborgs;
        lootCyborgs = battleSimulation.result.lootCyborgs;
        if (nm.isDemo)
        {
            mineCyborgs2 = dmlr.result.participant.mine;
            lootCyborgs2 = dmlr.result.participant.loot;
        }
        else
        {
            mineCyborgs2 = nm.wwr.simulation.participant.mine;
            lootCyborgs2 = nm.wwr.simulation.participant.loot;
        }

        for (int i = 0; i < corePlay.Count; i++)
        {

            if (skip && !battleEnded)
            {
                //Debug.Log("Skipped" + skip);

                if (nm.isDemo)
                {
                    if (nm.isLootWin)
                    {
                        //StartCoroutine(BattleEnd(6f));
                        demoPopup1.SetActive(true);

                    }
                    else
                    {
                        demoPopup6.SetActive(true);
                        winImage1.SetActive(true);
                        lossImage1.SetActive(true);
                        greyBGPopup7.SetActive(true);
                        DemoBattleEnd();
                    }
                    battleEnded = true;
                    break;

                }
                else
                {
                    StartCoroutine(BattleEnd(0f));
                    battleEnded = true;
                    break;
                }




            }
            //Dont wait for 1st Turn
            if (i == 0)
            {
                yield return new WaitForSeconds(0f);
            }
            //Wait for seconds based on attack + 2 second buffer
            else
            {
                yield return new WaitForSeconds(seconds + 2f);
            }
            //Making the skip button active after 2 attacks
            if (nm.isDemo && i == 2)
            {
                skipButton.SetActive(true);
            }
            //Arbitrary time
            seconds = 4f;
            //Skip case no attackers
            if (corePlay[i].attackers.Count == 0 || corePlay[i].skip == true)
            {
                seconds = 0f;
                continue;
            }
            //Check if flee
            StartCoroutine(fleeAnim(corePlay[i]));
            //Caching data attacker
            double attackDamage = corePlay[i].attackers[0].attack;
            double stressAttacker = corePlay[i].attackers[0].stressChange;
            double attackerHealthChange = corePlay[i].attackers[0].healthChange;
            AttackerN attacker = corePlay[i].attackers[0]; //attacker[0] because there can only be 1 attacker


            //Loop is to show attack if multiple defenders
            foreach (DefenderN defender in corePlay[i].defenders)
            {
                //Caching data defender
                double defenderHealthChange = defender.healthChange;
                double defenderHealth = defender.health;
                double stressDefender = defender.stressChange;
                int attackerID = corePlay[i].attackerID;


                //Highlight based on attackerID
                if (lootBackRow.Contains(attackerID))
                {
                    int index = lootBackRow.IndexOf(attackerID);
                    StartCoroutine(HighlightAnimation(lootBackRowList[index].gameObject));
                }
                else if (lootFrontRow.Contains(attackerID))
                {
                    int index = lootFrontRow.IndexOf(attackerID);
                    StartCoroutine(HighlightAnimation(lootFrontRowList[index].gameObject));
                }
                else if (mineBackRow.Contains(attackerID))
                {
                    int index = mineBackRow.IndexOf(attackerID);
                    StartCoroutine(HighlightAnimation(mineBackRowList[index].gameObject));
                }
                else if (mineFrontRow.Contains(attackerID))
                {
                    int index = mineFrontRow.IndexOf(attackerID);
                    StartCoroutine(HighlightAnimation(mineFrontRowList[index].gameObject));
                }

                //Attackers Handled
                if (lootBackRow.Contains(attacker.cyborgID) || lootFrontRow.Contains(attacker.cyborgID))
                {
                    if (attacker.position[0] == 1)
                    {
                        StartCoroutine(AttackerBattleHandler(attacker, corePlay, defender, lootBackRowList, attackDamage, stressAttacker, attackerHealthChange, stressDefender, i, true));
                    }
                    else
                    {
                        StartCoroutine(AttackerBattleHandler(attacker, corePlay, defender, lootFrontRowList, attackDamage, stressAttacker, attackerHealthChange, stressDefender, i, true));
                    }
                }
                else if (mineBackRow.Contains(attacker.cyborgID) || mineFrontRow.Contains(attacker.cyborgID))
                {
                    if (attacker.position[0] == 1)
                    {
                        StartCoroutine(AttackerBattleHandler(attacker, corePlay, defender, mineBackRowList, attackDamage, stressAttacker, attackerHealthChange, stressDefender, i, false));
                    }
                    else
                    {
                        StartCoroutine(AttackerBattleHandler(attacker, corePlay, defender, mineFrontRowList, attackDamage, stressAttacker, attackerHealthChange, stressDefender, i, false));
                    }

                }

                //Defenders Handled

                //Resetting trait on each iteration
                string trait = "";

                if (lootBackRow.Contains(defender.cyborgID) || lootFrontRow.Contains(defender.cyborgID))
                {
                    if (defender.position[0] == 1)
                    {
                        DefenderBattleHandler(defender, attacker, lootBackRowList, defenderHealthChange, stressDefender, defenderHealth, corePlay, i, trait, true);
                    }
                    else
                    {
                        DefenderBattleHandler(defender, attacker, lootFrontRowList, defenderHealthChange, stressDefender, defenderHealth, corePlay, i, trait, true);
                    }

                }

                else if (mineBackRow.Contains(defender.cyborgID) || mineFrontRow.Contains(defender.cyborgID))
                {

                    if (defender.position[0] == 1)
                    {
                        DefenderBattleHandler(defender, attacker, mineBackRowList, defenderHealthChange, stressDefender, defenderHealth, corePlay, i, trait, false);
                    }
                    else
                    {
                        DefenderBattleHandler(defender, attacker, mineFrontRowList, defenderHealthChange, stressDefender, defenderHealth, corePlay, i, trait, false);
                    }
                }
            }
        }
        if (!skip)
        {
            //Debug.Log("!skip battleEnd");
            battleEnded = true;
            //Handling Demo case (Hard Coded)
            if (nm.isDemo)
            {
                if (nm.isLootWin)
                {
                    //StartCoroutine(BattleEnd(6f));
                    yield return new WaitForSeconds(3f);
                    demoPopup1.SetActive(true);

                }
                else
                {
                    yield return new WaitForSeconds(3f);
                    demoPopup6.SetActive(true);
                    winImage1.SetActive(true);
                    lossImage1.SetActive(true);
                    greyBGPopup7.SetActive(true);
                    DemoBattleEnd();
                }

            }
            else
            {
                StartCoroutine(BattleEnd(6f));
            }

        }

    }

    public void DefenderBattleHandler(DefenderN defender, AttackerN attacker, List<GameObject> positionList, double defenderHealthChange, double stressDefender, double defenderHealth, List<CorePlayN> corePlay, int i, string trait, bool isLoot)
    {
        if (defender.isDodge)
        {
            StartCoroutine(DodgeAnim(positionList[defender.position[1]].gameObject));
            sm.dodgVfx.Play();
            if (isLoot)
            {
                SetBattleLogText(attacker.cyborgID, defender.cyborgID, defenderHealthChange, false, true, true, false, true, stressDefender, false);
            }
            else
            {
                SetBattleLogText(attacker.cyborgID, defender.cyborgID, defenderHealthChange, false, false, true, false, true, stressDefender, false);
            }

            StartCoroutine(stressDecreaseAnim(positionList[defender.position[1]].gameObject, stressDefender));
            //continue;
        }
        else if (corePlay[i].hit == 2)
        {
            //sm.missVfx.Play();
            StartCoroutine(attackAnimation(positionList[defender.position[1]].gameObject, defenderHealthChange, defender.isFaint, defenderHealth, true));
            //continue;
        }
        else if (corePlay[i].hit == 1)
        {
            if (isLoot)
            {
                if (nm.isDemo || nm.isWager)
                {
                    for (int j = 0; j < mineCyborgs2.Count; j++)
                    {
                        if (mineCyborgs2[j].id == attacker.cyborgID)
                        {
                            trait = mineCyborgs2[j].trait.@class;
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < mineCyborgs.Count; j++)
                    {
                        if (mineCyborgs[j].id == corePlay[i].attackerID)
                        {
                            trait = mineCyborgs[j].trait.@class;
                        }
                    }
                }
            }
            else
            {
                if (nm.isDemo || nm.isWager)
                {
                    for (int j = 0; j < lootCyborgs2.Count; j++)
                    {
                        if (lootCyborgs2[j].id == attacker.cyborgID)
                        {
                            trait = lootCyborgs2[j].trait.@class;
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < lootCyborgs.Count; j++)
                    {
                        if (lootCyborgs[j].id == corePlay[i].attackerID)
                        {
                            trait = lootCyborgs[j].trait.@class;
                        }
                    }
                }
            }


            if (trait != "Tactician")
            {
                if (trait == "Brawler")
                {
                    brawlerCritHolder.Add(defender.cyborgID);
                }
                if (isLoot)
                {
                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, defenderHealthChange, true, true, false, false, false, stressDefender, defender.isFaint);
                }
                else
                {
                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, defenderHealthChange, true, false, false, false, false, stressDefender, defender.isFaint);
                }
                StartCoroutine(critAnimation(positionList[defender.position[1]].gameObject, defenderHealthChange, defender.isFaint, stressDefender, trait, defenderHealth, defender.stress));
            }
            //lootBackRowList[defender.position[1]].gameObject.GetComponent<BattleCard>().ModifyHealth(attackDamage);
            //attack damage popup
        }
        else
        {
            if (isLoot)
            {
                SetBattleLogText(attacker.cyborgID, defender.cyborgID, defenderHealthChange, false, true, false, false, false, 0, defender.isFaint);
            }
            else
            {
                SetBattleLogText(attacker.cyborgID, defender.cyborgID, defenderHealthChange, false, false, false, false, false, 0, defender.isFaint);
            }

            StartCoroutine(attackAnimation(positionList[defender.position[1]].gameObject, defenderHealthChange, defender.isFaint, defenderHealth));
            //lootBackRowList[defender.position[1]].gameObject.GetComponent<BattleCard>().ModifyHealth(attackDamage);
            //attack damage popup
        }
    }
    public IEnumerator AttackerBattleHandler(AttackerN attacker, List<CorePlayN> corePlay, DefenderN defender, List<GameObject> positionList, double attackDamage, double stressAttacker, double attackerHealthChange, double stressDefender, int i, bool isLoot)
    {
        yield return new WaitForSeconds(0.5f);
        if (brawlerCritHolder.Contains(attacker.cyborgID) && !corePlay[i].skip)
        {
            positionList[attacker.position[1]].gameObject.GetComponent<BattleCard>().brawlerCrit.SetActive(false);
            brawlerCritHolder.Remove(attacker.cyborgID);
        }
        if (corePlay[i].hit == 2 || defender.isDodge)
        {
            if (corePlay[i].hit == 2)
            {
                if (isLoot)
                {
                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackDamage, false, false, false, true, false, stressAttacker, false);
                }
                else
                {
                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackDamage, false, true, false, true, false, stressAttacker, false);
                }

            }
            seconds = 2f;
            StartCoroutine(stressIncreaseAnim(positionList[attacker.position[1]].gameObject, stressAttacker, attacker.stress, true));
        }

        else if (corePlay[i].hit == 1)
        {
            if (isLoot)
            {
                if (nm.isDemo || nm.isWager)
                {
                    for (int j = 0; j < lootCyborgs2.Count; j++)
                    {
                        if (lootCyborgs2[j].id == attacker.cyborgID)
                        {
                            if (lootCyborgs2[j].trait.@class == "Tactician")
                            {
                                if (isLoot)
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, false, true, false, false, stressAttacker, false);
                                }
                                else
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, true, true, false, false, stressAttacker, false);
                                }
                                StartCoroutine(critAnimation(positionList[attacker.position[1]].gameObject, attackerHealthChange, defender.isFaint, stressDefender, lootCyborgs2[j].trait.@class, attacker.health, attacker.stress));
                            }
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < lootCyborgs.Count; j++)
                    {
                        if (lootCyborgs[j].id == corePlay[i].attackerID)
                        {
                            if (lootCyborgs[j].trait.@class == "Tactician")
                            {
                                if (isLoot)
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, false, true, false, false, stressAttacker, false);
                                }
                                else
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, true, true, false, false, stressAttacker, false);
                                }
                                StartCoroutine(critAnimation(positionList[attacker.position[1]].gameObject, attackerHealthChange, defender.isFaint, stressDefender, lootCyborgs[j].trait.@class, attacker.health, attacker.stress));
                            }
                        }
                    }
                }

            }
            else
            {
                if (nm.isDemo || nm.isWager)
                {
                    for (int j = 0; j < mineCyborgs2.Count; j++)
                    {
                        if (mineCyborgs2[j].id == attacker.cyborgID)
                        {
                            if (mineCyborgs2[j].trait.@class == "Tactician")
                            {
                                if (isLoot)
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, false, true, false, false, stressAttacker, false);
                                }
                                else
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, true, true, false, false, stressAttacker, false);
                                }
                                StartCoroutine(critAnimation(positionList[attacker.position[1]].gameObject, attackerHealthChange, defender.isFaint, stressDefender, mineCyborgs2[j].trait.@class, attacker.health, attacker.stress));
                            }
                        }
                    }
                }
                else
                {
                    for (int j = 0; j < mineCyborgs.Count; j++)
                    {
                        if (mineCyborgs[j].id == corePlay[i].attackerID)
                        {
                            if (mineCyborgs[j].trait.@class == "Tactician")
                            {
                                if (isLoot)
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, false, true, false, false, stressAttacker, false);
                                }
                                else
                                {
                                    SetBattleLogText(attacker.cyborgID, defender.cyborgID, attackerHealthChange, true, true, true, false, false, stressAttacker, false);
                                }

                                StartCoroutine(critAnimation(positionList[attacker.position[1]].gameObject, attackerHealthChange, defender.isFaint, stressDefender, mineCyborgs[j].trait.@class, attacker.health, attacker.stress));
                            }
                        }
                    }
                }

            }
        }
    }

    public IEnumerator attackAnimation(GameObject attackedObj, double attackDamage, bool isFainted, double newHealth, bool miss = false)
    {
        sm.hitVfx.Play();
        if (miss)
        {
            Debug.Log("Missed");
            int randomInt = UnityEngine.Random.Range(0, 1);
            attackedObj.GetComponent<BattleCard>().missVFX[randomInt].SetActive(true);
            seconds = 2f;
            yield return new WaitForSeconds(seconds);
            attackedObj.GetComponent<BattleCard>().missVFX[randomInt].SetActive(false);
            sm.missVfx.Play();
        }
        else
        {
            Debug.Log("attack " + miss);
            attackedObj.GetComponent<BattleCard>().hitProjectile.SetActive(true);
            seconds = 2f;
            yield return new WaitForSeconds(seconds);
            attackedObj.GetComponent<BattleCard>().SetHealth(newHealth);
            Popup.Create(attackedObj.transform.position, attackDamage.ToString("F1"), false);
            attackedObj.GetComponent<BattleCard>().hitProjectile.SetActive(false);
            if (isFainted)
            {
                Fainted(attackedObj);

            }
        }

    }

    public IEnumerator critAnimation(GameObject attackedObj, double attackDamage, bool isFainted, double stressChange, string trait, double newHealth, double stress)
    {

        switch (trait)
        {
            case "Brawler":
                attackedObj.GetComponent<BattleCard>().brawlerCrit.SetActive(true);
                sm.brawlerCrit.Play();
                seconds = 8f;
                break;
            case "Aviator":
                attackedObj.GetComponent<BattleCard>().aviatorCrit.SetActive(true);
                ParticleSystem[] particleSystems;
                particleSystems = attackedObj.GetComponent<BattleCard>().aviatorCrit.GetComponentsInChildren<ParticleSystem>();
                foreach (ParticleSystem ps in particleSystems)
                {
                    if (!ps.isPlaying)
                    {
                        ps.randomSeed = (uint)UnityEngine.Random.Range(-1000000000, 1000000000);
                    }

                }
                sm.aviatorCrit.Play();
                seconds = 6f;
                break;
            case "Marine":
                attackedObj.GetComponent<BattleCard>().marinesCrit.SetActive(true);
                sm.marineCrit.Play();
                seconds = 6f;
                break;
            case "Warrior":
                attackedObj.GetComponent<BattleCard>().warriorCrit.SetActive(true);
                sm.warriorCrit.Play();
                seconds = 4f;
                break;
            case "Tactician":
                attackedObj.GetComponent<BattleCard>().tacticianCrit.SetActive(true);
                sm.tacticianCrit.Play();
                seconds = 6f;
                break;

        }

        yield return new WaitForSeconds(seconds);
        attackedObj.GetComponent<BattleCard>().SetHealth(newHealth);
        double crit = attackDamage;
        if (trait != "Brawler" && trait != "Marine" && trait != "Tactician")
        {
            Popup.Create(attackedObj.transform.position, crit.ToString("F1"), false);
        }
        if (trait == "Tactician")
        {
            Popup.Create(attackedObj.transform.position, crit.ToString("F1"), false, true);
        }

        if (stressChange > 0)
        {
            if (trait == "Marine")
            {
                Popup.Create(attackedObj.transform.position, stressChange.ToString("F1"), true);
                attackedObj.GetComponent<BattleCard>().ModifyStress(stressChange);
                if (stress >= 50)
                {
                    attackedObj.GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
                }

            }
            else
            {
                StartCoroutine(stressIncreaseAnim(attackedObj, stressChange, stress));
            }


        }
        attackedObj.GetComponent<BattleCard>().critHit.SetActive(false);
        //attackedObj.GetComponent<BattleCard>().brawlerCrit.SetActive(false);
        attackedObj.GetComponent<BattleCard>().aviatorCrit.SetActive(false);
        attackedObj.GetComponent<BattleCard>().marinesCrit.SetActive(false);
        attackedObj.GetComponent<BattleCard>().warriorCrit.SetActive(false);
        attackedObj.GetComponent<BattleCard>().tacticianCrit.SetActive(false);
        //Debug.Log(trait);
        if (isFainted && trait != "Tactician")
        {
            Fainted(attackedObj);

        }
    }
    public IEnumerator fleeAnim(CorePlayN corePlay)
    {

        //Debug.Log(corePlay.postmartam.minePostmartam.Count + " " + corePlay.postmartam.lootPostmartam.Count);
        //Debug.Log("FleeAnim");
        if (corePlay.postmartam.minePostmartam.Count > 0)
        {

            //Debug.Log("minepostmortem count > 0");
            for (int k = 0; k < corePlay.postmartam.minePostmartam.Count; k++)
            {
                //Debug.Log("minepostmortem count > 0 2");

                if (corePlay.postmartam.minePostmartam[k].flee.id == null)
                {
                    continue;
                }
                if (corePlay.postmartam.minePostmartam[k].flee.remaningTeam.Count > 0)
                {
                    for (int l = 0; l < corePlay.postmartam.minePostmartam[k].flee.remaningTeam.Count; l++)
                    {
                        if (mineFrontRow.Contains(corePlay.postmartam.minePostmartam[k].flee.remaningTeam[l].cyborgID))
                        {
                            FleeStressIncreaseHelper(corePlay.postmartam.minePostmartam[k].flee.remaningTeam[l].cyborgID, corePlay.postmartam.minePostmartam[k].flee.remaningTeam[l].stress, mineFrontRow, mineFrontRowList);
                        }

                        else if (mineBackRow.Contains(corePlay.postmartam.minePostmartam[k].flee.remaningTeam[l].cyborgID))
                        {
                            FleeStressIncreaseHelper(corePlay.postmartam.minePostmartam[k].flee.remaningTeam[l].cyborgID, corePlay.postmartam.minePostmartam[k].flee.remaningTeam[l].stress, mineBackRow, mineBackRowList);
                        }
                    }
                }

                // Debug.Log(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id));
                if (corePlay.postmartam.minePostmartam[k].flee.id != null)
                {
                    if (mineFrontRow.Contains(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id)))
                    {
                        //Debug.Log("minepostmortem count > 0 mineFrontRow");
                        int index = mineFrontRow.IndexOf(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id));
                        mineFrontRowList[index].GetComponent<BattleCard>().cardFlee.SetActive(true);
                        yield return new WaitForSeconds(2f);
                        mineFrontRowList[index].GetComponent<BattleCard>().persistenceVFX.SetActive(false);
                        mineFrontRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(false);
                        mineFrontRowList[index].gameObject.SetActive(false);
                        SetBattleLogText(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id), 0, 0, false, true, false, false, false, 0, false, true);
                    }
                    else if (mineBackRow.Contains(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id)))
                    {
                        //Debug.Log("minepostmortem count > 0 mineBackRow");
                        int index = mineBackRow.IndexOf(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id));
                        mineBackRowList[index].GetComponent<BattleCard>().cardFlee.SetActive(true);
                        sm.fleeSfx.Play();
                        yield return new WaitForSeconds(2f);
                        mineBackRowList[index].GetComponent<BattleCard>().persistenceVFX.SetActive(false);
                        mineBackRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(false);
                        mineBackRowList[index].gameObject.SetActive(false);
                        sm.fleeSfx.Stop();
                        SetBattleLogText(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id), 0, 0, false, true, false, false, false, 0, false, true);
                    }
                    //increase stress of cyborgs based on stress change
                }
            }
        }



        if (corePlay.postmartam.lootPostmartam.Count > 0)
        {
            //Debug.Log("lootpostmartem count > 0");
            for (int k = 0; k < corePlay.postmartam.lootPostmartam.Count; k++)
            {
                if (corePlay.postmartam.lootPostmartam[k].flee.id == null)
                {
                    //Debug.Log("flee id null");
                    continue;
                }
                if (corePlay.postmartam.lootPostmartam[k].flee.remaningTeam.Count > 0)
                {
                    for (int l = 0; l < corePlay.postmartam.lootPostmartam[k].flee.remaningTeam.Count; l++)
                    {
                        if (lootFrontRow.Contains(corePlay.postmartam.lootPostmartam[k].flee.remaningTeam[l].cyborgID))
                        {
                            FleeStressIncreaseHelper(corePlay.postmartam.lootPostmartam[k].flee.remaningTeam[l].cyborgID, corePlay.postmartam.lootPostmartam[k].flee.remaningTeam[l].stress, lootFrontRow, lootFrontRowList);
                        }

                        else if (lootBackRow.Contains(corePlay.postmartam.lootPostmartam[k].flee.remaningTeam[l].cyborgID))
                        {
                            FleeStressIncreaseHelper(corePlay.postmartam.lootPostmartam[k].flee.remaningTeam[l].cyborgID, corePlay.postmartam.lootPostmartam[k].flee.remaningTeam[l].stress, lootBackRow, lootBackRowList);
                        }
                    }

                }

                //Debug.Log(int.Parse(corePlay.postmartam.lootPostmartam[k].flee.id));
                if (corePlay.postmartam.lootPostmartam[k].flee.id != null)
                {
                    if (lootBackRow.Contains(int.Parse(corePlay.postmartam.lootPostmartam[k].flee.id)))
                    {
                        //Debug.Log("lootpostmartem count > 0 lootbackrow");
                        int index = lootBackRow.IndexOf(int.Parse(corePlay.postmartam.lootPostmartam[k].flee.id));
                        foreach (RemainingTeam rt in corePlay.postmartam.lootPostmartam[k].flee.remaningTeam)
                        {
                            int remainingTeamMember = rt.cyborgID;
                            int index1 = lootBackRow.IndexOf(remainingTeamMember);
                            double finalStress = rt.stress;
                            StartCoroutine(stressIncreaseAnim(lootBackRowList[index1], 10, finalStress));
                        }
                        lootBackRowList[index].GetComponent<BattleCard>().cardFlee.SetActive(true);
                        yield return new WaitForSeconds(2f);
                        lootBackRowList[index].GetComponent<BattleCard>().persistenceVFX.SetActive(false);
                        lootBackRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(false);
                        lootBackRowList[index].gameObject.SetActive(false);
                        SetBattleLogText(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id), 0, 0, false, false, false, false, false, 0, false, true);



                    }
                    else if (lootFrontRow.Contains(int.Parse(corePlay.postmartam.lootPostmartam[k].flee.id)))
                    {
                        //Debug.Log("minepostmortem count > 0 lootFrontRow");
                        int index = lootFrontRow.IndexOf(int.Parse(corePlay.postmartam.lootPostmartam[k].flee.id));
                        foreach (RemainingTeam rt in corePlay.postmartam.lootPostmartam[k].flee.remaningTeam)
                        {
                            int remainingTeamMember = rt.cyborgID;
                            int index1 = lootFrontRow.IndexOf(remainingTeamMember);
                            double finalStress = rt.stress;
                            StartCoroutine(stressIncreaseAnim(lootFrontRowList[index1], 10, finalStress));
                        }
                        seconds = 3f;
                        lootFrontRowList[index].GetComponent<BattleCard>().cardFlee.SetActive(true);
                        yield return new WaitForSeconds(2f);
                        lootFrontRowList[index].GetComponent<BattleCard>().persistenceVFX.SetActive(false);
                        lootFrontRowList[index].GetComponent<BattleCard>().stressedOutVFX.SetActive(false);
                        lootFrontRowList[index].gameObject.SetActive(false);
                        SetBattleLogText(int.Parse(corePlay.postmartam.minePostmartam[k].flee.id), 0, 0, false, false, false, false, false, 0, false, true);

                    }

                }

            }


        }
        yield return new WaitForSeconds(0f);
        //Debug.Log("Out of flee coroute");
    }

    public void FleeStressIncreaseHelper(int cyborgID, double finalStress, List<int> idList, List<GameObject> positionList)
    {
        int remainingTeamMember = cyborgID;
        int index1 = idList.IndexOf(remainingTeamMember);
        StartCoroutine(stressIncreaseAnim(positionList[index1], 10, finalStress));
    }
    public IEnumerator stressIncreaseAnim(GameObject obj, double stressChange, double stress, bool miss = false)
    {
        if (miss)
        {
            yield return new WaitForSeconds(2f);
        }
        sm.stressIncVfx.Play();
        obj.GetComponent<BattleCard>().ModifyStress(stressChange);
        obj.GetComponent<BattleCard>().stressIncrease.SetActive(true);
        yield return new WaitForSeconds(2f);
        if (stress >= 50 && stress < 100)
        {
            obj.GetComponent<BattleCard>().stressedOutVFX.SetActive(true);
        }
        else if (stress == 100)
        {
            obj.GetComponent<BattleCard>().stressedOutVFX.SetActive(false);
        }
        obj.GetComponent<BattleCard>().stressIncrease.SetActive(false);
        if (stressChange != -1)
        {
            Popup.Create(obj.transform.position, stressChange.ToString("F1"), true);
        }


    }

    public IEnumerator stressDecreaseAnim(GameObject obj, double stress)
    {
        sm.stressDecVfx.Play();
        obj.GetComponent<BattleCard>().ModifyStress(stress);
        obj.GetComponent<BattleCard>().stressDecrease.SetActive(true);
        yield return new WaitForSeconds(2f);

        obj.GetComponent<BattleCard>().stressDecrease.SetActive(false);
        if (stress != -1)
        {
            Popup.Create(obj.transform.position, stress.ToString("F1"), true);
        }
        if (stress <= 50)
        {
            obj.GetComponent<BattleCard>().stressedOutVFX.SetActive(false);
        }
    }

    public IEnumerator HighlightAnimation(GameObject obj)
    {
        obj.GetComponent<BattleCard>().attackingHighlight.SetActive(true);
        yield return new WaitForSeconds(seconds);
        //obj.transform.DOMove(pos, 1f);
        obj.GetComponent<BattleCard>().attackingHighlight.SetActive(false);
    }

    public IEnumerator BackToHome()
    {
        yield return new WaitForSeconds(5f);
        nm.mineOrLoot = "";
        OnClickHome();
    }

    public void Fainted(GameObject obj)
    {
        obj.GetComponent<BattleCard>().brawlerCrit.SetActive(false);
        obj.GetComponent<BattleCard>().cardFaint.SetActive(true);
        sm.faint.Play();
    }

    public IEnumerator BattleEnd(float seconds)
    {
        Time.timeScale = 1.5f;
        //redundant code optimize later
        yield return new WaitForSeconds(seconds);
        nm.mineOrLoot = "";
        sm.faint.Stop();
        //Debug.Log("Battle End");

        //if (battleSimulation.result != null)
        //{

        if (nm.isDemo)
        {
            //reversing names for switching side of won loss just for demo
            List<LootN> lootCyborgs = dmlr.result.participant.loot;
            List<MineN> mineCyborgs = dmlr.result.participant.mine;
            if (NetworkingManager.instance.gm.gameMode)
            {
                rewardText.text = dmlr.result.result.win.reward.SGF2.ToString() + " $SGF2";
            }
            else
            {
                rewardText.text = dmlr.result.result.win.reward.SGF1.ToString() + " $SGF1";
            }

            tokenText.text = "";
            if (NetworkingManager.instance.gm.gameMode)
            {
                lossRewardText.text = dmlr.result.result.loss.reward.SGF2.ToString() + " $SGF2";
            }
            else
            {
                lossRewardText.text = dmlr.result.result.loss.reward.SGF1.ToString() + " $SGF1";
            }

            lossTokenText.text = "";

            if (dmlr.result.result.win.team == "loot")
            {
                if (!nm.isLootWin)
                {
                    Debug.Log("!isMine mine won");
                    if (dmlr.result.result.win.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = nm.userDetails.result.username;
                    }
                    else if (dmlr.result.result.loss.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = nm.userDetails.result.username;
                    }
                    victoryDefeatText.text = "Defeat";
                    victoryDefeatText.color = Color.red;
                    leftUsername.text = nm.userDetails.result.username;
                    rightUsername.text = "SG";
                }
                if (nm.isLootWin)
                {
                    Debug.Log("isMine mine won");
                    if (dmlr.result.result.win.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = nm.userDetails.result.username;
                    }
                    else if (dmlr.result.result.loss.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = nm.userDetails.result.username;
                    }
                    leftUsername.text = nm.userDetails.result.username;
                    rightUsername.text = "SG";
                }
                for (int i = 0; i < leftCyborgs.Count; i++)
                {
                    if (nm.isLootWin)
                    {
                        leftCyborgs[i].nameText.text = lootCyborgs[i].name;
                        rightCyborgs[i].nameText.text = mineCyborgs[i].name;
                    }
                    else
                    {
                        leftCyborgs[i].nameText.text = mineCyborgs[i].name;
                        rightCyborgs[i].nameText.text = lootCyborgs[i].name;
                    }

                    for (int j = 0; j < dmlr.result.result.loss.reward.cyborgChanges.Count; j++)
                    {
                        if (dmlr.result.result.loss.reward.cyborgChanges[j].cyborgID == mineCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = dmlr.result.result.loss.reward.cyborgChanges[j].xp - mineCyborgs[i].xp;
                            energyChange = dmlr.result.result.loss.reward.cyborgChanges[j].energy - mineCyborgs[i].energy;
                            stressChange = (float)(dmlr.result.result.loss.reward.cyborgChanges[j].stress - mineCyborgs[i].stressPoint);
                            leftCyborgs[i].energy.text = dmlr.result.result.loss.reward.cyborgChanges[j].energy.ToString("0.00");
                            leftCyborgs[i].stress.text = dmlr.result.result.loss.reward.cyborgChanges[j].stress.ToString("0.00") + "%";
                            leftCyborgs[i].xp.text = dmlr.result.result.loss.reward.cyborgChanges[j].xp.ToString();
                            leftCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            leftCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            leftCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = dmlr.result.result.loss.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            leftCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            leftCyborgs[i].xpBar.GetComponent<Slider>().value = dmlr.result.result.loss.reward.cyborgChanges[j].xp;
                            leftCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            Debug.Log(dmlr.result.result.loss.reward.cyborgChanges[j].quirks.Count);
                            for (int k = 0; k < dmlr.result.result.loss.reward.cyborgChanges[j].quirks.Count; k++)
                            {
                                QuirkN quirk = dmlr.result.result.loss.reward.cyborgChanges[j].quirks[k];
                                if (quirk.attributes.Count > 0)
                                {
                                    Debug.Log(quirk.attributes.Count);
                                    for (int l = 0; l < dmlr.result.result.loss.reward.cyborgChanges[j].quirks[k].attributes.Count; l++)
                                    {
                                        AttributeN attribute = dmlr.result.result.loss.reward.cyborgChanges[j].quirks[k].attributes[l];
                                        Debug.Log(attribute.attribute + attribute.effect);
                                        GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                        quirkObject.GetComponentInChildren<TMP_Text>().text = mineCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect);
                                        Debug.Log("Win quirk1");
                                    }



                                }
                            }
                        }
                    }
                    for (int j = 0; j < dmlr.result.result.win.reward.cyborgChanges.Count; j++)
                    {
                        if (dmlr.result.result.win.reward.cyborgChanges[j].cyborgID == lootCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = dmlr.result.result.win.reward.cyborgChanges[j].xp - lootCyborgs[i].xp;
                            energyChange = dmlr.result.result.win.reward.cyborgChanges[j].energy - lootCyborgs[i].energy;
                            stressChange = (float)(dmlr.result.result.win.reward.cyborgChanges[j].stress - lootCyborgs[i].stressPoint);
                            rightCyborgs[i].energy.text = dmlr.result.result.win.reward.cyborgChanges[j].energy.ToString("0.0");
                            rightCyborgs[i].stress.text = dmlr.result.result.win.reward.cyborgChanges[j].stress.ToString("0.0") + "%";
                            rightCyborgs[i].xp.text = dmlr.result.result.win.reward.cyborgChanges[j].xp.ToString();
                            rightCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            rightCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            rightCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = dmlr.result.result.win.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            rightCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            rightCyborgs[i].xpBar.GetComponent<Slider>().value = dmlr.result.result.win.reward.cyborgChanges[j].xp;
                            rightCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            foreach (QuirkN quirk in dmlr.result.result.win.reward.cyborgChanges[j].quirks)
                            {
                                if (quirk.attributes.Count > 0)
                                {
                                    foreach (AttributeN attribute in dmlr.result.result.win.reward.cyborgChanges[j].quirks[j].attributes)
                                    {
                                        GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                        quirkObject.GetComponentInChildren<TMP_Text>().text = lootCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect);
                                        //Debug.Log(nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect));
                                        Debug.Log("Lose quirk1");
                                    }
                                }
                            }
                        }
                    }


                    if (nm.isLootWin)
                    {
                        nm.SetCyborgPfp(rightCyborgs[i].origin, rightCyborgs[i].neck, rightCyborgs[i].body, rightCyborgs[i].jaw, rightCyborgs[i].vest, rightCyborgs[i].helmet, rightCyborgs[i].eye, mineCyborgs[i].trait.bodyParts.originPlanet.name, mineCyborgs[i].trait.bodyParts.gender, mineCyborgs[i].trait.bodyParts.vest, mineCyborgs[i].trait.bodyParts.eye.name, mineCyborgs[i].trait.bodyParts.neck.name, mineCyborgs[i].trait.bodyParts.skin, mineCyborgs[i].rank);
                        nm.SetCyborgPfp(leftCyborgs[i].origin, leftCyborgs[i].neck, leftCyborgs[i].body, leftCyborgs[i].jaw, leftCyborgs[i].vest, leftCyborgs[i].helmet, leftCyborgs[i].eye, lootCyborgs[i].trait.bodyParts.originPlanet.name, lootCyborgs[i].trait.bodyParts.gender, lootCyborgs[i].trait.bodyParts.vest, lootCyborgs[i].trait.bodyParts.eye.name, lootCyborgs[i].trait.bodyParts.neck.name, lootCyborgs[i].trait.bodyParts.skin, lootCyborgs[i].rank);
                    }

                    else
                    {
                        nm.SetCyborgPfp(leftCyborgs[i].origin, leftCyborgs[i].neck, leftCyborgs[i].body, leftCyborgs[i].jaw, leftCyborgs[i].vest, leftCyborgs[i].helmet, leftCyborgs[i].eye, mineCyborgs[i].trait.bodyParts.originPlanet.name, mineCyborgs[i].trait.bodyParts.gender, mineCyborgs[i].trait.bodyParts.vest, mineCyborgs[i].trait.bodyParts.eye.name, mineCyborgs[i].trait.bodyParts.neck.name, mineCyborgs[i].trait.bodyParts.skin, mineCyborgs[i].rank);
                        nm.SetCyborgPfp(rightCyborgs[i].origin, rightCyborgs[i].neck, rightCyborgs[i].body, rightCyborgs[i].jaw, rightCyborgs[i].vest, rightCyborgs[i].helmet, rightCyborgs[i].eye, lootCyborgs[i].trait.bodyParts.originPlanet.name, lootCyborgs[i].trait.bodyParts.gender, lootCyborgs[i].trait.bodyParts.vest, lootCyborgs[i].trait.bodyParts.eye.name, lootCyborgs[i].trait.bodyParts.neck.name, lootCyborgs[i].trait.bodyParts.skin, lootCyborgs[i].rank);

                    }
                    //Debug.Log("Post battle pfp" + lootCyborgs[i].trait.bodyParts.originPlanet.name + lootCyborgs[i].trait.bodyParts.eye.name + lootCyborgs[i].trait.bodyParts.neck.name);
                    nm.SetCyborgPfp(leftCyborgs[i].origin, leftCyborgs[i].neck, leftCyborgs[i].body, leftCyborgs[i].jaw, leftCyborgs[i].vest, leftCyborgs[i].helmet, leftCyborgs[i].eye, mineCyborgs[i].trait.bodyParts.originPlanet.name, mineCyborgs[i].trait.bodyParts.gender, mineCyborgs[i].trait.bodyParts.vest, mineCyborgs[i].trait.bodyParts.eye.name, mineCyborgs[i].trait.bodyParts.neck.name, mineCyborgs[i].trait.bodyParts.skin, mineCyborgs[i].rank);
                    nm.SetCyborgPfp(rightCyborgs[i].origin, rightCyborgs[i].neck, rightCyborgs[i].body, rightCyborgs[i].jaw, rightCyborgs[i].vest, rightCyborgs[i].helmet, rightCyborgs[i].eye, lootCyborgs[i].trait.bodyParts.originPlanet.name, lootCyborgs[i].trait.bodyParts.gender, lootCyborgs[i].trait.bodyParts.vest, lootCyborgs[i].trait.bodyParts.eye.name, lootCyborgs[i].trait.bodyParts.neck.name, lootCyborgs[i].trait.bodyParts.skin, lootCyborgs[i].rank);
                }
                //winnerOfBattle.text = "Mine Wins";
            }
            else if (dmlr.result.result.win.team == "mine")
            {
                if (!isMine)
                {
                    //Debug.Log("isMine loot won");
                    if (dmlr.result.result.win.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = battleSimulation.result.lootPlayerId;
                    }
                    else if (dmlr.result.result.loss.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = battleSimulation.result.minePlayerId;
                    }
                    Debug.Log("isMine loot won defeat update");
                    victoryDefeatText.text = "Defeat";
                    victoryDefeatText.color = Color.red;
                    leftUsername.text = dmlr.result.lootUserName;
                    rightUsername.text = dmlr.result.mineUserName;
                }
                else
                {
                    Debug.Log("not isMine loot won");
                    if (dmlr.result.result.win.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = battleSimulation.result.minePlayerId;
                    }
                    else if (dmlr.result.result.loss.reward.lootbox.xp.Count > 0)
                    {
                        lootBoxNameText.text = battleSimulation.result.lootPlayerId;
                    }
                    leftUsername.text = dmlr.result.mineUserName;
                    rightUsername.text = dmlr.result.lootUserName;
                }
                for (int i = 0; i < leftCyborgs.Count; i++)
                {
                    leftCyborgs[i].nameText.text = lootCyborgs[i].name;
                    rightCyborgs[i].nameText.text = mineCyborgs[i].name;

                    for (int j = 0; j < dmlr.result.result.win.reward.cyborgChanges.Count; j++)
                    {
                        if (dmlr.result.result.win.reward.cyborgChanges[j].cyborgID == lootCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = dmlr.result.result.win.reward.cyborgChanges[j].xp - lootCyborgs[i].xp;
                            energyChange = dmlr.result.result.win.reward.cyborgChanges[j].energy - lootCyborgs[i].energy;
                            stressChange = (float)(dmlr.result.result.win.reward.cyborgChanges[j].stress - lootCyborgs[i].stressPoint);
                            leftCyborgs[i].energy.text = dmlr.result.result.win.reward.cyborgChanges[j].energy.ToString("0.00");
                            leftCyborgs[i].stress.text = dmlr.result.result.win.reward.cyborgChanges[j].stress.ToString("0.00") + "%";
                            leftCyborgs[i].xp.text = dmlr.result.result.win.reward.cyborgChanges[j].xp.ToString();
                            leftCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            leftCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            leftCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = dmlr.result.result.win.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            leftCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            leftCyborgs[i].xpBar.GetComponent<Slider>().value = dmlr.result.result.win.reward.cyborgChanges[j].xp;
                            leftCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            foreach (QuirkN quirk in dmlr.result.result.win.reward.cyborgChanges[j].quirks)
                            {
                                if (quirk.attributes.Count > 0)
                                {
                                    foreach (AttributeN attribute in dmlr.result.result.win.reward.cyborgChanges[j].quirks[j].attributes)
                                    {
                                        GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                        quirkObject.GetComponentInChildren<TMP_Text>().text = lootCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect);
                                        //Debug.Log(nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect));
                                        Debug.Log("Win quirk2");
                                    }
                                }
                            }

                        }
                    }
                    for (int j = 0; j < dmlr.result.result.loss.reward.cyborgChanges.Count; j++)
                    {
                        if (dmlr.result.result.loss.reward.cyborgChanges[j].cyborgID == mineCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = dmlr.result.result.loss.reward.cyborgChanges[j].xp - mineCyborgs[i].xp;
                            energyChange = dmlr.result.result.loss.reward.cyborgChanges[j].energy - mineCyborgs[i].energy;
                            stressChange = (float)(dmlr.result.result.loss.reward.cyborgChanges[j].stress - mineCyborgs[i].stressPoint);
                            rightCyborgs[i].energy.text = dmlr.result.result.loss.reward.cyborgChanges[j].energy.ToString("0.00");
                            rightCyborgs[i].stress.text = dmlr.result.result.loss.reward.cyborgChanges[j].stress.ToString("0.00") + "%";
                            rightCyborgs[i].xp.text = dmlr.result.result.loss.reward.cyborgChanges[j].xp.ToString();
                            rightCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            rightCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            rightCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = dmlr.result.result.loss.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            rightCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            rightCyborgs[i].xpBar.GetComponent<Slider>().value = dmlr.result.result.loss.reward.cyborgChanges[j].xp;
                            rightCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            foreach (QuirkN quirk in dmlr.result.result.loss.reward.cyborgChanges[j].quirks)
                            {
                                if (quirk.attributes.Count > 0)
                                {
                                    foreach (AttributeN attribute in dmlr.result.result.loss.reward.cyborgChanges[j].quirks[j].attributes)
                                    {
                                        GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                        quirkObject.GetComponentInChildren<TMP_Text>().text = mineCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect);
                                        //Debug.Log(nm.GetQuirk(quirk.type, attribute.attribute, attribute.effect));
                                        Debug.Log("Lose quirk2");
                                    }
                                }
                            }
                        }
                    }
                    //Debug.Log("Post battle pfp" + lootCyborgs[i].trait.bodyParts.originPlanet.name + lootCyborgs[i].trait.bodyParts.eye.name + lootCyborgs[i].trait.bodyParts.neck.name);

                    nm.SetCyborgPfp(leftCyborgs[i].origin, leftCyborgs[i].neck, leftCyborgs[i].body, leftCyborgs[i].jaw, leftCyborgs[i].vest, leftCyborgs[i].helmet, leftCyborgs[i].eye, lootCyborgs[i].trait.bodyParts.originPlanet.name, lootCyborgs[i].trait.bodyParts.gender, lootCyborgs[i].trait.bodyParts.vest, lootCyborgs[i].trait.bodyParts.eye.name, lootCyborgs[i].trait.bodyParts.neck.name, lootCyborgs[i].trait.bodyParts.skin, lootCyborgs[i].rank);
                    nm.SetCyborgPfp(rightCyborgs[i].origin, rightCyborgs[i].neck, rightCyborgs[i].body, rightCyborgs[i].jaw, rightCyborgs[i].vest, rightCyborgs[i].helmet, rightCyborgs[i].eye, mineCyborgs[i].trait.bodyParts.originPlanet.name, mineCyborgs[i].trait.bodyParts.gender, mineCyborgs[i].trait.bodyParts.vest, mineCyborgs[i].trait.bodyParts.eye.name, mineCyborgs[i].trait.bodyParts.neck.name, mineCyborgs[i].trait.bodyParts.skin, mineCyborgs[i].rank);
                }
                //winnerOfBattle.text = "Loot Wins";
            }
            winScreen.SetActive(true);
        }
        else if (nm.isWager)
        {
            //NetworkingManager.instance.isWager = false;
            SceneManager.LoadScene(1);
        }
        else
        {

            List<MineCyborgN> mineCyborgs = battleSimulation.result.mineCyborgs;
            List<LootCyborgN> lootCyborgs = battleSimulation.result.lootCyborgs;
            if (NetworkingManager.instance.gm.gameMode)
            {
                rewardText.text = (battleSimulation.result.lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString() + " $SGF2";
            }
            else
            {
                rewardText.text = (battleSimulation.result.lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString() + " $SGF1";
            }

            //tokenText.text = battleSimulation.result.lootSimulation.result.win.reward.SGF2.ToString() + " $SGF2";
            if (NetworkingManager.instance.gm.gameMode)
            {
                lossRewardText.text = (battleSimulation.result.lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString() + " $SGF2";
            }
            else
            {
                lossRewardText.text = (battleSimulation.result.lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString() + " $SGF1";
            }

            //lossTokenText.text = battleSimulation.result.lootSimulation.result.loss.reward.SGF2.ToString() + " $SGF2";

            if (battleSimulation.result.lootSimulation.result.win.team == "mine")
            {
                if (!isMine)
                {
                    //Debug.Log("!isMine mine won");         
                    victoryDefeatText.text = "Defeat";
                    victoryDefeatText.color = Color.red;
                    leftUsername.text = battleSimulation.result.lootSimulation.mineUserName;
                    rightUsername.text = battleSimulation.result.lootSimulation.lootUserName;
                }
                else
                {
                    // Debug.Log("isMine mine won");
                    leftUsername.text = battleSimulation.result.lootSimulation.mineUserName;
                    rightUsername.text = battleSimulation.result.lootSimulation.lootUserName;
                }
                if (battleSimulation.result.lootSimulation.result.win.reward.lootbox.xp.Count > 0)
                {
                    lootBoxNameText.text = battleSimulation.result.lootSimulation.mineUserName;
                }
                else if (battleSimulation.result.lootSimulation.result.loss.reward.lootbox.xp.Count > 0)
                {
                    lootBoxNameText.text = battleSimulation.result.lootSimulation.lootUserName;
                }
                for (int i = 0; i < leftCyborgs.Count; i++)
                {

                    leftCyborgs[i].nameText.text = mineCyborgs[i].name;
                    rightCyborgs[i].nameText.text = lootCyborgs[i].name;
                    leftCyborgs[i].id = mineCyborgs[i].id;
                    rightCyborgs[i].id = lootCyborgs[i].id;
                    for (int j = 0; j < battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges.Count; j++)
                    {
                        if (battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].cyborgID == mineCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].xp - mineCyborgs[i].xp;
                            energyChange = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].energy - mineCyborgs[i].energy;
                            stressChange = (float)(battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].stress - mineCyborgs[i].stressPoint);
                            leftCyborgs[i].energy.text = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].energy.ToString("0.00");
                            leftCyborgs[i].stress.text = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].stress.ToString("0.00") + "%";
                            leftCyborgs[i].xp.text = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].xp.ToString();
                            leftCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            leftCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            leftCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            leftCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            leftCyborgs[i].xpBar.GetComponent<Slider>().value = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].xp;
                            leftCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;

                            if (battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[0] != 0)
                            {
                                Debug.Log("New Quirk Flow");
                                //AttributeN attribute = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].quirks[k].attributes[l];
                                //Debug.Log("Attribute " + attribute.attribute + "Attribute Effect " + attribute.effect);
                                //Debug.Log("Quirk type " + quirk.type);
                                GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                quirkObject.GetComponentInChildren<TMP_Text>().text = mineCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[0], battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[1], battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[2]);
                                Debug.Log("Win quirk1");
                            }




                        }
                    }

                    for (int j = 0; j < battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges.Count; j++)
                    {
                        if (battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].cyborgID == lootCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].xp - lootCyborgs[i].xp;
                            energyChange = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].energy - lootCyborgs[i].energy;
                            stressChange = (float)(battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].stress - lootCyborgs[i].stressPoint);
                            rightCyborgs[i].energy.text = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].energy.ToString("0.0");
                            rightCyborgs[i].stress.text = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].stress.ToString("0.0") + "%";
                            rightCyborgs[i].xp.text = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].xp.ToString();
                            rightCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            rightCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            rightCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            rightCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            rightCyborgs[i].xpBar.GetComponent<Slider>().value = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].xp;
                            rightCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            if (battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[0] != 0)
                            {
                                GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                quirkObject.GetComponentInChildren<TMP_Text>().text = lootCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[0], battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[1], battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[2]);
                                Debug.Log("Win quirk1");
                            }
                        }
                    }

                    //Debug.Log("Post battle pfp" + lootCyborgs[i].trait.bodyParts.originPlanet.name + lootCyborgs[i].trait.bodyParts.eye.name + lootCyborgs[i].trait.bodyParts.neck.name);
                    nm.SetCyborgPfp(leftCyborgs[i].origin, leftCyborgs[i].neck, leftCyborgs[i].body, leftCyborgs[i].jaw, leftCyborgs[i].vest, leftCyborgs[i].helmet, leftCyborgs[i].eye, mineCyborgs[i].trait.bodyParts.originPlanet.name, mineCyborgs[i].trait.bodyParts.gender, mineCyborgs[i].trait.bodyParts.vest, mineCyborgs[i].trait.bodyParts.eye.name, mineCyborgs[i].trait.bodyParts.neck.name, mineCyborgs[i].trait.bodyParts.skin, mineCyborgs[i].rank);
                    nm.SetCyborgPfp(rightCyborgs[i].origin, rightCyborgs[i].neck, rightCyborgs[i].body, rightCyborgs[i].jaw, rightCyborgs[i].vest, rightCyborgs[i].helmet, rightCyborgs[i].eye, lootCyborgs[i].trait.bodyParts.originPlanet.name, lootCyborgs[i].trait.bodyParts.gender, lootCyborgs[i].trait.bodyParts.vest, lootCyborgs[i].trait.bodyParts.eye.name, lootCyborgs[i].trait.bodyParts.neck.name, lootCyborgs[i].trait.bodyParts.skin, lootCyborgs[i].rank);
                }
                //winnerOfBattle.text = "Mine Wins";
            }
            else if (battleSimulation.result.lootSimulation.result.win.team == "loot")
            {
                if (isMine)
                {
                    //Debug.Log("isMine loot won");
                    //Debug.Log("isMine loot won defeat update");
                    victoryDefeatText.text = "Defeat";
                    victoryDefeatText.color = Color.red;
                    leftUsername.text = battleSimulation.result.lootSimulation.lootUserName;
                    rightUsername.text = battleSimulation.result.lootSimulation.mineUserName;
                }
                else
                {
                    //Debug.Log("not isMine loot won");
                    leftUsername.text = battleSimulation.result.lootSimulation.lootUserName;
                    rightUsername.text = battleSimulation.result.lootSimulation.mineUserName;
                }
                if (battleSimulation.result.lootSimulation.result.win.reward.lootbox.xp.Count > 0)
                {
                    lootBoxNameText.text = battleSimulation.result.lootSimulation.lootUserName;
                }
                else if (battleSimulation.result.lootSimulation.result.loss.reward.lootbox.xp.Count > 0)
                {
                    lootBoxNameText.text = battleSimulation.result.lootSimulation.mineUserName;
                }
                for (int i = 0; i < leftCyborgs.Count; i++)
                {
                    leftCyborgs[i].nameText.text = lootCyborgs[i].name;
                    rightCyborgs[i].nameText.text = mineCyborgs[i].name;
                    leftCyborgs[i].id = lootCyborgs[i].id;
                    rightCyborgs[i].id = mineCyborgs[i].id;

                    for (int j = 0; j < battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges.Count; j++)
                    {
                        if (battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].cyborgID == lootCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].xp - lootCyborgs[i].xp;
                            energyChange = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].energy - lootCyborgs[i].energy;
                            stressChange = (float)(battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].stress - lootCyborgs[i].stressPoint);
                            leftCyborgs[i].energy.text = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].energy.ToString("0.00");
                            leftCyborgs[i].stress.text = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].stress.ToString("0.00") + "%";
                            leftCyborgs[i].xp.text = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].xp.ToString();
                            leftCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            leftCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            leftCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            leftCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            leftCyborgs[i].xpBar.GetComponent<Slider>().value = battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].xp;
                            leftCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            if (battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[0] != 0)
                            {
                                GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                quirkObject.GetComponentInChildren<TMP_Text>().text = lootCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[0], battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[1], battleSimulation.result.lootSimulation.result.win.reward.cyborgChanges[j].newQuirk[2]);
                                Debug.Log("Win quirk1");
                            }

                        }
                    }
                    for (int j = 0; j < battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges.Count; j++)
                    {
                        if (battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].cyborgID == mineCyborgs[i].id)
                        {
                            float xpChange, energyChange, stressChange;
                            xpChange = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].xp - mineCyborgs[i].xp;
                            energyChange = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].energy - mineCyborgs[i].energy;
                            stressChange = (float)(battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].stress - mineCyborgs[i].stressPoint);
                            rightCyborgs[i].energy.text = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].energy.ToString("0.00");
                            rightCyborgs[i].stress.text = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].stress.ToString("0.00") + "%";
                            rightCyborgs[i].xp.text = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].xp.ToString();
                            rightCyborgs[i].stressInc.text = "(Stress +" + stressChange + ")";
                            rightCyborgs[i].xpInc.text = "(XP +" + xpChange + ")";
                            rightCyborgs[i].energyInc.text = "(Energy " + energyChange + ")";
                            int lvl = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].level;
                            int xpUpperLimit = nm.XPUpperLimit(lvl);
                            rightCyborgs[i].xpBar.GetComponent<Slider>().maxValue = xpUpperLimit;
                            rightCyborgs[i].xpBar.GetComponent<Slider>().value = battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].xp;
                            rightCyborgs[i].levelBanner.GetComponentInChildren<TMP_Text>().text = "Lv. " + lvl;
                            if (battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[0] != 0)
                            {
                                GameObject quirkObject = Instantiate(quirkPrefab, qmScrollViewContent.transform);
                                quirkObject.GetComponentInChildren<TMP_Text>().text = mineCyborgs[i].name + " Got a Quirk which " + nm.GetQuirk(battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[0], battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[1], battleSimulation.result.lootSimulation.result.loss.reward.cyborgChanges[j].newQuirk[2]);
                                Debug.Log("Win quirk1");
                            }
                        }
                    }
                    //Debug.Log("Post battle pfp" + lootCyborgs[i].trait.bodyParts.originPlanet.name + lootCyborgs[i].trait.bodyParts.eye.name + lootCyborgs[i].trait.bodyParts.neck.name);

                    nm.SetCyborgPfp(leftCyborgs[i].origin, leftCyborgs[i].neck, leftCyborgs[i].body, leftCyborgs[i].jaw, leftCyborgs[i].vest, leftCyborgs[i].helmet, leftCyborgs[i].eye, lootCyborgs[i].trait.bodyParts.originPlanet.name, lootCyborgs[i].trait.bodyParts.gender, lootCyborgs[i].trait.bodyParts.vest, lootCyborgs[i].trait.bodyParts.eye.name, lootCyborgs[i].trait.bodyParts.neck.name, lootCyborgs[i].trait.bodyParts.skin, lootCyborgs[i].rank);
                    nm.SetCyborgPfp(rightCyborgs[i].origin, rightCyborgs[i].neck, rightCyborgs[i].body, rightCyborgs[i].jaw, rightCyborgs[i].vest, rightCyborgs[i].helmet, rightCyborgs[i].eye, mineCyborgs[i].trait.bodyParts.originPlanet.name, mineCyborgs[i].trait.bodyParts.gender, mineCyborgs[i].trait.bodyParts.vest, mineCyborgs[i].trait.bodyParts.eye.name, mineCyborgs[i].trait.bodyParts.neck.name, mineCyborgs[i].trait.bodyParts.skin, mineCyborgs[i].rank);
                }
            }
            winScreen.SetActive(true);
            //winnerOfBattle.text = "Loot Wins";
        }
        if (isReplay && canCollectReward)
        {
            claimBtn.SetActive(true);
        }



        //StartCoroutine(BackToHome());
        //}
    }
    public void OnClickHome()
    {
        if (nm.startMine)
        {
            nm.startMine = false;
            nm.mineSkip = true;
        }
        else if (nm.startLoot)
        {
            nm.startLoot = false;
            nm.lootSkip = true;
        }
        sm.clickVfx.Play();
        sm.mineVfx.Stop();
        sm.faint.Stop();
        if (nm.mineOrLoot == "loot" || nm.isDemo)
        {
            skip = true;
            //BattleEnd();
        }
        else
        {
            nm.mineOrLoot = "";
            if (NetworkingManager.instance.gm.gameMode)
            {
                SceneManager.LoadScene(1);
            }
            else
            {
                SceneManager.LoadScene(1);
            }

        }

    }

    public void LoadHomeScreen()
    {
        nm.mineOrLoot = "";
        if (NetworkingManager.instance.gm.gameMode)
        {
            SceneManager.LoadScene(1);
        }
        else
        {
            SceneManager.LoadScene(1);
        }

        sm.faint.Stop();
    }

    public void ClickSFX()
    {
        sm.clickVfx.Play();
    }
    public void OnClickBattleLogButton()
    {
        isOpen = !isOpen;
        if (isOpen)
        {
            battleLogTable.transform.localScale = Vector3.one;
        }
        else
        {
            battleLogTable.transform.localScale = Vector3.zero;
        }
    }

    public void SetBattleLogText(int attackerID, int defenderID, double attack, bool isCrit, bool mine, bool isHeal, bool isMiss, bool isDodge, double stress, bool isFainted, bool isFlee = false)
    {
        string attackerName = "";
        string defenderName = "";
        if (!nm.isDemo && !nm.isWager)
        {
            foreach (MineCyborgN mineCyb in battleSimulation.result.mineCyborgs)
            {
                if (attackerID == mineCyb.id)
                {
                    attackerName = mineCyb.name;
                }
                else if (defenderID == mineCyb.id)
                {
                    defenderName = mineCyb.name;
                }
            }
            foreach (LootCyborgN lootCyb in battleSimulation.result.lootCyborgs)
            {
                if (attackerID == lootCyb.id)
                {
                    attackerName = lootCyb.name;
                }
                else if (defenderID == lootCyb.id)
                {
                    defenderName = lootCyb.name;
                }
            }
        }
        else
        {
            Debug.Log("Set Battle Log Text else");
            foreach (MineN mineCyb in mineCyborgs2)
            {
                if (attackerID == mineCyb.id)
                {
                    attackerName = mineCyb.name;
                }
                else if (defenderID == mineCyb.id)
                {
                    defenderName = mineCyb.name;
                }
            }
            foreach (LootN lootCyb in lootCyborgs2)
            {
                if (attackerID == lootCyb.id)
                {
                    attackerName = lootCyb.name;
                }
                else if (defenderID == lootCyb.id)
                {
                    defenderName = lootCyb.name;
                }
            }
        }


        if (mine)
        {
            GameObject battleText = Instantiate(mineBattleText, battleLogTableScrollViewContent.transform);
            GameObject upperText = Instantiate(upperLogPrefab, upperLogScrollViewContent.transform);

            if (isFlee)
            {
                battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} has fled the battle";
                upperText.GetComponent<TMP_Text>().text = $"-> {attackerName} has fled the battle";
            }
            else if (isMiss)
            {
                battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} missed hit, {attackerName} stress <color=#26FDDD>(+{stress})</color>";
                upperText.GetComponent<TMP_Text>().text = $"{attackerName} missed hit, {attackerName} stress <color=#26FDDD>(+{stress})</color>";
            }
            else if (isDodge)
            {
                battleText.GetComponent<TMP_Text>().text = $"-> {defenderName} dodged hit from {attackerName}, {defenderName} stress <color=#26FDDD>({stress})</color>";
                upperText.GetComponent<TMP_Text>().text = $"{defenderName} dodged hit from {attackerName}, {defenderName} stress <color=#26FDDD>({stress})</color>";
            }

            else if (!isCrit)
            {
                battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>";
                upperText.GetComponent<TMP_Text>().text = $"{attackerName} hit, {defenderName} health <color=green>({attack.ToString("F1")})</color> ";
                if (isFainted)
                {
                    battleText.GetComponent<TMP_Text>().text = $"-> {defenderName} has fainted";
                    upperText.GetComponent<TMP_Text>().text = $"{defenderName} has fainted";
                }
            }
            else
            {
                if (isHeal)
                {
                    battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} dealt a critical hit, {attackerName} healed <color=green>(+{attack.ToString("F1")})</color> ";
                    upperText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {attackerName} healed <color=green>(+{attack.ToString("F1")})</color> ";
                }
                else
                {
                    if (stress > 0)
                    {
                        battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>, {defenderName} stress <color=#26FDDD>(-{stress})</color>";
                        upperText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>, {defenderName} stress <color=#26FDDD>(-{stress})</color>";
                    }
                    else
                    {
                        battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color> ";
                        upperText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color> ";
                    }

                    if (isFainted)
                    {
                        GameObject battleText2 = Instantiate(lootBattleText, battleLogTableScrollViewContent.transform);
                        battleText2.GetComponent<TMP_Text>().text = $"{defenderName} has fainted. <-";
                        upperText.GetComponent<TMP_Text>().text = $"{defenderName} has fainted.";
                    }
                }

            }
        }
        else
        {
            GameObject battleText = Instantiate(lootBattleText, battleLogTableScrollViewContent.transform);
            GameObject upperText = Instantiate(upperLogPrefab, upperLogScrollViewContent.transform);
            if (isFlee)
            {
                battleText.GetComponent<TMP_Text>().text = $"-> {attackerName} has fled the battle";
                upperText.GetComponent<TMP_Text>().text = $"-> {attackerName} has fled the battle";
            }
            else if (isMiss)
            {
                battleText.GetComponent<TMP_Text>().text = $"{attackerName} missed hit, {attackerName} stress <color=#26FDDD>(+{stress})</color> <-";
                upperText.GetComponent<TMP_Text>().text = $"{attackerName} missed hit, {attackerName} stress <color=#26FDDD>(+{stress})</color>";
            }
            else if (isDodge)
            {
                battleText.GetComponent<TMP_Text>().text = $"{defenderName} dodged hit from {attackerName}, {defenderName} stress <color=#26FDDD>({stress})</color> <-";
                upperText.GetComponent<TMP_Text>().text = $"{defenderName} dodged hit from {attackerName}, {defenderName} <color=#26FDDD>stress({stress})</color>";
            }
            else if (!isCrit)
            {
                battleText.GetComponent<TMP_Text>().text = $"{attackerName} hit, {defenderName} health <color=green>({attack.ToString("F1")})</color> <-";
                upperText.GetComponent<TMP_Text>().text = $"{attackerName} hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>";
                if (isFainted)
                {
                    battleText.GetComponent<TMP_Text>().text = $"{defenderName} has fainted <-";
                    upperText.GetComponent<TMP_Text>().text = $"{defenderName} has fainted";
                }
            }
            else
            {
                if (isHeal)
                {
                    battleText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {attackerName} healed <color=green>(+{attack.ToString("F1")})</color> <-";
                    upperText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {attackerName} healed <color=green>(+{attack.ToString("F1")})</color>";
                }
                else
                {
                    if (stress > 0)
                    {
                        battleText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>, {defenderName} stress <color=#26FDDD>(-{stress})</color> <-";
                        upperText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>, {defenderName} stress <color=#26FDDD>(-{stress})</color>";
                    }
                    else
                    {
                        battleText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color> <-";
                        upperText.GetComponent<TMP_Text>().text = $"{attackerName} dealt a critical hit, {defenderName} health <color=green>({attack.ToString("F1")})</color>";
                    }
                    if (isFainted)
                    {
                        GameObject battleText2 = Instantiate(mineBattleText, battleLogTableScrollViewContent.transform);
                        battleText2.GetComponent<TMP_Text>().text = $"-> {defenderName} has fainted.";
                        upperText.GetComponent<TMP_Text>().text = $"{defenderName} has fainted.";
                    }
                }

            }
        }
        StartCoroutine(ScrollToBottom());
    }

    IEnumerator DodgeAnim(GameObject obj)
    {
        Vector3 initTransform = obj.transform.localPosition;
        // Debug.Log("Dodge Anim");
        obj.transform.DOMoveX(initTransform.x + 0.25f, 0.25f);
        yield return new WaitForSeconds(0.25f);
        obj.transform.DOMoveX(initTransform.x - 0.25f, 0.25f);
        yield return new WaitForSeconds(0.25f);
        obj.transform.DOMove(initTransform, 0.25f);

    }

    IEnumerator ScrollToBottom()
    {
        yield return new WaitForEndOfFrame();
        upperLogScrollViewContent.GetComponentInParent<ScrollRect>().verticalNormalizedPosition = 0;
        // battleLogTableScrollViewContent.GetComponentInParent<ScrollRect>().verticalNormalizedPosition = 0;
    }

    public void DemoBattleEnd()
    {
        StartCoroutine(BattleEnd(0f));
    }
    public void BeginDemoBattle()
    {
        StartCoroutine(SimulateBattle(dmlr.result.corePlay));
    }

    public void OnClickLootBox()
    {
        SceneManager.LoadScene(5);
        //CanvasHandler.instance.lootBoxDemoPopup17.SetActive(true);
    }

    public void SwitchToMainGame()
    {
        SceneManager.LoadScene(1);
    }

    #region API Calls
    public void Feedback(int rating)
    {
        StartCoroutine(nm.UserFeedback(rating));
    }

    public void Activation()
    {
        if (activationInputField.text != "")
        {
            StartCoroutine(nm.Activation(activationInputField.text));
        }

    }


    public void OnClickHelp()
    {
        nm.OpenURL("https://medium.com/@stellargalactics");
    }
    #endregion
}



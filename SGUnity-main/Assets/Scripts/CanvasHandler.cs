using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Analytics;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CanvasHandler : MonoBehaviour
{
    public static CanvasHandler instance;
    [SerializeField] GameObject mainMenu, zion, profile, mineLoot;
    [SerializeField] public GameObject mineResources, lootOpenMines, activeLoots, history;
    [SerializeField] GameObject hamburgerPopup;
    [SerializeField] TMP_InputField editEmailInputField, editUsernameInputField;
    [SerializeField] Toggle mineToggle, lootToggle, activeLootsToggle, historyToggle, mineHistoryToggle, lootHistoryToggle;
    [SerializeField] Button saveUsernameButton, saveEmailButton;
    [SerializeField] public GameObject loadingCanvas;
    [SerializeField] public GameObject SuccessPopUpCyborgDrop, PopUpCyborgDrop;
    [SerializeField] public TMP_Text SuccessPopUpText;
    [SerializeField] public GameObject WalletCreationPopUp;
    [SerializeField] public TMP_Text walletID, airdroppingSOL, airDropSuccess;
    [SerializeField] public GameObject claimPopup, dailyRewardsPopup;
    [SerializeField] public TMP_Text claimRewardPopUpText, hamburgerUsernameText;
    public List<DailyRewardsDay> drd = new List<DailyRewardsDay>();
    //inventory
    [SerializeField] public GameObject inventoryCanvas, inventoryPopUpCanvas, RankUpPopUp, NotEnoughtPointsPopUp, succesfulPopUp, rankUpSpeedUp;
    [SerializeField] public TMP_Text inventoryCyborgCountText, cemeteryCyborgCountText;
    [SerializeField] public GameObject inventoryCyborgPrefab, cratePrefab;
    [SerializeField] public GameObject inventoryCyborgScrollViewContent, cemeteryScrollViewContent;
    [SerializeField] public GameObject cyborgFlow, cemeteryFlow, cyborgSelectedChild, cyborgSelectedChildScrollView, lootBoxScrollViewContent;
    //mining
    [SerializeField] public GameObject rank1Btn, rank2Btn, rank3Btn, rank4Btn, rank5Btn, rank6Btn;

    [SerializeField] TMP_Text mineCardRewardText;
    [SerializeField] public GameObject mineCanvas;
    [SerializeField] public GameObject mineActiveGroup, minePopupCanvas;
    [SerializeField] public GameObject mineTeamSelectionGroup;
    [SerializeField] public GameObject mineCyborgPrefab;
    [SerializeField] public GameObject mineCyborgScrollViewContent;
    [SerializeField] public GameObject CyborgStats, CyborgRightStats;
    [SerializeField] public GameObject miningCardsScrollViewContent;
    [SerializeField] public GameObject lootCardsScrollViewContent, lootHistoryScrollViewContent, mineHistoryScrollViewContent, noCyborgSelectedLoot, noCyborgSelectedMine;
    [SerializeField] public GameObject mineStartedCaardPrefab;
    [SerializeField] public GameObject quirkInfoPrefab;
    [SerializeField] public GameObject mineHistoryGroup;
    //looting
    [SerializeField] public GameObject lootingCardsScrollViewContent;
    [SerializeField] public GameObject lootStartedCaardPrefab;
    [SerializeField] public GameObject lootTeamSelectionGroup;
    [SerializeField] public GameObject CyborgStats2, CyborgRightStats2;
    [SerializeField] public GameObject lootCyborgScrollViewContent;
    [SerializeField] public GameObject mineLootActiveHitsoryGroup;
    //history
    [SerializeField] public GameObject lootHistoryGroup, failPopUp, noAvailableMines, noActiveLoot, mineNoHistory, lootNoHistory;
    [SerializeField] public GameObject mineCurrBtn, mineNextBtn, minePrevBtn, lootCurrBtn, lootNextBtn, lootPrevBtn;
    //zion
    [SerializeField] public GameObject zionCardsScrollViewContent;
    [SerializeField] public GameObject zionObject, tavernObject, hospitalObject;
    [SerializeField] public GameObject barSlot1, barSlot2, barSlot3;
    [SerializeField] public GameObject brothelSlot1, brothelSlot2, brothelSlot3;
    [SerializeField] public GameObject casinoSlot1, casinoSlot2, casinoSlot3;
    [SerializeField] public GameObject churchSlot1, churchSlot2, churchSlot3;
    [SerializeField] public GameObject hospitalSlot1, hospitalSlot2, hospitalSlot3;
    [SerializeField] public GameObject stressRelievedPopUpBar, zionPopUpCanvas, stressRelievedPopUpBrothel, stressRelievedPopUpCasino, stressRelievedPopUpChurch, quirkRemovedPopUpHospital, noStressPopUp, deadPopup;
    //celestial trials
    [SerializeField]
    public GameObject celestialTrialsCanvas, celestialTrialResultScreen, celestialTrialHomeScreen;
    //speedup
    [SerializeField] public GameObject zionSpeedUpPopup, lootboxSpeedUpPopup;
    //failcase popup
    [SerializeField]
    public GameObject failCasePopup;
    //demo
    [SerializeField] public GameObject demoCanvas;
    //Leaderboard
    [SerializeField] public GameObject leaderboardPrefab, playerLeaderboardPrefab, leaderboardScrollViewContent, tournamentBG, regularBG;
    public TMP_Text tournamentText;

    [SerializeField] SoundManager sm;
    [Header("Cyborg PFP Claim Popup")]
    public Image cyborgOriginPlanetImage;
    public Image cyborgBodyImage;
    public Image cyborgJawImage;
    public Image cyborgEyeImage;
    public Image cyborgNeckImage;
    public Image cyborgHelmetImage;
    public Image cyborgVestImage;

    int initvar = 0;


    #region ClaimVarsJSON
    public Signature signature = new Signature();
    #endregion

    void Awake()
    {
        instance = this;
        sm = SoundManager.instance;
    }
    private void OnEnable()
    {
        Time.timeScale = 1f;
        StartCoroutine(NetworkingManager.instance.GetUserDetails());
        //StartCoroutine(NetworkingManager.instance.GetSOLBalance());

        if (NetworkingManager.instance.mineSkip)
        {
            NetworkingManager.instance.mineSkip = false;
            mainMenu.SetActive(false);
            mineCanvas.SetActive(true);
            OnClickStartMining();
            OnClickRank2(NetworkingManager.instance.rankChosen);
        }
        if (NetworkingManager.instance.lootSkip)
        {
            NetworkingManager.instance.lootSkip = false;
            mainMenu.SetActive(false);
            mineCanvas.SetActive(true);
            OnClickStartLooting();
            OnClickRank2(NetworkingManager.instance.rankChosen);
        }
        if (NetworkingManager.instance.activeLootSkip)
        {
            NetworkingManager.instance.activeLootSkip = false;
            mainMenu.SetActive(false);
            mineCanvas.SetActive(true);
            OnClickActiveLootsMain();
            activeLootsToggle.isOn = true;
            OnClickRank2(NetworkingManager.instance.rankChosen);
        }
        if (NetworkingManager.instance.lootRepSkip)
        {
            NetworkingManager.instance.lootRepSkip = false;
            mainMenu.SetActive(false);
            mineCanvas.SetActive(true);
            lootHistoryToggle.isOn = true;
            mineHistoryToggle.isOn = false;
            OnClickLootHistory();
            OnClickRank2(NetworkingManager.instance.rankChosen);
        }
        if (NetworkingManager.instance.mineRepSkip)
        {
            NetworkingManager.instance.mineRepSkip = false;
            mainMenu.SetActive(false);
            mineCanvas.SetActive(true);
            OnClickMineHistory();
            OnClickRank2(NetworkingManager.instance.rankChosen);
        }
        if (!NetworkingManager.instance.isDemo)
        {
            if (NetworkingManager.instance.gm.gameMode)
            {
                tournamentBG.SetActive(true);
                regularBG.SetActive(false);
            }
            else
            {
                tournamentBG.SetActive(false);
                regularBG.SetActive(true);
            }

            string day1 = GetDayOfWeek(NetworkingManager.instance.gm.tourDays[0], false);
            string finalDay = GetDayOfWeek(NetworkingManager.instance.gm.tourDays[1], true);
            tournamentText.text = day1 + " 00:00 UTC - " + finalDay + " 00:00 UTC";
        }
        if (NetworkingManager.instance.isWager)
        {
            NetworkingManager.instance.isWager = false;
            celestialTrialsCanvas.SetActive(true);
            celestialTrialHomeScreen.SetActive(false);
            celestialTrialResultScreen.SetActive(true);
            mainMenu.SetActive(false);
            if (NetworkingManager.instance.wwr.result)
            {
                celestialTrialResultScreen.GetComponent<CelestialTrialsResult>().victoryDefeatText.text = "Win";
            }
            else
            {
                celestialTrialResultScreen.GetComponent<CelestialTrialsResult>().victoryDefeatText.text = "Loss";
                celestialTrialResultScreen.GetComponent<CelestialTrialsResult>().victoryDefeatText.color = Color.red;
            }
            celestialTrialResultScreen.GetComponent<CelestialTrialsResult>().rewardAmountText.text = (NetworkingManager.instance.wwr.reward / 1000000000).ToString();
        }

        StartCoroutine(NetworkingManager.instance.GetRewardDay());
    }

    public void ClickSFX()
    {
        sm.clickVfx.Play();
    }

    public void SetPageNumberHistory()
    {
        if (mineHistoryGroup.activeInHierarchy)
        {
            int currPage = NetworkingManager.instance.mineHistoryPageCount;
            int prevPage = NetworkingManager.instance.mineHistoryPageCount - 1;
            int nextPage = NetworkingManager.instance.mineHistoryPageCount + 1;
            //set curr btn
            mineCurrBtn.GetComponent<HistoryPage>().pageNumber = currPage;
            mineCurrBtn.GetComponent<HistoryPage>().SetText();
            if (prevPage < 1)
            {
                minePrevBtn.SetActive(false);
                // disable btn
            }
            else
            {
                minePrevBtn.SetActive(true);
                minePrevBtn.GetComponent<HistoryPage>().pageNumber = prevPage;
                minePrevBtn.GetComponent<HistoryPage>().SetText();
                //set button active and set number to button
            }
            if (!NetworkingManager.instance.gm.gameMode)
            {
                if (nextPage > (NetworkingManager.instance.mineData.data.Count - NetworkingManager.instance.tournamentMineHistoryCount) / 20)
                {
                    mineNextBtn.SetActive(false);
                    //disable btn
                }
                else
                {
                    mineNextBtn.SetActive(true);
                    mineNextBtn.GetComponent<HistoryPage>().pageNumber = nextPage;
                    mineNextBtn.GetComponent<HistoryPage>().SetText();
                    //set button active and set number to button
                }
            }
            else
            {
                if (nextPage > NetworkingManager.instance.tournamentMineHistoryCount / 20)
                {
                    mineNextBtn.SetActive(false);
                    //disable btn
                }
                else
                {
                    mineNextBtn.SetActive(true);
                    mineNextBtn.GetComponent<HistoryPage>().pageNumber = nextPage;
                    mineNextBtn.GetComponent<HistoryPage>().SetText();
                    //set button active and set number to button
                }
            }


        }
        else
        {
            int currPage = NetworkingManager.instance.lootHistoryPageCount;
            int prevPage = NetworkingManager.instance.lootHistoryPageCount - 1;
            int nextPage = NetworkingManager.instance.lootHistoryPageCount + 1;
            //set curr btn
            lootCurrBtn.GetComponent<HistoryPage>().pageNumber = currPage;
            lootCurrBtn.GetComponent<HistoryPage>().SetText();
            if (prevPage < 1)
            {
                lootPrevBtn.SetActive(false);
                // disable btn
            }
            else
            {
                lootPrevBtn.SetActive(true);
                lootPrevBtn.GetComponent<HistoryPage>().pageNumber = prevPage;
                lootPrevBtn.GetComponent<HistoryPage>().SetText();
                //set button active and set number to button
            }
            if (!NetworkingManager.instance.gm.gameMode)
            {
                if (nextPage > ((NetworkingManager.instance.mineData.data.Count - NetworkingManager.instance.tournamentLootHistoryCount) / 20))
                {
                    lootNextBtn.SetActive(false);
                    //disable btn
                }
                else
                {
                    lootNextBtn.SetActive(true);
                    lootNextBtn.GetComponent<HistoryPage>().pageNumber = nextPage;
                    lootNextBtn.GetComponent<HistoryPage>().SetText();
                    //set button active and set number to button
                }
            }
            else
            {
                if (nextPage > NetworkingManager.instance.tournamentLootHistoryCount / 20)
                {
                    lootNextBtn.SetActive(false);
                    //disable btn
                }
                else
                {
                    lootNextBtn.SetActive(true);
                    lootNextBtn.GetComponent<HistoryPage>().pageNumber = nextPage;
                    lootNextBtn.GetComponent<HistoryPage>().SetText();
                    //set button active and set number to button
                }
            }
        }

    }

    public void OnClickPageNumberHistory()
    {
        MineData mineData = NetworkingManager.instance.mineData;
        if (mineHistoryGroup.activeInHierarchy)
        {
            int mineHistoryCount = 0;
            int dataInstantiateCount = 0;
            if (mineData != null)
            {
                mineData = NetworkingManager.instance.mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));
                foreach (Transform t in CanvasHandler.instance.mineHistoryScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (NetworkingManager.instance.gm.gameMode)
                    {

                        if (mineData.data[i].mode == null || mineData.data[i].mode != "tournament")
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (mineData.data[i].mode == "tournament")
                        {
                            continue;
                        }
                    }
                    GameObject mineDataCard = new GameObject();



                    if (mineData.data[i].minePlayerId == NetworkingManager.instance.playerId)
                    {
                        dataInstantiateCount++;
                        if (dataInstantiateCount < ((NetworkingManager.instance.mineHistoryPageCount - 1) * 20) - 1)
                        {
                            continue;
                        }

                        mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.mineHistoryScrollViewContent.transform);
                        mineHistoryCount++;
                        mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = 0f;
                        if (mineData.data[i].result != "pureWin")
                        {
                            if (mineData.data[i].lootSimulation.result.win.team == "mine")
                            {
                                if (NetworkingManager.instance.gm.gameMode)
                                {
                                    mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF2 " + (mineData.data[i].lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString();
                                }
                                else
                                {
                                    mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF1 " + (mineData.data[i].lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString();
                                }

                                //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.win.reward.SGF2.ToString();
                            }
                            else
                            {
                                if (NetworkingManager.instance.gm.gameMode)
                                {
                                    mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF2 " + (mineData.data[i].lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString();
                                }
                                else
                                {
                                    mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF1 " + (mineData.data[i].lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString();
                                }

                                //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.loss.reward.SGF2.ToString();
                            }
                            mineDataCard.GetComponent<MineStartedCard>().replayBtn.gameObject.SetActive(true);
                        }
                        else
                        {
                            if (NetworkingManager.instance.gm.gameMode)
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward:  $SGF2 " + (mineData.data[i].mineSimulation.reward.SGF2 / Math.Pow(10, 9)).ToString();
                            }
                            else
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward:  $SGF1 " + (mineData.data[i].mineSimulation.reward.SGF1 / Math.Pow(10, 9)).ToString();
                            }

                            //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].mineSimulation.reward.SGF2.ToString();
                        }

                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        mineDataCard.GetComponent<MineStartedCard>().claimBtn.gameObject.SetActive(true);


                        for (int m = 0; m < 3; m++)
                        {
                            MineStartedCard msc = mineDataCard.GetComponent<MineStartedCard>();
                            msc.energyText[m].text = mineData.data[i].mineCyborgs[m].energy.ToString();
                            msc.stressText[m].text = mineData.data[i].mineCyborgs[m].stressPoint.ToString();
                            msc.lvlText[m].text = "Lv." + mineData.data[i].mineCyborgs[m].level.ToString();
                            string name = mineData.data[i].mineCyborgs[m].name;
                            msc.nameText[m].text = name.Substring(7);
                            NetworkingManager.instance.SetCyborgPfp(msc.originPlanetImage[m],
                                        msc.neckImage[m],
                                        msc.bodyImage[m],
                                        msc.jawImage[m],
                                        msc.vestImage[m],
                                        msc.helmetImage[m],
                                        msc.eyeImage[m],
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.originPlanet.name,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.gender,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.vest,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.eye.name,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.neck.name,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.skin,
                                        mineData.data[i].mineCyborgs[m].rank);
                        }
                        mineDataCard.GetComponent<MineStartedCard>().mineOrLoot = "mine";
                        mineDataCard.GetComponent<MineStartedCard>().mineData = mineData.data[i];
                    }

                    if (dataInstantiateCount > (NetworkingManager.instance.mineHistoryPageCount * 20) - 1)
                    {
                        break;
                    }

                }
            }
        }
        else
        {
            int lootHistoryCount = 0;
            int dataInstantiateCount = 0;
            if (mineData.data != null)
            {
                mineData = NetworkingManager.instance.mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));

                foreach (Transform t in CanvasHandler.instance.lootHistoryScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }


                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (NetworkingManager.instance.gm.gameMode)
                    {

                        if (mineData.data[i].mode == null || mineData.data[i].mode != "tournament")
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (mineData.data[i].mode == "tournament")
                        {
                            continue;
                        }
                    }


                    if (mineData.data[i].lootPlayerId == NetworkingManager.instance.playerId)
                    {
                        dataInstantiateCount++;
                        lootHistoryCount++;
                        if (dataInstantiateCount < ((NetworkingManager.instance.lootHistoryPageCount - 1) * 20) - 1)
                        {
                            continue;
                        }

                        GameObject mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.lootHistoryScrollViewContent.transform);
                        mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = 0f;
                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        mineDataCard.GetComponent<MineStartedCard>().claimBtn.gameObject.SetActive(true);
                        mineDataCard.GetComponent<MineStartedCard>().replayBtn.gameObject.SetActive(true);
                        if (mineData.data[i].lootSimulation.result.win.team == "loot")
                        {
                            if (NetworkingManager.instance.gm.gameMode)
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "$SGF2 " + (mineData.data[i].lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString();
                            }
                            else
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "$SGF1 " + (mineData.data[i].lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString();
                            }

                            //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.win.reward.SGF2.ToString();
                        }
                        else
                        {
                            if (NetworkingManager.instance.gm.gameMode)
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "$SGF2 " + (mineData.data[i].lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString();
                            }
                            else
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "$SGF1 " + (mineData.data[i].lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString();
                            }

                            //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.loss.reward.SGF2.ToString();
                        }
                        for (int m = 0; m < 3; m++)
                        {
                            MineStartedCard msc = mineDataCard.GetComponent<MineStartedCard>();
                            msc.energyText[m].text = mineData.data[i].mineCyborgs[m].energy.ToString();
                            msc.stressText[m].text = mineData.data[i].mineCyborgs[m].stressPoint.ToString();
                            msc.lvlText[m].text = "Lv." + mineData.data[i].mineCyborgs[m].level.ToString();
                            string name = mineData.data[i].mineCyborgs[m].name;
                            msc.nameText[m].text = name.Substring(7);
                            NetworkingManager.instance.SetCyborgPfp(msc.originPlanetImage[m],
                                        msc.neckImage[m],
                                        msc.bodyImage[m],
                                        msc.jawImage[m],
                                        msc.vestImage[m],
                                        msc.helmetImage[m],
                                        msc.eyeImage[m],
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.originPlanet.name,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.gender,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.vest,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.eye.name,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.neck.name,
                                        mineData.data[i].mineCyborgs[m].trait.bodyParts.skin,
                                        mineData.data[i].mineCyborgs[m].rank);
                        }
                        mineDataCard.GetComponent<MineStartedCard>().mineOrLoot = "loot";
                        mineDataCard.GetComponent<MineStartedCard>().mineData = mineData.data[i];
                    }

                    if (dataInstantiateCount > (NetworkingManager.instance.lootHistoryPageCount * 20) - 1)
                    {
                        break;
                    }
                }
                if (lootHistoryCount == 0)
                {
                    CanvasHandler.instance.lootNoHistory.SetActive(true);
                }
                else
                {
                    CanvasHandler.instance.lootNoHistory.SetActive(false);
                }
            }

        }
    }



    public void CustomAnalyticsCaller(string eventName)
    {
        NetworkingManager.instance.CustomAnalytics(eventName);
    }
    private string GetDayOfWeek(int day, bool isFinalDay)
    {
        if (isFinalDay)
        {
            day += 1;
            if (day > 6)
            {
                day = 0;
            }
        }
        switch (day)
        {
            case 0: return "Sunday";
            case 1: return "Monday";
            case 2: return "Tuesday";
            case 3: return "Wednesday";
            case 4: return "Thursday";
            case 5: return "Friday";
            case 6: return "Saturday";

            default: return "Saturday";
        }
    }
    public void OnChangeEmailInputField()
    {
        if (editEmailInputField.text.Length > 0)
        {
            saveEmailButton.interactable = true;
        }
        else if (editEmailInputField.text.Length == 0)
        {
            saveEmailButton.interactable = false;
        }
    }

    public void OnChangeUsernameInputField()
    {
        if (editUsernameInputField.text.Length > 0)
        {
            saveUsernameButton.interactable = true;
        }
        else if (editUsernameInputField.text.Length == 0)
        {
            saveUsernameButton.interactable = false;
        }
    }
    public void OnClickMineResources()
    {
        CloseGroups();
        mineResources.SetActive(true);
        StartCoroutine(NetworkingManager.instance.FindUsersMine());
        //Debug.Log("MineResources");
        StartCoroutine(FindPossibleRanks());
        SetMineRewardText();
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        mineToggle.isOn = true;

    }
    public void OnClickStartLooting()
    {
        CloseGroups();
        lootOpenMines.SetActive(true);
        ShowAllMines();
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        lootToggle.isOn = true;
        //Debug.Log("StartLooting");
        StartCoroutine(FindPossibleRanks());
    }

    public void OnClickLootOpenMines()
    {
        CloseGroups();
        lootOpenMines.SetActive(true);
        ShowAllMines();
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        //Debug.Log("LootOpenMines");
        StartCoroutine(FindPossibleRanks());
        lootToggle.isOn = true;

    }

    public void OnClickActiveLoots()
    {
        CloseGroups();
        activeLoots.SetActive(true);
        //Debug.Log("ActiveLoots");
        StartCoroutine(FindPossibleRanks());
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        activeLootsToggle.isOn = true;

    }

    public void OnClickHistory()
    {
        CustomAnalyticsCaller("history");
        CloseGroups();
        history.SetActive(true);
        mineHistoryGroup.SetActive(true);
        //load mine by default
        StartCoroutine(NetworkingManager.instance.GetMineHistory());
        mineHistoryToggle.isOn = true;
        mineHistoryGroup.SetActive(true);
        lootHistoryGroup.SetActive(false);
        //Debug.Log("History");
        StartCoroutine(FindPossibleRanks());
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        historyToggle.isOn = true;

    }

    public void OnClickLootHistory()
    {
        CloseGroups();
        history.SetActive(true);
        lootHistoryGroup.SetActive(true);
        StartCoroutine(NetworkingManager.instance.GetAllGames(false));
        //Debug.Log("LootHistory");
        StartCoroutine(FindPossibleRanks());
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        historyToggle.isOn = true;
    }

    public void OnClickMineHistory()
    {
        CloseGroups();
        history.SetActive(true);
        mineHistoryGroup.SetActive(true);
        StartCoroutine(NetworkingManager.instance.GetMineHistory());
        //Debug.Log("MineHistory");
        StartCoroutine(FindPossibleRanks());
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        historyToggle.isOn = true;
    }

    public void OnClickStartMining()
    {
        CloseGroups();
        mineResources.SetActive(true);
        StartCoroutine(NetworkingManager.instance.FindUsersMine());
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        if (!mineToggle.isOn)
        {
            mineToggle.isOn = true;
        }
        //Debug.Log("StartMining");
        StartCoroutine(FindPossibleRanks());
        SetMineRewardText();
    }

    public void OnClickActiveLootsMain()
    {
        CloseGroups();
        activeLoots.SetActive(true);
        //Debug.Log("OnClickActiveLoots");
        StartCoroutine(NetworkingManager.instance.FindAllLoots());
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        activeLootsToggle.isOn = true;
        //Debug.Log("ActiveLootsMain");
        StartCoroutine(FindPossibleRanks());
    }

    public void OnClickLeaderboard()
    {
        StartCoroutine(NetworkingManager.instance.Leaderboard());
    }

    public IEnumerator FindPossibleRanks()
    {
        //Debug.Log("FindPossibleRank");
        yield return StartCoroutine(NetworkingManager.instance.GetUsersNFTs());
        CyborgData cyborgs = NetworkingManager.instance.cyborgList;
        int r2 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
        foreach (Result result in cyborgs.result)
        {

            if (result.cyborg.rank == "Sergeant")
            {
                r2++;
            }
            if (result.cyborg.rank == "Major")
            {
                r3++;
            }
            if (result.cyborg.rank == "Lieutenant")
            {
                r4++;
            }
            if (result.cyborg.rank == "Brigadier")
            {
                r5++;
            }
            if (result.cyborg.rank == "General")
            {
                r6++;
            }
        }
        if (r2 >= 3)
        {
            rank2Btn.GetComponentInChildren<Toggle>().interactable = true;
        }
        if (r3 >= 3)
        {
            rank3Btn.GetComponentInChildren<Toggle>().interactable = true;
        }
        if (r4 >= 3)
        {
            rank4Btn.GetComponentInChildren<Toggle>().interactable = true;
        }
        if (r5 >= 3)
        {
            rank5Btn.GetComponentInChildren<Toggle>().interactable = true;
        }
        if (r6 >= 3)
        {
            rank6Btn.GetComponentInChildren<Toggle>().interactable = true;
        }

    }

    public void OnClickClaimReward()
    {
        StartCoroutine(NetworkingManager.instance.ClaimReward());
    }
    public void OnClickRank(int rank)
    {

        if (NetworkingManager.instance.rankChosen != rank)
        {
            NetworkingManager.instance.rankChosen = rank;
            NetworkingManager.instance.lootHistoryPageCount = 1;
            NetworkingManager.instance.mineHistoryPageCount = 1;
        }


        if (miningCardsScrollViewContent.activeInHierarchy)
        {
            SetMineRewardText();
            OnClickMineResources();
        }
        else if (activeLoots.activeInHierarchy)
        {
            OnClickActiveLootsMain();
        }
        else if (mineHistoryGroup.activeInHierarchy)
        {
            OnClickMineHistory();
        }
        else if (lootHistoryGroup.activeInHierarchy)
        {
            OnClickLootHistory();
        }
        else if (lootingCardsScrollViewContent.activeInHierarchy)
        {
            OnClickStartLooting();
        }
    }

    public void OnClickRank2(int rank)
    {
        NetworkingManager.instance.rankChosen = rank;
        switch (rank)
        {
            case 1:
                rank1Btn.GetComponentInChildren<Toggle>().isOn = true;
                break;
            case 2:
                rank2Btn.GetComponentInChildren<Toggle>().isOn = true;
                break;
            case 3:
                rank3Btn.GetComponentInChildren<Toggle>().isOn = true;
                break;
            case 4:
                rank4Btn.GetComponentInChildren<Toggle>().isOn = true;
                break;
            case 5:
                rank5Btn.GetComponentInChildren<Toggle>().isOn = true;
                break;
            case 6:
                rank6Btn.GetComponentInChildren<Toggle>().isOn = true;
                break;
        }


        if (miningCardsScrollViewContent.activeInHierarchy)
        {
            SetMineRewardText();
            OnClickMineResources();
        }
        else if (activeLoots.activeInHierarchy)
        {
            OnClickActiveLootsMain();
        }
        else if (mineHistoryGroup.activeInHierarchy)
        {
            OnClickMineHistory();
        }
        else if (lootHistoryGroup.activeInHierarchy)
        {
            OnClickLootHistory();
        }
        else if (lootingCardsScrollViewContent.activeInHierarchy)
        {
            OnClickStartLooting();
        }
    }

    public void SetMineRewardText()
    {
        //Debug.Log("SetMineRewardText");
        if (NetworkingManager.instance.gm.gameMode)
        {
            switch (NetworkingManager.instance.rankChosen)
            {
                case 1:
                    mineCardRewardText.text = "Reward: $SGF2 100";
                    break;
                case 2:
                    mineCardRewardText.text = "Reward: $SGF2 110";
                    break;
                case 3:
                    mineCardRewardText.text = "Reward: $SGF2 120";
                    break;
                case 4:
                    mineCardRewardText.text = "Reward: $SGF2 130";
                    break;
                case 5:
                    mineCardRewardText.text = "Reward: $SGF2 140";
                    break;
                case 6:
                    mineCardRewardText.text = "Reward: $SGF2 150";
                    break;
            }
        }
        else
        {
            switch (NetworkingManager.instance.rankChosen)
            {
                case 1:
                    mineCardRewardText.text = "Reward: $SGF1 100";
                    break;
                case 2:
                    mineCardRewardText.text = "Reward: $SGF1 110";
                    break;
                case 3:
                    mineCardRewardText.text = "Reward: $SGF1 120";
                    break;
                case 4:
                    mineCardRewardText.text = "Reward: $SGF1 130";
                    break;
                case 5:
                    mineCardRewardText.text = "Reward: $SGF1 140";
                    break;
                case 6:
                    mineCardRewardText.text = "Reward: $SGF1 150";
                    break;
            }
        }
    }
    public void OnClickDiscord()
    {
        NetworkingManager.instance.OpenURL("https://discord.com/invite/Rm7y3tZe4X");
    }

    public void OnClickHelp()
    {
        NetworkingManager.instance.OpenURL("https://medium.com/@stellargalactics");
    }

    public void OnClickTwitter()
    {
        NetworkingManager.instance.OpenURL("https://twitter.com/StellrGalactics");
    }
    public void OnClickWebsite()
    {
        NetworkingManager.instance.OpenURL("https://stellargalactics.com/");
    }

    public void OnClickMoreInfo()
    {
        NetworkingManager.instance.OpenURL("https://discord.com/channels/882703942042124288/882703942792933398/1129389007348965508");
    }

    public void CloseGroups()
    {
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        mineResources.SetActive(false);
        lootOpenMines.SetActive(false);
        activeLoots.SetActive(false);
        history.SetActive(false);
        mineHistoryGroup.SetActive(false);
        lootHistoryGroup.SetActive(false);
    }

    public void CloseCanvases()
    {
        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
        mainMenu.gameObject.SetActive(false);
        mineLoot.gameObject.SetActive(false);
        profile.gameObject.SetActive(false);
        zion.gameObject.SetActive(false);
        hamburgerPopup.gameObject.SetActive(false);

    }

    public void OnClickLoot()
    {
        lootTeamSelectionGroup.SetActive(true);
        mineLootActiveHitsoryGroup.SetActive(false);
        GetNFTs();
    }
    public void OnClickCyborgDrops()
    {
        if (!NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF1 / 1000000000 < 200)
        {
            CanvasHandler.instance.PopUpCyborgDrop.SetActive(false);
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1 to Mint a Cyborg.";
        }
        if (NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF2 / 1000000000 < 200)
        {
            CanvasHandler.instance.PopUpCyborgDrop.SetActive(false);
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF2 to Mint a Cyborg.";
        }
        else if (NetworkingManager.instance.SOLBalance < 0.012)
        {
            CanvasHandler.instance.PopUpCyborgDrop.SetActive(false);
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SOL to Mint a Cyborg. \nRequest an airdrop from the profile tab.";
        }
        else
        {
            StartCoroutine(NetworkingManager.instance.MintCyborgs());
        }
        //Debug.Log("OnClickDrops");

        //StartCoroutine(NetworkingManager.instance.GetUserDetails());
    }

    public void OnClickConfirmRankUp()
    {
        RankUpPopUp.SetActive(false);
        inventoryPopUpCanvas.SetActive(false);
        string id = "";
        for (int i = 0; i < NetworkingManager.instance.cyborgList.result.Count; i++)
        {
            if (GameManager.instance.inventorySelectedCyborg.id == NetworkingManager.instance.cyborgList.result[i].cyborg.id)
            {
                id = NetworkingManager.instance.cyborgList.result[i].id;
            }
        }

        StartCoroutine(NetworkingManager.instance.RankUp(id));
    }

    public void GetServerTime()
    {
        StartCoroutine(NetworkingManager.instance.GetServerTime(true));
    }
    public void GetNFTs()
    {
        StartCoroutine(NetworkingManager.instance.GetUsersNFTs());
    }

    public void CreateOrGetWallet()
    {
        if (initvar == 0)
        {

            if (NetworkingManager.instance.userDetails.result.wallet == "")
            {
                WalletCreationPopUp.SetActive(true);
                StartCoroutine(NetworkingManager.instance.CreateOrGetWallet());
                initvar++;
            }


        }

    }

    public void GetZionCyborgs()
    {
        StartCoroutine(NetworkingManager.instance.GetZionCyborgs());
        StartCoroutine(NetworkingManager.instance.GetUserDetails());
    }

    public void ShowAllMines()
    {
        StartCoroutine(NetworkingManager.instance.FindAllMines());
    }

    public void OnClickLogout()
    {
        PlayerPrefs.DeleteKey("Username");
        PlayerPrefs.DeleteKey("Password");
        PlayerPrefs.DeleteAll();
        SceneManager.LoadScene(0);
    }

    public void OnClickHamburgerMenu()
    {
        hamburgerUsernameText.text = NetworkingManager.instance.userDetails.result.username;
    }

    public void OnClickLootBoxes()
    {
        StartCoroutine(NetworkingManager.instance.GetServerTime());
    }

    public void GetUserDetails()
    {
        StartCoroutine(NetworkingManager.instance.GetUserDetails());
        mainMenu.GetComponentInChildren<HeaderBalances>().UpdateHeaderVals();
        mineCanvas.GetComponentInChildren<HeaderBalances>().UpdateHeaderVals();
        inventoryCanvas.GetComponentInChildren<HeaderBalances>().UpdateHeaderVals();
        zion.GetComponentInChildren<HeaderBalances>().UpdateHeaderVals();
        profile.GetComponentInChildren<HeaderBalances>().UpdateHeaderVals();
    }

    public void OnClickRequestAirdrop()
    {
        if (NetworkingManager.instance.userDetails.result.wallet != "" || NetworkingManager.instance.userDetails.result.wallet != null)
        {
            StartCoroutine(NetworkingManager.instance.RequestAirdrop(2000000000, NetworkingManager.instance.userDetails.result.wallet));
        }
        else
        {
            CreateOrGetWallet();
        }

    }

    #region Wager
    public void OnClickWager(int amount)
    {


        if (NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF2 < (long)amount * 1000000000)
        {
            Debug.Log("not enough sgf2");
            zionPopUpCanvas.SetActive(true);
            failCasePopup.SetActive(true);
            failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF2";
        }
        else if (!NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF1 < (long)amount * 1000000000)
        {
            Debug.Log("not enough sgf1");
            zionPopUpCanvas.SetActive(true);
            failCasePopup.SetActive(true);
            failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1";
        }
        else
        {
            if (celestialTrialResultScreen.activeInHierarchy)
            {
                celestialTrialResultScreen.SetActive(false);
                celestialTrialHomeScreen.SetActive(true);
                celestialTrialsCanvas.SetActive(false);
            }
            StartCoroutine(NetworkingManager.instance.GetWagerCyborgs(amount, false));
        }

    }

    public void OnClickReroll()
    {
        TeamSelectionHandler tsh = mineCyborgScrollViewContent.GetComponentInParent<TeamSelectionHandler>();
    
        if (NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF2 < tsh.rerollAmtN * 100000000)
        {
            zionPopUpCanvas.SetActive(true);
            failCasePopup.SetActive(true);
            failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF2 to Reroll";
        }
        else if (!NetworkingManager.instance.gm.gameMode && NetworkingManager.instance.userDetails.result.SGF1 < tsh.rerollAmtN * 100000000)
        {
            zionPopUpCanvas.SetActive(true);
            failCasePopup.SetActive(true);
            failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
            failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "You don't have enough $SGF1 to Reroll";
        }
        else
        {
            Debug.Log(tsh.rerollCount);
            tsh.rerollCount++;
            tsh.SetReRollAmt();
            tsh.OnClickBackBtn();
            StartCoroutine(NetworkingManager.instance.GetWagerCyborgs(NetworkingManager.instance.gwcb.amount / 10, true, NetworkingManager.instance.gwcr.gameID));
        }

    }
    #endregion


}

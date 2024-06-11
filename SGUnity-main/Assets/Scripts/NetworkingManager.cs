using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using UnityEngine.SceneManagement;
using System.Security.Cryptography;
using System.Linq;
using System.Text;
using System;
using UnityEngine.UI;
using UnityEngine.Analytics;

public class NetworkingManager : MonoBehaviour
{
    public static NetworkingManager instance;
    public static Login login = new Login();
    public static string walletAddress;
    public string baseURL = "https://api.stellargalactics.com";
    public string baseURLStaging = "https://staging.api.stellargalactics.com";
    [SerializeField] int saltMinSize, saltMaxSize;
    public string playerId;

    #region Login Vars

    [Header("Login Vars")]
    public InputField loginEmailInputField;
    public InputField loginPasswordInputField;
    public TMP_Text loginErrorMsg;
    public Toggle saveLoginToggle, showPasswordToggle, showPasswordToggleRegister;

    #endregion

    #region Register Vars
    [Header("Register Vars")]
    public InputField usernameInputField;
    public InputField emailInputField, waitListInputField;
    public InputField passwordInputField;
    public TMP_Text registerErrorMsg;
    public GameObject registerCanvas;

    #endregion


    #region API Response Serializing
    [Header("API Response Vars")]
    public ClaimNFTData signature = new ClaimNFTData();

    public CyborgData cyborgList = new CyborgData();

    public MineData mineData = new MineData();

    public UserDetails userDetails = new UserDetails();

    public double SOLBalance;

    public ServerTime st = new ServerTime();

    public string mineToLootID;

    public string mineOrLoot;

    public BattleSimulation battleSimulation = null;

    public MineResponse mineResponse = null;

    public Datum mineSimData = new Datum();

    public AirdropResponse adr = new AirdropResponse();

    public GameObject loadingCanvas;


    ZionResponse zr = new ZionResponse();

    public EndMineResponse emr = new EndMineResponse();

    public EndLootResponse elr = new EndLootResponse();

    public LootBoxResponse lbr = new LootBoxResponse();

    public ZionHospitalResponse zhr = new ZionHospitalResponse();

    public ZionClaimResponse zcr = new ZionClaimResponse();

    public WagerWarResponse wwr = new WagerWarResponse();

    public GetWagerCyborgsBody gwcb = new GetWagerCyborgsBody();

    public GameMode gm = new GameMode();

    public int mintAmount = 200, tavernAmount = 18, hospitalAmount = 36;

    public bool mineSkip = false, lootSkip = false, activeLootSkip = false, lootRepSkip = false, mineRepSkip = false, startMine = false, startLoot = false;

    public int rankChosen = 1;

    public int mineHistoryPageCount = 1, lootHistoryPageCount = 1, tournamentMineHistoryCount = 0 , tournamentLootHistoryCount = 0;
    #endregion

    #region Demo Vars
    [Header("Demo Vars")]
    [SerializeField] public TextAsset mineLossJsonFile, lootWinJsonFile;

    int demoClaimVar = 0;

    public DemoMineLossResp dmlr, dmlr2;

    public bool isDemo;
    public bool isLootWin;
    public bool isWager;
    public GetWagerCyborgsResponse gwcr = new GetWagerCyborgsResponse();
    [SerializeField] public float mineTime = 3780f, lootTime = 1980f, tavernTime = 10980f, hospitalTime = 10980f /*rankupTime = 21600f*/, lootBoxTime = 10980f;
    #endregion

    #region PFP Vars

    [Header("Cyborg Pfp Layers")]
    public List<Sprite> cyborgOriginPlanetSpriteList;
    public List<Sprite> cyborgBodySpriteList;
    public List<Sprite> cyborgEyeSpriteList;
    public List<Sprite> cyborgNeckSpriteList;
    public List<Sprite> cyborgHelmetSpriteList;
    public List<Sprite> cyborgVestSpriteList;

    #endregion

    private void Awake()
    {
        instance = this;
        DontDestroyOnLoad(instance);

    }

    private void Start()
    {
        string token = PlayerPrefs.GetString("Token", "");
        //Debug.Log(token);
        //string password = PlayerPrefs.GetString("Password", "");

        if (token != "")
        {
            login.token = token;
            StartCoroutine(GetUserDetails(true));
        }


    }

    public void ClickSFX()
    {
        SoundManager.instance.clickVfx.Play();
    }
    public void OpenURL(string url)
    {
        Application.OpenURL(url);
    }

    #region Auth

    public void ShowPasswordTogglePress(bool isRegister)
    {
        if (isRegister)
        {
            TogglePassword(showPasswordToggleRegister, passwordInputField);
        }
        else
        {
            TogglePassword(showPasswordToggle, loginPasswordInputField);
        }

    }

    private void TogglePassword(Toggle toggle, InputField inputField)
    {
        if (!toggle.isOn)
        {
            inputField.contentType = InputField.ContentType.Standard;
            inputField.ForceLabelUpdate();
        }
        else
        {
            inputField.contentType = InputField.ContentType.Password;
            inputField.ForceLabelUpdate();
        }
    }

    public void OnRegButton()
    {
        Register register = new Register() { username = usernameInputField.text, email = emailInputField.text, password = passwordInputField.text };
        StartCoroutine(Register(register));
    }

    public void OnLoginButton()
    {
        Login login = new Login() { username = loginEmailInputField.text, password = loginPasswordInputField.text };
        StartCoroutine(Login(login));
    }

    public IEnumerator Register(Register register)
    {
        CustomAnalytics("registered");
        loadingCanvas.SetActive(true);
        var uwr = new UnityWebRequest(baseURL + "/v2/user/register", "POST");
        string jsonData = JsonUtility.ToJson(register);
        //validation 
        if (register.username.Length < 4 && register.username.Length > 15)
        {
            registerErrorMsg.text = "Username must be between 4 - 15 characters";
            StopCoroutine(Register(register));
        }
        if (register.password.Length < 4 && register.password.Length > 15)
        {
            registerErrorMsg.text = "Password must be between 4 - 15 characters";
            StopCoroutine(Register(register));
        }

        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error " + uwr.error);
        }
        else
        {
            RegisterResponse rr = JsonUtility.FromJson<RegisterResponse>(uwr.downloadHandler.text);

            if (rr.success)
            {
                registerErrorMsg.color = Color.green;
                registerErrorMsg.text = "Successfully Registered";
                loginEmailInputField.text = register.username;
                loginPasswordInputField.text = register.password;
                OnLoginButton();
            }
            else
            {
                FailResponseAuth fra = JsonUtility.FromJson<FailResponseAuth>(uwr.downloadHandler.text);
                Debug.Log("Failed " + fra.message);
                if (fra.message == "\nInvalid `prisma.player.create()` invocation:\n\n\nUnique constraint failed on the constraint: `Player_username_key`")
                {
                    registerErrorMsg.text = "Username already exists";
                }
                else
                {
                    registerErrorMsg.text = fra.message;
                }

            }


        }
    }

    public IEnumerator Login(Login _login)
    {
        CustomAnalytics("loggedIn");
        loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/user/login", "POST");

        string jsonData = JsonUtility.ToJson(_login);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");

        yield return uwr.SendWebRequest();

        loadingCanvas.SetActive(false);

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            LoginResponse lr = JsonUtility.FromJson<LoginResponse>(uwr.downloadHandler.text);
            if (lr.success)
            {
                login = _login;
                login.token = uwr.GetResponseHeader("Authorization");
                StartCoroutine(GetUserDetails(true));
                if (saveLoginToggle.isOn)
                {
                    PlayerPrefs.SetString("Token", login.token);
                }
            }
            else
            {
                FailResponseAuth fra = JsonUtility.FromJson<FailResponseAuth>(uwr.downloadHandler.text);
                Debug.Log("Failed " + fra.message);
                loginErrorMsg.text = fra.message;
            }
        }
    }

    public void LoadLoginInfo(string username, string password)
    {
        loginEmailInputField.text = username;
        loginPasswordInputField.text = password;
        OnLoginButton();
    }

    public IEnumerator GetUserDetails(bool isLogin = false)
    {
        if (isLogin)
        {
            loadingCanvas.SetActive(true);
        }
        else
        {
            CanvasHandler.instance.loadingCanvas.SetActive(true);
        }

        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/user/profile", "GET");

        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);

        yield return uwr.SendWebRequest();

        if (!isLogin)
        {
            CanvasHandler.instance.loadingCanvas.SetActive(false);
        }

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            userDetails = JsonUtility.FromJson<UserDetails>(uwr.downloadHandler.text);

            if (userDetails.result.wallet != "" || userDetails.result.wallet != null)
            {
                StartCoroutine(GetSOLBalance(userDetails.result.wallet));
            }
            playerId = userDetails.result.id;
            if (isLogin)
            {
                StartCoroutine(GetGameMode(isLogin));
            }


        }

    }

    public IEnumerator GetGameMode(bool isLogin)
    {
        Debug.Log("In GameMde Coroute");
        //CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/gameMode", "GET");
        //Debug.Log(baseURL);
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        //uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        //CanvasHandler.instance.loadingCanvas.SetActive(false);

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("GameMode|" + uwr.downloadHandler.text);
            gm = JsonUtility.FromJson<GameMode>(uwr.downloadHandler.text);
            //gm.gameMode = true;
            if (isLogin)
            {
                //gm.gameMode = true;
                if (!userDetails.result.demo)
                {
                    Debug.Log("Demo");
                    isDemo = true;
                    SceneManager.LoadScene(3); // make 3
                }
                else if (gm.gameMode)
                {
                    //Debug.Log("GameMode|" + uwr.downloadHandler.text);
                    Debug.Log("Loading GameMode Scene");
                    SceneManager.LoadScene(1); //make 8
                }

                else if (userDetails.result.activated)
                {
                    Debug.Log("Activated");
                    SceneManager.LoadScene(1); //make 1
                }
                //else
                //{
                //    SceneManager.LoadScene(7);
                //    //popup to activate or new scene
                //}

            }
        }
    }

    #endregion

    #region Wallet, Airdrop & Mint
    public IEnumerator CreateOrGetWallet()
    {
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/mint/wallet", "POST");

        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            WalletAddress wa = JsonUtility.FromJson<WalletAddress>(uwr.downloadHandler.text);
            walletAddress = wa.result;
            StartCoroutine(TextDelay($"Wallet Created: {walletAddress}", CanvasHandler.instance.walletID, 3f));
            StartCoroutine(RequestAirdrop(2000000000, walletAddress));
        }
    }

    public IEnumerator RequestAirdrop(int amount, string walletAddress)
    {
        UnityWebRequest request = new UnityWebRequest("https://api.devnet.solana.com", "POST");
        CanvasHandler.instance.loadingCanvas.SetActive(true);

        byte[] body = System.Text.Encoding.UTF8.GetBytes("{\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"requestAirdrop\",\"params\":[\"" + walletAddress + "\"," + amount + "]}");

        request.uploadHandler = new UploadHandlerRaw(body);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();

        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (request.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.LogError(request.error);
        }
        else
        {
            adr = JsonUtility.FromJson<AirdropResponse>(request.downloadHandler.text);
            if (adr.result == "" || adr.result == null)
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = adr.error.message + "\n You can request an airdrop from the Profile Tab.";
            }
            else
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Success";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = $"Successfully airdropped 2 $SOL into your wallet {userDetails.result.wallet}.";
                Debug.Log("Success Airdrop"); //success and api for getting balance
                                              //yield return new WaitForSeconds(5f);
                yield return new WaitForSeconds(15f);
                Debug.Log("GetSOLBalance from Request" + walletAddress);
                StartCoroutine(GetSOLBalance(walletAddress));
            }
            StartCoroutine(CloseWalletCreationPopup());
        }

    }

    public IEnumerator GetSOLBalance(string walletAddress)
    {
        if (walletAddress == null || walletAddress == "")
        {
            Debug.Log("Empty");
        }
        UnityWebRequest request = new UnityWebRequest("https://devnet.rpcpool.com", "POST");

        byte[] body = System.Text.Encoding.UTF8.GetBytes("{\"jsonrpc\":\"2.0\",\"id\":1,\"method\":\"getBalance\",\"params\":[\"" + walletAddress + "\"]}");

        request.uploadHandler = new UploadHandlerRaw(body);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");

        yield return request.SendWebRequest();
        if (request.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.LogError(request.error);
        }
        else
        {
            DevnetBalance db = new DevnetBalance();
            db = JsonUtility.FromJson<DevnetBalance>(request.downloadHandler.text);
            SOLBalance = db.result.value / Math.Pow(10, 9);
        }

    }

    public IEnumerator CloseWalletCreationPopup()
    {
        yield return new WaitForSeconds(10f);
        CanvasHandler.instance.airDropSuccess.text = "";
        CanvasHandler.instance.airdroppingSOL.text = "";
        CanvasHandler.instance.walletID.text = "";
        CanvasHandler.instance.WalletCreationPopUp.SetActive(false);

    }

    public IEnumerator TextDelay(string textStr, TMP_Text text, float seconds)
    {
        yield return new WaitForSeconds(5f);
        text.text = textStr;
        yield return new WaitForSeconds(5f);
        CanvasHandler.instance.airdroppingSOL.text = "Airdropping SOL... \nIt will take about 15 seconds to reflect in your wallet";


    }

    public IEnumerator MintCyborgs()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/mint/nft", "POST");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);

        yield return uwr.SendWebRequest();

        CanvasHandler.instance.loadingCanvas.SetActive(false);

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Mint" + uwr.downloadHandler.text);
            //StartCoroutine(GetUserDetails());
            if (uwr.result == UnityWebRequest.Result.Success)
            {
                CanvasHandler.instance.SuccessPopUpCyborgDrop.SetActive(true);
                CanvasHandler.instance.PopUpCyborgDrop.SetActive(false);
                signature = JsonUtility.FromJson<ClaimNFTData>(uwr.downloadHandler.text);

                SetCyborgPfp(CanvasHandler.instance.cyborgOriginPlanetImage,
                             CanvasHandler.instance.cyborgNeckImage,
                             CanvasHandler.instance.cyborgBodyImage,
                             CanvasHandler.instance.cyborgJawImage,
                             CanvasHandler.instance.cyborgVestImage,
                             CanvasHandler.instance.cyborgHelmetImage,
                             CanvasHandler.instance.cyborgEyeImage,
                             signature.result.attributes[0].value,
                             signature.result.attributes[1].value,
                             signature.result.attributes[4].value,
                             signature.result.attributes[5].value,
                             signature.result.attributes[6].value,
                             signature.result.attributes[7].value,
                             "mint");

                CanvasHandler.instance.SuccessPopUpText.text = $"Congratulations! You have claimed {signature.result.name}";
                StartCoroutine(GetUserDetails());
            }
        }
    }

    #endregion

    #region Start Mine/Loot
    public IEnumerator Mine(Mine mine)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/mine", "POST");

        string jsonData = JsonUtility.ToJson(mine);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);

        yield return uwr.SendWebRequest();
        Debug.Log("StartMine|" + uwr.downloadHandler.text);
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            mineResponse = JsonUtility.FromJson<MineResponse>(uwr.downloadHandler.text);
            if (!mineResponse.success)
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Something went wrong";
            }
            else
            {
                CanvasHandler.instance.mineActiveGroup.SetActive(true);
                CanvasHandler.instance.mineTeamSelectionGroup.SetActive(false);
                mineOrLoot = "mine";
                //notvalidcyborgscase
                if (mineResponse.result != null && mineResponse.result.mineCyborgs.Count > 0)
                {
                    SceneManager.LoadScene(2);
                }

                else
                {
                    Debug.Log("Error");
                    CanvasHandler.instance.minePopupCanvas.SetActive(true);
                    CanvasHandler.instance.failPopUp.SetActive(true);
                }

            }


        }
    }

    public IEnumerator Loot(Loot loot)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);

        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/loot", "POST");

        string jsonData = JsonUtility.ToJson(loot);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        Debug.Log("Loot Body " + jsonData);
        yield return uwr.SendWebRequest();

        CanvasHandler.instance.loadingCanvas.SetActive(false);

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Loot" + uwr.downloadHandler.text);
            if (uwr.result == UnityWebRequest.Result.Success)
            {
                battleSimulation = JsonUtility.FromJson<BattleSimulation>(uwr.downloadHandler.text);

                if (!battleSimulation.success)
                {
                    CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                    CanvasHandler.instance.failCasePopup.SetActive(true);
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Something went wrong";
                }
                else
                {
                    mineOrLoot = "loot";
                    if (battleSimulation.result.lootSimulation.corePlay.Count > 0 || battleSimulation.result == null)
                    {
                        SceneManager.LoadScene(2);
                    }
                }

            }

        }
    }

    #endregion

    #region Get/Find Mine API's
    public IEnumerator FindUsersMine()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/mine", "GET");

        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);

        yield return uwr.SendWebRequest();

        CanvasHandler.instance.loadingCanvas.SetActive(false);

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            mineData = JsonUtility.FromJson<MineData>(uwr.downloadHandler.text);
            if (mineData != null)
            {
                mineData = mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));
                int j = 0;
                //To not delete the mine card
                foreach (Transform t in CanvasHandler.instance.miningCardsScrollViewContent.transform)
                {
                    if (j == 0)
                    {
                        j++;
                        continue;
                    }
                    GameObject.Destroy(t.gameObject);
                }
                mineRankFilter(mineData);
                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (gm.gameMode)
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
                    if (CanvasHandler.instance.miningCardsScrollViewContent.activeInHierarchy)
                    {
                        mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.miningCardsScrollViewContent.transform);
                        mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = mineTime - (mineData.timestamp / 1000 - mineData.data[i].mineTimestamp / 1000);
                        mineDataCard.GetComponent<MineStartedCard>().mineOrLoot = "mine";
                    }
                    else if (CanvasHandler.instance.mineHistoryScrollViewContent.activeInHierarchy)
                    {
                        mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.mineHistoryScrollViewContent.transform);
                        mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = mineTime - (mineData.timestamp / 1000 - mineData.data[i].mineTimestamp / 1000);
                        mineDataCard.GetComponent<MineStartedCard>().mineOrLoot = "mine";
                    }
                    else
                    {
                        continue;
                    }

                    if (mineData.data[i].state == "Loot")
                    {
                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        mineDataCard.GetComponent<MineStartedCard>().replayBtn.gameObject.SetActive(true);
                    }
                    if (mineData.timestamp / 1000 - mineData.data[i].mineTimestamp / 1000 >= mineTime)
                    {
                        //Debug.Log(mineData.data[i].id);
                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        mineDataCard.GetComponent<MineStartedCard>().claimBtn.gameObject.SetActive(true);
                        //StartCoroutine(EndMine(mineData.data[i].id));

                    }
                    for (int m = 0; m < 3; m++)
                    {
                        MineStartedCard msc = mineDataCard.GetComponent<MineStartedCard>();
                        msc.energyText[m].text = mineData.data[i].mineCyborgs[m].energy.ToString();
                        msc.stressText[m].text = mineData.data[i].mineCyborgs[m].stressPoint.ToString();
                        msc.lvlText[m].text = "Lv." + mineData.data[i].mineCyborgs[m].level.ToString();
                        string name = mineData.data[i].mineCyborgs[m].name;
                        msc.nameText[m].text = name.Substring(7);
                        SetCyborgPfp(msc.originPlanetImage[m],
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

                    mineDataCard.GetComponent<MineStartedCard>().mineData = mineData.data[i];
                }
            }

        }
    }

    public IEnumerator GetMineHistory()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/user/mine/all", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Get Mine History|" + uwr.downloadHandler.text);
            mineData = JsonUtility.FromJson<MineData>(uwr.downloadHandler.text);
            int mineHistoryCount = 0;
            int dataInstantiateCount = 0;
            if (mineData != null)
            {
                mineData = mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));
                foreach (Transform t in CanvasHandler.instance.mineHistoryScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                tournamentMineHistoryCount = 0;
                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (mineData.data[i].mode == "tournament")
                    {
                        tournamentMineHistoryCount++;
                    }
                    if (gm.gameMode)
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

                    if (CanvasHandler.instance.mineHistoryScrollViewContent.activeInHierarchy)
                    {
                        if (mineData.data[i].minePlayerId == playerId)
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
                                    if (gm.gameMode)
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
                                    if (gm.gameMode)
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
                                if (gm.gameMode)
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
                                SetCyborgPfp(msc.originPlanetImage[m],
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

                        if (dataInstantiateCount > (mineHistoryPageCount * 20) - 1)
                        {
                            break;
                        }
                    }
                    else
                    {
                        continue;
                    }

                    if (mineData.data[i].state == "Loot")
                    {
                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        mineDataCard.GetComponent<MineStartedCard>().replayBtn.gameObject.SetActive(true);
                    }
                    if (mineData.timestamp / 1000 - mineData.data[i].mineTimestamp / 1000 >= mineTime)
                    {
                        //Debug.Log(mineData.data[i].id);
                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        mineDataCard.GetComponent<MineStartedCard>().claimBtn.gameObject.SetActive(true);
                        //StartCoroutine(EndMine(mineData.data[i].id));

                    }
                    for (int m = 0; m < 3; m++)
                    {
                        MineStartedCard msc = mineDataCard.GetComponent<MineStartedCard>();
                        msc.energyText[m].text = mineData.data[i].mineCyborgs[m].energy.ToString();
                        msc.stressText[m].text = mineData.data[i].mineCyborgs[m].stressPoint.ToString();
                        msc.lvlText[m].text = "Lv." + mineData.data[i].mineCyborgs[m].level.ToString();
                        string name = mineData.data[i].mineCyborgs[m].name;
                        msc.nameText[m].text = name.Substring(7);
                        SetCyborgPfp(msc.originPlanetImage[m],
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

                    mineDataCard.GetComponent<MineStartedCard>().mineData = mineData.data[i];
                }
                if (mineHistoryCount == 0)
                {
                    CanvasHandler.instance.mineNoHistory.SetActive(true);
                }
                else
                {
                    CanvasHandler.instance.mineNoHistory.SetActive(false);
                }

            }
            CanvasHandler.instance.SetPageNumberHistory();
            Debug.Log("TournamentMineHistoryCount " + tournamentMineHistoryCount);
        }
    }


    public IEnumerator FindAllMines()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/mine/all", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Get Lootable Mines|" + uwr.downloadHandler.text);
            mineData = JsonUtility.FromJson<MineData>(uwr.downloadHandler.text);
            int lootableMineCount = 0;
            if (mineData.data != null)
            {
                mineData = mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));
                foreach (Transform t in CanvasHandler.instance.lootingCardsScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (gm.gameMode)
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
                    if (mineData.data[i].minePlayerId == playerId)
                    {
                        Debug.Log("Same player id");
                        continue;
                    }
                    lootableMineCount++;
                    GameObject mineDataCard = Instantiate(CanvasHandler.instance.lootStartedCaardPrefab, CanvasHandler.instance.lootingCardsScrollViewContent.transform);
                    mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = mineTime - (mineData.timestamp / 1000 - mineData.data[i].mineTimestamp / 1000);

                    for (int m = 0; m < 3; m++)
                    {
                        MineStartedCard msc = mineDataCard.GetComponent<MineStartedCard>();
                        msc.energyText[m].text = mineData.data[i].mineCyborgs[m].energy.ToString();
                        msc.stressText[m].text = mineData.data[i].mineCyborgs[m].stressPoint.ToString();
                        msc.lvlText[m].text = "Lv." + mineData.data[i].mineCyborgs[m].level.ToString();
                        string name = mineData.data[i].mineCyborgs[m].name;
                        msc.nameText[m].text = name.Substring(7);
                        SetCyborgPfp(msc.originPlanetImage[m],
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

                    mineDataCard.GetComponent<MineStartedCard>().mineData = mineData.data[i];
                }
                if (lootableMineCount == 0)
                {
                    CanvasHandler.instance.noAvailableMines.SetActive(true);
                }
                else
                {
                    CanvasHandler.instance.noAvailableMines.SetActive(false);
                }
            }

        }
    }

    public IEnumerator EndMine(string mineId)
    {
        StartCoroutine(GetUserDetails());
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        Debug.Log($"End Mine| {mineId}");
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/endMine?game=" + mineId, "POST");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Content-Type", "application/json");

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("End Mine Response|" + uwr.downloadHandler.text);
            CanvasHandler.instance.loadingCanvas.SetActive(false);
            emr = JsonUtility.FromJson<EndMineResponse>(uwr.downloadHandler.text);

            if (emr != null)
            {
                if (emr.message != "Already claimed" && emr.message != "InProgress")
                {
                    CanvasHandler.instance.minePopupCanvas.SetActive(true);
                    CanvasHandler.instance.claimPopup.SetActive(true);
                    if (emr.updatedGame.state == "Loot" || (emr.updatedGame.state == "Complete" && emr.updatedGame.result != "pureWin"))
                    {
                        Debug.Log("End Mine is looted");
                        if (emr.updatedGame.lootSimulation.result.win.team == "mine")
                        {
                            Debug.Log("End Mine is looted win");
                            if (emr.updatedGame.lootSimulation.result.win.reward.lootbox.xp.Count > 0)
                            {
                                Debug.Log("End Mine is looted win loot");
                                if (gm.gameMode)
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(emr.updatedGame.lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                                }
                                else
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(emr.updatedGame.lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                                }

                            }
                            else
                            {
                                Debug.Log("End Mine is looted win no loot");
                                if (gm.gameMode)
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(emr.updatedGame.lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString()}";
                                }
                                else
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(emr.updatedGame.lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString()}";
                                }

                            }
                        }
                        else
                        {
                            if (emr.updatedGame.lootSimulation.result.loss.reward.lootbox.xp.Count > 0)
                            {
                                Debug.Log("End Mine is looted lose loot");
                                if (gm.gameMode)
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(emr.updatedGame.lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                                }
                                else
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(emr.updatedGame.lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                                }

                            }
                            else
                            {
                                Debug.Log("End Mine is looted lose no loot");
                                if (gm.gameMode)
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(emr.updatedGame.lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString()}";
                                }
                                else
                                {
                                    CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(emr.updatedGame.lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString()}";
                                }

                            }
                        }
                    }
                    else
                    {
                        if (gm.gameMode)
                        {

                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(emr.updatedGame.mineSimulation.reward.SGF2 / Math.Pow(10, 9)).ToString()}";
                        }
                        else
                        {

                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(emr.updatedGame.mineSimulation.reward.SGF1 / Math.Pow(10, 9)).ToString()}";
                        }
                        Debug.Log("End Mine not looted");
                    }

                }
                else
                {
                    CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                    CanvasHandler.instance.failCasePopup.SetActive(true);
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = emr.message;
                }
            }
            StartCoroutine(FindUsersMine());
            StartCoroutine(GetUserDetails());

        }
    }

    #endregion

    #region Get/Find Loot API's
    public IEnumerator FindAllLoots()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/loot/all", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log("Loot Data");



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Get Loot|" + uwr.downloadHandler.text);
            mineData = JsonUtility.FromJson<MineData>(uwr.downloadHandler.text);
            int activeLootsCount = 0;
            if (mineData != null)
            {
                mineData = mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));


                foreach (Transform t in CanvasHandler.instance.lootCardsScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }


                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (gm.gameMode)
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
                    if (mineData.data[i].lootPlayerId == playerId)
                    {
                        activeLootsCount++;
                        GameObject mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.lootCardsScrollViewContent.transform);


                        mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = lootTime - (mineData.timestamp / 1000 - mineData.data[i].lootTimestamp / 1000);
                        mineDataCard.GetComponent<MineStartedCard>().mineOrLoot = "loot";
                        mineDataCard.GetComponent<MineStartedCard>().replayBtn.gameObject.SetActive(true);
                        mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                        if (mineData.data[i].lootSimulation.result.win.team == "loot")
                        {
                            if (gm.gameMode)
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF2 " + ((int)(mineData.data[i].lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9))).ToString();
                            }
                            else
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF1 " + ((int)(mineData.data[i].lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9))).ToString();
                            }
                            //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.win.reward.SGF2.ToString();
                        }
                        else
                        {
                            if (gm.gameMode)
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF2 " + ((int)(mineData.data[i].lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9))).ToString();
                            }
                            else
                            {
                                mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF1 " + ((int)(mineData.data[i].lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9))).ToString();
                            }

                            //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.loss.reward.SGF2.ToString();
                        }

                        if ((mineData.timestamp / 1000 - mineData.data[i].lootTimestamp / 1000) >= lootTime)
                        {
                            //Debug.Log(mineData.timestamp / 1000 - mineData.data[i].mineTimestamp / 1000 + " " + "EndLoot Loot Timer");
                            if (mineData.data[i].lootClaimed)
                            {
                                GameObject.Destroy(mineDataCard);
                            }



                            mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                            mineDataCard.GetComponent<MineStartedCard>().claimBtn.gameObject.SetActive(true);
                            //StartCoroutine(EndLoot(mineData.data[i].id));
                        }
                        if (mineData.data[i].lootClaimed)
                        {
                            GameObject.Destroy(mineDataCard);
                        }
                        for (int m = 0; m < 3; m++)
                        {
                            MineStartedCard msc = mineDataCard.GetComponent<MineStartedCard>();
                            msc.energyText[m].text = mineData.data[i].mineCyborgs[m].energy.ToString();
                            msc.stressText[m].text = mineData.data[i].mineCyborgs[m].stressPoint.ToString();
                            msc.lvlText[m].text = "Lv." + mineData.data[i].mineCyborgs[m].level.ToString();
                            string name = mineData.data[i].mineCyborgs[m].name;
                            msc.nameText[m].text = name.Substring(7);
                            SetCyborgPfp(msc.originPlanetImage[m],
                                        msc.neckImage[m],
                                        msc.bodyImage[m],
                                        msc.jawImage[m],
                                        msc.vestImage[m],
                                        msc.helmetImage[m],
                                        msc.eyeImage[m],
                                        mineData.data[i].lootCyborgs[m].trait.bodyParts.originPlanet.name,
                                        mineData.data[i].lootCyborgs[m].trait.bodyParts.gender,
                                        mineData.data[i].lootCyborgs[m].trait.bodyParts.vest,
                                        mineData.data[i].lootCyborgs[m].trait.bodyParts.eye.name,
                                        mineData.data[i].lootCyborgs[m].trait.bodyParts.neck.name,
                                        mineData.data[i].lootCyborgs[m].trait.bodyParts.skin,
                                        mineData.data[i].mineCyborgs[m].rank);
                        }

                        mineDataCard.GetComponent<MineStartedCard>().mineData = mineData.data[i];
                    }
                }
                if (activeLootsCount == 0)
                {
                    CanvasHandler.instance.noActiveLoot.SetActive(true);
                }
                else
                {
                    CanvasHandler.instance.noActiveLoot.SetActive(false);
                }
            }
        }
    }

    public IEnumerator EndLoot(string lootId)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/endLoot?game=" + lootId, "POST");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Content-Type", "application/json");

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            StartCoroutine(GetUserDetails());
            Debug.Log("End Loot Response|" + uwr.downloadHandler.text);
            CanvasHandler.instance.loadingCanvas.SetActive(false);
            elr = JsonUtility.FromJson<EndLootResponse>(uwr.downloadHandler.text);

            if (elr.message != "Already claimed")
            {
                Debug.Log("End Loot Win team|" + elr.updatedGame.lootSimulation.result.win.team);
                if (elr.updatedGame.lootSimulation.result.win.team == "loot")
                {

                    CanvasHandler.instance.minePopupCanvas.SetActive(true);
                    CanvasHandler.instance.claimPopup.SetActive(true);
                    if (elr.updatedGame.lootSimulation.result.win.reward.lootbox.xp.Count > 0)
                    {
                        Debug.Log("End Loot Win team loot");
                        if (gm.gameMode)
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(elr.updatedGame.lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                        }
                        else
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(elr.updatedGame.lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                        }

                    }
                    else
                    {
                        Debug.Log("End Loot Win team no loot");
                        if (gm.gameMode)
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(elr.updatedGame.lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString()}";
                        }
                        else
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(elr.updatedGame.lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString()}";
                        }

                    }

                }
                else if (elr.updatedGame.lootSimulation.result.win.team == "mine")
                {
                    Debug.Log("End Loot Lose team");
                    CanvasHandler.instance.minePopupCanvas.SetActive(true);
                    CanvasHandler.instance.claimPopup.SetActive(true);
                    if (elr.updatedGame.lootSimulation.result.loss.reward.lootbox.xp.Count > 0)
                    {
                        Debug.Log("End Loot Lose team  loot");
                        if (gm.gameMode)
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(elr.updatedGame.lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                        }
                        else
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(elr.updatedGame.lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString()} & You have recieved a Loot Box";
                        }

                    }
                    else
                    {
                        Debug.Log("End Loot Lose team no loot");
                        if (gm.gameMode)
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF2 {(elr.updatedGame.lootSimulation.result.loss.reward.SGF2 / Math.Pow(10, 9)).ToString()}";
                        }
                        else
                        {
                            CanvasHandler.instance.claimRewardPopUpText.text = $"$SGF1 {(elr.updatedGame.lootSimulation.result.loss.reward.SGF1 / Math.Pow(10, 9)).ToString()}";
                        }

                    }
                }
            }
            else
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = elr.message;
            }

            StartCoroutine(FindAllLoots());
            StartCoroutine(GetUserDetails());
        }
    }

    #endregion

    #region Zion API's
    public IEnumerator SendCyborgZion(string id, string type, int quirkIndex, int attributeIndex)
    {
        Debug.Log("Send Cyborg" + " " + id + type);
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/zion", "POST");
        string jsonData = "";
        if (type != "Hospital")
        {
            SendZion sz = new SendZion();
            sz.id = id;
            sz.zion = type;
            //sz.speedup = speedup;
            jsonData = JsonUtility.ToJson(sz);
        }
        else
        {
            SendZionHospital szh = new SendZionHospital();
            szh.id = id;
            szh.zion = type;
            //szh.speedup = speedup;
            Debug.Log(quirkIndex + " " + attributeIndex);
            szh.quirk = new List<int> { quirkIndex - 1, attributeIndex };
            jsonData = JsonUtility.ToJson(szh);
        }

        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        Debug.Log(jsonData);


        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Content-Type", "application/json");



        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log(uwr.downloadHandler.text);
            GameManager.instance.zionSelectedCyborg = new Cyborg();
            CanvasHandler.instance.loadingCanvas.SetActive(false);
            ZionSendResponse zsr = new ZionSendResponse();
            zsr = JsonUtility.FromJson<ZionSendResponse>(uwr.downloadHandler.text);
            if (zsr.message == "Cyborg stress is zero")
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.noStressPopUp.SetActive(true);
            }
            else
            {
                StartCoroutine(GetUsersNFTs());
                StartCoroutine(GetUserDetails());
                StartCoroutine(GetZionCyborgs());
            }

        }
    }

    public IEnumerator ClaimCyborgZion(string id, string type, bool speedup = false)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/zion/claim", "POST");
        ClaimZion cz = new ClaimZion();
        cz.id = id;
        cz.zion = type;
        cz.speedup = speedup;
        string jsonData = JsonUtility.ToJson(cz);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        Debug.Log("Claim Sending Response|" + jsonData);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.zionSpeedUpPopup.SetActive(false);
        //CanvasHandler.instance.loadingCanvas.SetActive(false);
        Debug.Log("After Request");
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            CanvasHandler.instance.loadingCanvas.SetActive(false);
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            StartCoroutine(GetUserDetails());
            Debug.Log("Claim Response|" + uwr.downloadHandler.text);
            CanvasHandler.instance.loadingCanvas.SetActive(false);

            if (type == "Hospital")
            {
                zhr = JsonUtility.FromJson<ZionHospitalResponse>(uwr.downloadHandler.text);
            }
            else
            {
                zcr = JsonUtility.FromJson<ZionClaimResponse>(uwr.downloadHandler.text);
            }

            if (zcr.success || zhr.success)
            {
                if (zcr.data.isDead == true || zhr.data.isDead == true)
                {
                    Debug.Log("isDead");
                    Cyborg cyb = new Cyborg();
                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (id == cyborgList.result[l].id)
                        {
                            CanvasHandler ch = CanvasHandler.instance;
                            List<GameObject> gameObjList = new List<GameObject>() { ch.barSlot1, ch.barSlot2, ch.barSlot3, ch.brothelSlot1, ch.brothelSlot2, ch.brothelSlot3, ch.casinoSlot1, ch.casinoSlot2, ch.casinoSlot3, ch.churchSlot1, ch.churchSlot2, ch.churchSlot3, ch.hospitalSlot1, ch.hospitalSlot2, ch.hospitalSlot3 };
                            foreach (GameObject obj in gameObjList)
                            {
                                ZionSlot zs = obj.GetComponent<ZionSlot>();
                                if (zs.cyborgId == id)
                                {
                                    zs.cyborgInfo.SetActive(false);
                                    zs.dragDrop.SetActive(true);
                                    zs.cyborgImage.SetActive(false);
                                    zs.unlockedPlaceHolder.SetActive(true);
                                    zs.stress.gameObject.SetActive(false);
                                    zs.energy.gameObject.SetActive(false);
                                    zs.speedUpBtn.gameObject.SetActive(false);
                                    zs.timer.SetActive(false);
                                    zs.cyborgId = "";
                                    zs.type = "";
                                    zs.reclaimBtn.SetActive(false);
                                }
                            }


                            cyb = cyborgList.result[l].cyborg;
                            PopupCanvas pc = new PopupCanvas();
                            ch.zionPopUpCanvas.SetActive(true);
                            ch.deadPopup.SetActive(true);
                            pc = ch.deadPopup.GetComponent<PopupCanvas>();
                            pc.nameText.text = cyb.name;
                            SetCyborgPfp(pc.originPlanet, pc.neck, pc.body, pc.jaw, pc.vest, pc.helmet, pc.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            pc.lvlText.text = "Lv. " + cyb.level.ToString();
                            pc.energyText.text = cyb.energy.ToString();

                            switch (type)
                            {
                                case "Bar":
                                    pc.descriptionText.text = $"{cyb.name} died because of Alcohol poisoning.";
                                    break;
                                case "Brothel":
                                    pc.descriptionText.text = $"{cyb.name} died because of a Jealous lover.";
                                    break;
                                case "Casino":
                                    pc.descriptionText.text = $"{cyb.name} died because of a back alley robbery gone wrong.";
                                    break;
                                case "Church":
                                    pc.descriptionText.text = $"{cyb.name} died because of an act of God.";
                                    break;
                                case "Hospital":
                                    pc.descriptionText.text = $"{cyb.name} died because of a Surgery of gone wrong.";
                                    break;

                            }
                        }
                    }
                }


                else
                {
                    StartCoroutine(GetUserDetails());
                    Cyborg cyb = new Cyborg();


                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (id == cyborgList.result[l].id)
                        {
                            CanvasHandler ch = CanvasHandler.instance;
                            List<GameObject> gameObjList = new List<GameObject>() { ch.barSlot1, ch.barSlot2, ch.barSlot3, ch.brothelSlot1, ch.brothelSlot2, ch.brothelSlot3, ch.casinoSlot1, ch.casinoSlot2, ch.casinoSlot3, ch.churchSlot1, ch.churchSlot2, ch.churchSlot3, ch.hospitalSlot1, ch.hospitalSlot2, ch.hospitalSlot3 };
                            cyb = cyborgList.result[l].cyborg;

                            foreach (GameObject obj in gameObjList)
                            {
                                ZionSlot zs = obj.GetComponent<ZionSlot>();
                                if (zs.cyborgId == id)
                                {
                                    zs.cyborgInfo.SetActive(false);
                                    zs.dragDrop.SetActive(true);
                                    zs.cyborgImage.SetActive(false);
                                    zs.unlockedPlaceHolder.SetActive(true);
                                    zs.stress.gameObject.SetActive(false);
                                    zs.energy.gameObject.SetActive(false);
                                    zs.speedUpBtn.gameObject.SetActive(false);
                                    zs.timer.SetActive(false);
                                    zs.cyborgId = "";
                                    zs.type = "";
                                    zs.reclaimBtn.SetActive(false);

                                    ch.zionPopUpCanvas.SetActive(true);
                                    PopupCanvas pc = new PopupCanvas();
                                    switch (type)
                                    {
                                        case "Bar":
                                            ch.stressRelievedPopUpBar.SetActive(true);
                                            pc = ch.stressRelievedPopUpBar.GetComponent<PopupCanvas>();
                                            pc.descriptionText.text = $"{cyb.name} Stress was relieved.\nStress is now {zcr.data.newStressPoint}.\n\nYour Slot in Bar is free now for other Cyborgs.";

                                            break;
                                        case "Brothel":
                                            ch.stressRelievedPopUpBrothel.SetActive(true);
                                            pc = ch.stressRelievedPopUpBrothel.GetComponent<PopupCanvas>();
                                            pc.descriptionText.text = $"{cyb.name} Stress was relieved.\nStress is now {zcr.data.newStressPoint}.\n\nYour Slot in Brothel is free now for other Cyborgs.";
                                            break;
                                        case "Casino":
                                            ch.stressRelievedPopUpCasino.SetActive(true);
                                            pc = ch.stressRelievedPopUpCasino.GetComponent<PopupCanvas>();
                                            pc.descriptionText.text = $"{cyb.name} Stress was relieved.\nStress is now {zcr.data.newStressPoint}.\n\nYour Slot in Casino is free now for other Cyborgs.";
                                            break;
                                        case "Church":
                                            ch.stressRelievedPopUpChurch.SetActive(true);
                                            pc = ch.stressRelievedPopUpChurch.GetComponent<PopupCanvas>();
                                            pc.descriptionText.text = $"{cyb.name} Stress was relieved.\nStress is now {zcr.data.newStressPoint}.\n\nYour Slot in Church is free now for other Cyborgs.";
                                            break;
                                        case "Hospital":
                                            ch.quirkRemovedPopUpHospital.SetActive(true);
                                            pc = ch.quirkRemovedPopUpHospital.GetComponent<PopupCanvas>();
                                            pc.descriptionText.text = $"Quirk \"{NetworkingManager.instance.GetQuirk(zhr.data.acknowledgeQuirk[0] + 1, zhr.data.ackQurkInfo.attribute, zhr.data.ackQurkInfo.effect)}\" has been removed successfully from {cyb.name}.\n\n Your slot in Hospital is free now for other Cyborgs.";
                                            break;
                                    }

                                    pc.nameText.text = cyb.name;
                                    pc.lvlText.text = "Lv." + cyb.level;
                                    if (type != "Hospital")
                                    {
                                        pc.stressText.text = zcr.data.newStressPoint.ToString();
                                    }
                                    else
                                    {
                                        pc.stressText.text = cyb.stressPoint.ToString();
                                    }

                                    pc.energyText.text = cyb.energy.ToString();
                                    SetCyborgPfp(pc.originPlanet, pc.neck, pc.body, pc.jaw, pc.vest, pc.helmet, pc.eye, cyb.trait.bodyParts.originPlanet.@class, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.@class, cyb.trait.bodyParts.neck.@class, cyb.trait.bodyParts.skin, cyb.rank);

                                }
                            }
                        }
                    }
                }
                StartCoroutine(GetUsersNFTs());
            }
            else
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                if (type == "Hospital")
                {
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = zhr.message;
                }
                else
                {
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                    CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = zcr.message;
                }


            }


        }
    }

    public IEnumerator GetZionCyborgs()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/zion", "GET");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            zr = JsonUtility.FromJson<ZionResponse>(uwr.downloadHandler.text);
            Debug.Log("Get Zion Cyborgs|" + uwr.downloadHandler.text);
            int barCount = 0;
            int brothelCount = 0;
            int casinoCount = 0;
            int churchCount = 0;
            int hospitalCount = 0;
            CanvasHandler ch = CanvasHandler.instance;
            List<GameObject> gameObjList = new List<GameObject>() { ch.barSlot1, ch.barSlot2, ch.barSlot3, ch.brothelSlot1, ch.brothelSlot2, ch.brothelSlot3, ch.casinoSlot1, ch.casinoSlot2,
                                                                        ch.casinoSlot3, ch.churchSlot1, ch.churchSlot2, ch.churchSlot3, ch.hospitalSlot1, ch.hospitalSlot2, ch.hospitalSlot3 };

            foreach (GameObject obj in gameObjList)
            {
                ZionSlot zs = obj.GetComponent<ZionSlot>();
                zs.cyborgInfo.SetActive(false);
                zs.dragDrop.SetActive(true);
                zs.cyborgImage.SetActive(false);
                zs.unlockedPlaceHolder.SetActive(true);
                zs.stress.gameObject.SetActive(false);
                zs.energy.gameObject.SetActive(false);
                zs.timer.SetActive(false);
                zs.cyborgId = "";
                zs.type = "";
                zs.reclaimBtn.SetActive(false);
                zs.timeStamp = zr.timestamp;
            }
            for (int i = 0; i < zr.cyborgs.Count; i++)
            {
                long timePassed = zr.timestamp / 1000 - zr.cyborgs[i].zion.createdAt / 1000;
                //Debug.Log("TimePassed " + timePassed);
                float maxTime = tavernTime;

                if (zr.cyborgs[i].zion.zionType == "Bar")
                {
                    Cyborg cyb = new Cyborg();
                    string cyborgId = zr.cyborgs[i].id;
                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (cyborgId == cyborgList.result[l].id)
                        {
                            //Debug.Log(cyborgId);
                            cyb = cyborgList.result[l].cyborg;
                        }
                    }
                    barCount++;
                    switch (barCount)
                    {
                        case 1:
                            ZionSlot zs1 = CanvasHandler.instance.barSlot1.GetComponent<ZionSlot>();
                            zs1.cyborgInfo.SetActive(true);
                            zs1.dragDrop.SetActive(false);
                            zs1.cyborgImage.SetActive(true);
                            zs1.unlockedPlaceHolder.SetActive(false);
                            zs1.stress.gameObject.SetActive(true);
                            zs1.energy.gameObject.SetActive(true);
                            zs1.speedUpBtn.gameObject.SetActive(true);
                            zs1.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs1.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs1.timeStamp = zr.timestamp;
                            zs1.nameText.text = cyb.name;
                            zs1.timer.SetActive(true);
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - (float)timePassed;
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs1.cyborgId = cyborgId;
                            zs1.type = zr.cyborgs[i].zion.zionType;
                            zs1.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs1.originPlanet, zs1.neck, zs1.body, zs1.jaw, zs1.vest, zs1.helmet, zs1.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 2:
                            ZionSlot zs2 = CanvasHandler.instance.barSlot2.GetComponent<ZionSlot>();
                            zs2.cyborgInfo.SetActive(true);
                            zs2.dragDrop.SetActive(false);
                            zs2.cyborgImage.SetActive(true);
                            zs2.unlockedPlaceHolder.SetActive(false);
                            zs2.stress.gameObject.SetActive(true);
                            zs2.energy.gameObject.SetActive(true);
                            zs2.speedUpBtn.gameObject.SetActive(true);
                            zs2.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs2.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs2.timeStamp = zr.timestamp;
                            zs2.nameText.text = cyb.name;
                            zs2.timer.SetActive(true);
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs2.cyborgId = cyborgId;
                            zs2.type = zr.cyborgs[i].zion.zionType;
                            zs2.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs2.originPlanet, zs2.neck, zs2.body, zs2.jaw, zs2.vest, zs2.helmet, zs2.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 3:
                            ZionSlot zs3 = CanvasHandler.instance.barSlot3.GetComponent<ZionSlot>();
                            zs3.cyborgInfo.SetActive(true);
                            zs3.dragDrop.SetActive(false);
                            zs3.cyborgImage.SetActive(true);
                            zs3.speedUpBtn.gameObject.SetActive(true);
                            zs3.unlockedPlaceHolder.SetActive(false);
                            zs3.stress.gameObject.SetActive(true);
                            zs3.energy.gameObject.SetActive(true);
                            zs3.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs3.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs3.timeStamp = zr.timestamp;
                            zs3.nameText.text = cyb.name;
                            zs3.timer.SetActive(true);
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs3.cyborgId = cyborgId;
                            zs3.type = zr.cyborgs[i].zion.zionType;
                            zs3.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs3.originPlanet, zs3.neck, zs3.body, zs3.jaw, zs3.vest, zs3.helmet, zs3.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                    }
                }
                if (zr.cyborgs[i].zion.zionType == "Brothel")
                {
                    Cyborg cyb = new Cyborg();
                    string cyborgId = zr.cyborgs[i].id;
                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (cyborgId == cyborgList.result[l].id)
                        {
                            //Debug.Log(cyborgId);
                            cyb = cyborgList.result[l].cyborg;
                        }
                    }
                    brothelCount++;
                    switch (brothelCount)
                    {
                        case 1:
                            ZionSlot zs1 = CanvasHandler.instance.brothelSlot1.GetComponent<ZionSlot>();
                            zs1.cyborgInfo.SetActive(true);
                            zs1.dragDrop.SetActive(false);
                            zs1.cyborgImage.SetActive(true);
                            zs1.unlockedPlaceHolder.SetActive(false);
                            zs1.stress.gameObject.SetActive(true);
                            zs1.energy.gameObject.SetActive(true);
                            zs1.speedUpBtn.gameObject.SetActive(true);
                            zs1.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs1.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs1.timeStamp = zr.timestamp;
                            zs1.nameText.text = cyb.name;
                            zs1.timer.SetActive(true);
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs1.cyborgId = cyborgId;
                            zs1.type = zr.cyborgs[i].zion.zionType;
                            zs1.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs1.originPlanet, zs1.neck, zs1.body, zs1.jaw, zs1.vest, zs1.helmet, zs1.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 2:
                            ZionSlot zs2 = CanvasHandler.instance.brothelSlot2.GetComponent<ZionSlot>();
                            zs2.cyborgInfo.SetActive(true);
                            zs2.dragDrop.SetActive(false);
                            zs2.cyborgImage.SetActive(true);
                            zs2.unlockedPlaceHolder.SetActive(false);
                            zs2.stress.gameObject.SetActive(true);
                            zs2.energy.gameObject.SetActive(true);
                            zs2.speedUpBtn.gameObject.SetActive(true);
                            zs2.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs2.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs2.timeStamp = zr.timestamp;
                            zs2.nameText.text = cyb.name;
                            zs2.timer.SetActive(true);
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs2.cyborgId = cyborgId;
                            zs2.type = zr.cyborgs[i].zion.zionType;
                            zs2.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs2.originPlanet, zs2.neck, zs2.body, zs2.jaw, zs2.vest, zs2.helmet, zs2.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 3:
                            ZionSlot zs3 = CanvasHandler.instance.brothelSlot3.GetComponent<ZionSlot>();
                            zs3.cyborgInfo.SetActive(true);
                            zs3.dragDrop.SetActive(false);
                            zs3.cyborgImage.SetActive(true);
                            zs3.unlockedPlaceHolder.SetActive(false);
                            zs3.stress.gameObject.SetActive(true);
                            zs3.energy.gameObject.SetActive(true);
                            zs3.speedUpBtn.gameObject.SetActive(true);
                            zs3.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs3.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs3.timeStamp = zr.timestamp;
                            zs3.nameText.text = cyb.name;
                            zs3.timer.SetActive(true);
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs3.cyborgId = cyborgId;
                            zs3.type = zr.cyborgs[i].zion.zionType;
                            zs3.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs3.originPlanet, zs3.neck, zs3.body, zs3.jaw, zs3.vest, zs3.helmet, zs3.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                    }
                }
                if (zr.cyborgs[i].zion.zionType == "Casino")
                {
                    Cyborg cyb = new Cyborg();
                    string cyborgId = zr.cyborgs[i].id;
                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (cyborgId == cyborgList.result[l].id)
                        {
                            //Debug.Log(cyborgId);
                            cyb = cyborgList.result[l].cyborg;
                        }
                    }
                    casinoCount++;
                    switch (casinoCount)
                    {
                        case 1:
                            ZionSlot zs1 = CanvasHandler.instance.casinoSlot1.GetComponent<ZionSlot>();
                            zs1.cyborgInfo.SetActive(true);
                            zs1.dragDrop.SetActive(false);
                            zs1.cyborgImage.SetActive(true);
                            zs1.unlockedPlaceHolder.SetActive(false);
                            zs1.stress.gameObject.SetActive(true);
                            zs1.energy.gameObject.SetActive(true);
                            zs1.speedUpBtn.gameObject.SetActive(true);
                            zs1.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs1.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs1.timeStamp = zr.timestamp;
                            zs1.nameText.text = cyb.name;
                            zs1.timer.SetActive(true);
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs1.cyborgId = cyborgId;
                            zs1.type = zr.cyborgs[i].zion.zionType;
                            zs1.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs1.originPlanet, zs1.neck, zs1.body, zs1.jaw, zs1.vest, zs1.helmet, zs1.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 2:
                            ZionSlot zs2 = CanvasHandler.instance.casinoSlot2.GetComponent<ZionSlot>();
                            zs2.cyborgInfo.SetActive(true);
                            zs2.dragDrop.SetActive(false);
                            zs2.cyborgImage.SetActive(true);
                            zs2.unlockedPlaceHolder.SetActive(false);
                            zs2.stress.gameObject.SetActive(true);
                            zs2.energy.gameObject.SetActive(true);
                            zs2.speedUpBtn.gameObject.SetActive(true);
                            zs2.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs2.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs2.timeStamp = zr.timestamp;
                            zs2.nameText.text = cyb.name;
                            zs2.timer.SetActive(true);
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs2.cyborgId = cyborgId;
                            zs2.type = zr.cyborgs[i].zion.zionType;
                            zs2.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs2.originPlanet, zs2.neck, zs2.body, zs2.jaw, zs2.vest, zs2.helmet, zs2.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 3:
                            ZionSlot zs3 = CanvasHandler.instance.casinoSlot3.GetComponent<ZionSlot>();
                            zs3.cyborgInfo.SetActive(true);
                            zs3.dragDrop.SetActive(false);
                            zs3.cyborgImage.SetActive(true);
                            zs3.unlockedPlaceHolder.SetActive(false);
                            zs3.stress.gameObject.SetActive(true);
                            zs3.energy.gameObject.SetActive(true);
                            zs3.speedUpBtn.gameObject.SetActive(true);
                            zs3.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs3.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs3.timeStamp = zr.timestamp;
                            zs3.nameText.text = cyb.name;
                            zs3.timer.SetActive(true);
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs3.cyborgId = cyborgId;
                            zs3.type = zr.cyborgs[i].zion.zionType;
                            zs3.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs3.originPlanet, zs3.neck, zs3.body, zs3.jaw, zs3.vest, zs3.helmet, zs3.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                    }
                }
                if (zr.cyborgs[i].zion.zionType == "Church")
                {
                    Cyborg cyb = new Cyborg();
                    string cyborgId = zr.cyborgs[i].id;
                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (cyborgId == cyborgList.result[l].id)
                        {
                            //Debug.Log(cyborgId);
                            cyb = cyborgList.result[l].cyborg;
                        }
                    }
                    churchCount++;
                    switch (churchCount)
                    {
                        case 1:
                            ZionSlot zs1 = CanvasHandler.instance.churchSlot1.GetComponent<ZionSlot>();
                            zs1.cyborgInfo.SetActive(true);
                            zs1.dragDrop.SetActive(false);
                            zs1.cyborgImage.SetActive(true);
                            zs1.unlockedPlaceHolder.SetActive(false);
                            zs1.stress.gameObject.SetActive(true);
                            zs1.energy.gameObject.SetActive(true);
                            zs1.speedUpBtn.gameObject.SetActive(true);
                            zs1.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs1.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs1.timeStamp = zr.timestamp;
                            zs1.timer.SetActive(true);
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs1.nameText.text = cyb.name;
                            zs1.cyborgId = cyborgId;
                            zs1.type = zr.cyborgs[i].zion.zionType;
                            zs1.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs1.originPlanet, zs1.neck, zs1.body, zs1.jaw, zs1.vest, zs1.helmet, zs1.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 2:
                            ZionSlot zs2 = CanvasHandler.instance.churchSlot2.GetComponent<ZionSlot>();
                            zs2.cyborgInfo.SetActive(true);
                            zs2.dragDrop.SetActive(false);
                            zs2.cyborgImage.SetActive(true);
                            zs2.unlockedPlaceHolder.SetActive(false);
                            zs2.stress.gameObject.SetActive(true);
                            zs2.energy.gameObject.SetActive(true);
                            zs2.speedUpBtn.gameObject.SetActive(true);
                            zs2.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs2.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs2.timeStamp = zr.timestamp;
                            zs2.nameText.text = cyb.name;
                            zs2.timer.SetActive(true);
                            zs2.cyborgId = cyborgId;
                            zs2.type = zr.cyborgs[i].zion.zionType;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs2.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs2.originPlanet, zs2.neck, zs2.body, zs2.jaw, zs2.vest, zs2.helmet, zs2.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 3:
                            ZionSlot zs3 = CanvasHandler.instance.churchSlot3.GetComponent<ZionSlot>();
                            zs3.cyborgInfo.SetActive(true);
                            zs3.dragDrop.SetActive(false);
                            zs3.cyborgImage.SetActive(true);
                            zs3.unlockedPlaceHolder.SetActive(false);
                            zs3.stress.gameObject.SetActive(true);
                            zs3.energy.gameObject.SetActive(true);
                            zs3.speedUpBtn.gameObject.SetActive(true);
                            zs3.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs3.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs3.timeStamp = zr.timestamp;
                            zs3.nameText.text = cyb.name;
                            zs3.timer.SetActive(true);
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs3.cyborgId = cyborgId;
                            zs3.type = zr.cyborgs[i].zion.zionType;
                            zs3.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs3.originPlanet, zs3.neck, zs3.body, zs3.jaw, zs3.vest, zs3.helmet, zs3.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                    }
                }
                if (zr.cyborgs[i].zion.zionType == "Hospital")
                {
                    maxTime = hospitalTime;
                    Cyborg cyb = new Cyborg();
                    string cyborgId = zr.cyborgs[i].id;
                    for (int l = 0; l < cyborgList.result.Count; l++)
                    {
                        if (cyborgId == cyborgList.result[l].id)
                        {
                            //Debug.Log(cyborgId);
                            cyb = cyborgList.result[l].cyborg;
                        }
                    }
                    hospitalCount++;
                    switch (hospitalCount)
                    {
                        case 1:
                            ZionSlot zs1 = CanvasHandler.instance.hospitalSlot1.GetComponent<ZionSlot>();
                            zs1.cyborgInfo.SetActive(true);
                            zs1.dragDrop.SetActive(false);
                            zs1.cyborgImage.SetActive(true);
                            zs1.unlockedPlaceHolder.SetActive(false);
                            zs1.stress.gameObject.SetActive(true);
                            zs1.energy.gameObject.SetActive(true);
                            zs1.speedUpBtn.gameObject.SetActive(true);
                            zs1.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs1.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs1.timeStamp = zr.timestamp;
                            zs1.timer.SetActive(true);
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs1.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs1.nameText.text = cyb.name;
                            zs1.cyborgId = cyborgId;
                            zs1.type = zr.cyborgs[i].zion.zionType;
                            zs1.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs1.originPlanet, zs1.neck, zs1.body, zs1.jaw, zs1.vest, zs1.helmet, zs1.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 2:
                            ZionSlot zs2 = CanvasHandler.instance.hospitalSlot2.GetComponent<ZionSlot>();
                            zs2.cyborgInfo.SetActive(true);
                            zs2.dragDrop.SetActive(false);
                            zs2.cyborgImage.SetActive(true);
                            zs2.unlockedPlaceHolder.SetActive(false);
                            zs2.stress.gameObject.SetActive(true);
                            zs2.energy.gameObject.SetActive(true);
                            zs2.speedUpBtn.gameObject.SetActive(true);
                            zs2.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs2.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs2.timeStamp = zr.timestamp;
                            zs2.nameText.text = cyb.name;
                            zs2.timer.SetActive(true);
                            zs2.cyborgId = cyborgId;
                            zs2.type = zr.cyborgs[i].zion.zionType;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs2.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs2.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs2.originPlanet, zs2.neck, zs2.body, zs2.jaw, zs2.vest, zs2.helmet, zs2.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                        case 3:
                            ZionSlot zs3 = CanvasHandler.instance.hospitalSlot3.GetComponent<ZionSlot>();
                            zs3.cyborgInfo.SetActive(true);
                            zs3.dragDrop.SetActive(false);
                            zs3.cyborgImage.SetActive(true);
                            zs3.unlockedPlaceHolder.SetActive(false);
                            zs3.stress.gameObject.SetActive(true);
                            zs3.energy.gameObject.SetActive(true);
                            zs3.speedUpBtn.gameObject.SetActive(true);
                            zs3.stress.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.stressPoint.ToString();
                            zs3.energy.gameObject.GetComponentInChildren<TMP_Text>().text = cyb.energy.ToString();
                            zs3.timeStamp = zr.timestamp;
                            zs3.nameText.text = cyb.name;
                            zs3.timer.SetActive(true);
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerStart = maxTime - timePassed;
                            zs3.timer.gameObject.GetComponentInChildren<CountdownTimer>().timerFlag = 0;
                            zs3.cyborgId = cyborgId;
                            zs3.type = zr.cyborgs[i].zion.zionType;
                            zs3.createdAt = zr.cyborgs[i].zion.createdAt;
                            SetCyborgPfp(zs3.originPlanet, zs3.neck, zs3.body, zs3.jaw, zs3.vest, zs3.helmet, zs3.eye, cyb.trait.bodyParts.originPlanet.name, cyb.trait.bodyParts.gender, cyb.trait.bodyParts.vest, cyb.trait.bodyParts.eye.name, cyb.trait.bodyParts.neck.name, cyb.trait.bodyParts.skin, cyb.rank);
                            continue;
                    }
                }

            }
        }

    }

    #endregion

    #region Daily Rewards
    public IEnumerator GetRewardDay()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/rewardDay", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        Debug.Log(uwr.downloadHandler.text);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            RewardDayResponse rdr = new RewardDayResponse();
            rdr = JsonUtility.FromJson<RewardDayResponse>(uwr.downloadHandler.text);
            if (rdr.day != 0 && !NetworkingManager.instance.isDemo)
            {
                CanvasHandler.instance.dailyRewardsPopup.SetActive(true);
                rdr.day = (rdr.day % 7);
                if (rdr.day == 0)
                {
                    rdr.day = 7;
                }
                Debug.Log(rdr.day);
            }

            for (int i = 0; i < rdr.day - 1; i++)
            {
                CanvasHandler.instance.drd[i].claimed.SetActive(true);
                CanvasHandler.instance.drd[i].active.SetActive(false);
                CanvasHandler.instance.drd[i].inactive.SetActive(false);
            }
            if (CanvasHandler.instance.drd.Count > 0)
            {
                switch (rdr.day)
                {
                    case 1:
                        CanvasHandler.instance.drd[0].active.SetActive(true);
                        CanvasHandler.instance.drd[0].inactive.SetActive(false);
                        break;
                    case 2:
                        CanvasHandler.instance.drd[1].active.SetActive(true);
                        CanvasHandler.instance.drd[1].inactive.SetActive(false);
                        break;
                    case 3:
                        CanvasHandler.instance.drd[2].active.SetActive(true);
                        CanvasHandler.instance.drd[2].inactive.SetActive(false);
                        break;
                    case 4:
                        CanvasHandler.instance.drd[3].active.SetActive(true);
                        CanvasHandler.instance.drd[3].inactive.SetActive(false);
                        break;
                    case 5:
                        CanvasHandler.instance.drd[4].active.SetActive(true);
                        CanvasHandler.instance.drd[4].inactive.SetActive(false);
                        break;
                    case 6:
                        CanvasHandler.instance.drd[5].active.SetActive(true);
                        CanvasHandler.instance.drd[5].inactive.SetActive(false);
                        break;
                    case 7:
                        CanvasHandler.instance.drd[6].active.SetActive(true);
                        CanvasHandler.instance.drd[6].inactive.SetActive(false);
                        break;

                }
            }

        }
    }

    public IEnumerator ClaimReward()
    {

        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/claimReward", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log(uwr.downloadHandler.text);
            CiamRewardResponse crr = new CiamRewardResponse();
            crr = JsonUtility.FromJson<CiamRewardResponse>(uwr.downloadHandler.text);
            CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
            CanvasHandler.instance.failCasePopup.SetActive(true);
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Successful";
            CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Hooray! You have successfully claimed your daily reward! Enjoy the spoils and keep coming back for more daily surprises. Happy gaming!";
        }
    }

    public IEnumerator Leaderboard()
    {

        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/leaderboard", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        Debug.Log(uwr.downloadHandler.text);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Leaderboard lb = new Leaderboard();
            lb = JsonUtility.FromJson<Leaderboard>(uwr.downloadHandler.text);
            foreach (Transform t in CanvasHandler.instance.leaderboardScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            for (int i = 0; i < lb.topPlayers.Count; i++)
            {
                GameObject leaderboardEntry = Instantiate(CanvasHandler.instance.leaderboardPrefab, CanvasHandler.instance.leaderboardScrollViewContent.transform);
                LeaderboardPrefab lp2 = leaderboardEntry.GetComponent<LeaderboardPrefab>();
                int rank = i + 1;
                lp2.rank.text = "#" + rank.ToString();
                lp2.username.text = lb.topPlayers[i].username;
                if (gm.gameMode)
                {
                    lp2.points.text = (lb.topPlayers[i].SGF2 / 1000000000).ToString();
                }
                else
                {
                    lp2.points.text = (lb.topPlayers[i].SGF1 / 1000000000).ToString();
                }

            }
            GameObject playerEntry = Instantiate(CanvasHandler.instance.playerLeaderboardPrefab, CanvasHandler.instance.leaderboardScrollViewContent.transform);
            LeaderboardPrefab lp = playerEntry.GetComponent<LeaderboardPrefab>();
            lp.rank.text = "#" + lb.playerRank.ToString();
            lp.rank.color = new Color32(253, 196, 21, 255);
            lp.username.text = userDetails.result.username;
            lp.username.color = new Color32(253, 196, 21, 255);
            if (gm.gameMode)
            {
                lp.points.text = (userDetails.result.SGF2 / 1000000000).ToString();
                lp.points.color = new Color32(253, 196, 21, 255);
            }
            else
            {
                lp.points.text = (userDetails.result.SGF1 / 1000000000).ToString();
                lp.points.color = new Color32(253, 196, 21, 255);
            }
        }
    }
    #endregion

    #region AllCompletedGames & GameInfo API

    //Loot History
    public IEnumerator GetAllGames(bool isMineHistory)
    {

        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/user/loot/all", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log(uwr.result + " " + uwr.downloadHandler.text);
            mineData = JsonUtility.FromJson<MineData>(uwr.downloadHandler.text);
            int lootHistoryCount = 0;
            int dataInstantiateCount = 0;
            if (mineData.data != null)
            {
                mineData = mineRankFilter(mineData);
                mineData.data.Sort((x, y) => y.gameID.CompareTo(x.gameID));
                if (isMineHistory)
                {
                    foreach (Transform t in CanvasHandler.instance.mineHistoryScrollViewContent.transform)
                    {
                        GameObject.Destroy(t.gameObject);
                    }
                }
                else
                {
                    foreach (Transform t in CanvasHandler.instance.lootHistoryScrollViewContent.transform)
                    {
                        GameObject.Destroy(t.gameObject);
                    }
                }
                tournamentLootHistoryCount = 0;
                for (int i = 0; i < mineData.data.Count; i++)
                {
                    if (mineData.data[i].mode == "tournament")
                    {
                        tournamentLootHistoryCount++;
                    }
                    if (gm.gameMode)
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
                    if (isMineHistory)
                    {
                        if (mineData.data[i].minePlayerId == playerId)
                        {
                            GameObject mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.mineHistoryScrollViewContent.transform);
                            mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = 0f;
                            if (mineData.data[i].result != "pureWin")
                            {
                                if (mineData.data[i].lootSimulation.result.win.team == "mine")
                                {
                                    if (gm.gameMode)
                                    {
                                        mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward:  $SGF2 " + (mineData.data[i].lootSimulation.result.win.reward.SGF2 / Math.Pow(10, 9)).ToString();
                                    }
                                    else
                                    {
                                        mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward:  $SGF1 " + (mineData.data[i].lootSimulation.result.win.reward.SGF1 / Math.Pow(10, 9)).ToString();
                                    }

                                    //mineDataCard.GetComponent<MineStartedCard>().reward2Text.text = mineData.data[i].lootSimulation.result.win.reward.SGF2.ToString();
                                }
                                else
                                {
                                    if (gm.gameMode)
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
                                if (gm.gameMode)
                                {
                                    mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF2 " + (mineData.data[i].mineSimulation.reward.SGF2 / Math.Pow(10, 9)).ToString();
                                }
                                else
                                {
                                    mineDataCard.GetComponent<MineStartedCard>().reward1Text.text = "Reward: $SGF1 " + (mineData.data[i].mineSimulation.reward.SGF1 / Math.Pow(10, 9)).ToString();
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
                                SetCyborgPfp(msc.originPlanetImage[m],
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
                    }
                    else
                    {
                        if (mineData.data[i].lootPlayerId == playerId)
                        {
                            dataInstantiateCount++;
                            if (dataInstantiateCount < ((NetworkingManager.instance.lootHistoryPageCount - 1) * 20) - 1)
                            {
                                continue;
                            }
                            lootHistoryCount++;
                            GameObject mineDataCard = Instantiate(CanvasHandler.instance.mineStartedCaardPrefab, CanvasHandler.instance.lootHistoryScrollViewContent.transform);
                            mineDataCard.GetComponent<MineStartedCard>().timer.GetComponentInChildren<CountdownTimer>().timerStart = 0f;
                            mineDataCard.GetComponent<MineStartedCard>().viewBtn.gameObject.SetActive(false);
                            mineDataCard.GetComponent<MineStartedCard>().claimBtn.gameObject.SetActive(true);
                            mineDataCard.GetComponent<MineStartedCard>().replayBtn.gameObject.SetActive(true);
                            if (mineData.data[i].lootSimulation.result.win.team == "loot")
                            {
                                if (gm.gameMode)
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
                                if (gm.gameMode)
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
                                SetCyborgPfp(msc.originPlanetImage[m],
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
                    }
                    if (dataInstantiateCount > (lootHistoryPageCount * 20) - 1)
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
        Debug.Log("TournamentLootHistoryCount " + tournamentLootHistoryCount);
        CanvasHandler.instance.SetPageNumberHistory();
    }

    public IEnumerator GetGameInfo(string id)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/game/sim?game=" + id, "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log("Mine Details");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Mine Details Response|" + uwr.result + " " + uwr.downloadHandler.text);
            battleSimulation = JsonUtility.FromJson<BattleSimulation>(uwr.downloadHandler.text);
            if (battleSimulation.result.lootCyborgs.Count == 0)
            {
                mineOrLoot = "mine";
            }
            mineOrLoot = "loot";
            SceneManager.LoadScene(2);
        }
    }

    #endregion

    #region NFT API's and PFP Setter
    public IEnumerator GetUsersNFTs(bool levelUp = false, string filter = "")
    {
        if (CanvasHandler.instance.mineTeamSelectionGroup.activeInHierarchy || CanvasHandler.instance.lootTeamSelectionGroup.activeInHierarchy || CanvasHandler.instance.zionCardsScrollViewContent.activeInHierarchy)
        {
            CanvasHandler.instance.loadingCanvas.SetActive(true);
        }

        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/assets/cyborgs", "GET");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        if (CanvasHandler.instance.mineTeamSelectionGroup.activeInHierarchy || CanvasHandler.instance.lootTeamSelectionGroup.activeInHierarchy || CanvasHandler.instance.zionCardsScrollViewContent.activeInHierarchy)
        {
            CanvasHandler.instance.loadingCanvas.SetActive(false);
        }
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log(uwr.result + " " + uwr.downloadHandler.text);
            cyborgList = JsonUtility.FromJson<CyborgData>(uwr.downloadHandler.text);
            if (CanvasHandler.instance.inventoryCyborgScrollViewContent.activeInHierarchy)
            {
                foreach (Transform t in CanvasHandler.instance.inventoryCyborgScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                int cyborgAliveCount = 0;
                for (int i = 0; i < cyborgList.result.Count; i++)
                {
                    if (NetworkingManager.instance.gm.gameMode)
                    {
                        if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (cyborgList.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }

                    if (cyborgList.result[i].cyborg.status.ToLower() == "dead")
                    {
                        continue;
                    }
                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.inventoryCyborgPrefab, CanvasHandler.instance.inventoryCyborgScrollViewContent.transform);
                    cyborgAliveCount++;
                    if (cyborgList.result[i].cyborg.status != "Idle")
                    {
                        inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                    }
                    CyborgPFPSetter(inventCyborg, i);
                    inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                }
                CanvasHandler.instance.inventoryCyborgCountText.text = "You Have " + cyborgAliveCount.ToString() + " Cyborgs in Your Inventory";
            }
            if (CanvasHandler.instance.cemeteryScrollViewContent.activeInHierarchy)
            {
                foreach (Transform t in CanvasHandler.instance.cemeteryScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }

                int cyborgDeadCount = 0;
                for (int i = 0; i < cyborgList.result.Count; i++)
                {

                    if (NetworkingManager.instance.gm.gameMode)
                    {
                        if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (cyborgList.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }
                    if (cyborgList.result[i].cyborg.status.ToLower() == "dead")
                    {
                        GameObject inventCyborg = Instantiate(CanvasHandler.instance.inventoryCyborgPrefab, CanvasHandler.instance.cemeteryScrollViewContent.transform);
                        cyborgDeadCount++;
                        inventCyborg.GetComponent<InventoryCyborg>().deadBorder.gameObject.SetActive(true);
                        CyborgPFPSetter(inventCyborg, i);
                        inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                    }
                    CanvasHandler.instance.cemeteryCyborgCountText.text = "You have " + cyborgDeadCount.ToString() + " dead cyborgs in your inventory";
                }
            }
            if (CanvasHandler.instance.mineTeamSelectionGroup.activeInHierarchy)
            {
                GameManager.instance.playerCyborgList.Clear();
                foreach (Transform t in CanvasHandler.instance.mineCyborgScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                if (GameManager.instance.selectedCyborg == null || GameManager.instance.selectedCyborg.id == 0)
                {
                    CanvasHandler.instance.noCyborgSelectedMine.SetActive(true);
                }
                cyborgList = nftRankFilter(cyborgList);

                TeamSelectionHandler tsh = CanvasHandler.instance.mineCyborgScrollViewContent.GetComponentInParent<TeamSelectionHandler>();
                int tournamentCount = 0;

                for (int i = 0; i < cyborgList.result.Count; i++)
                {
                    if (gm.gameMode)
                    {
                        if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                        {
                            continue;
                        }
                        else
                        {
                            tournamentCount++;
                        }
                    }
                    else
                    {
                        if (cyborgList.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }

                    if (cyborgList.result[i].cyborg.status == "Idle" && cyborgList.result[i].cyborg.stressPoint < 100 && cyborgList.result[i].cyborg.energy >= 4)
                    {
                        GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.mineCyborgScrollViewContent.transform);
                        GameManager.instance.playerCyborgList.Add(inventCyborg);
                        if (GameManager.instance.selectedCyborg != null)
                        {
                            if (GameManager.instance.selectedCyborg.id == cyborgList.result[i].cyborg.id)
                            {
                                inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                            }

                        }
                        CyborgPFPSetter(inventCyborg, i);
                        inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                    }

                }

                int childCount = 0;
                foreach (Transform t in CanvasHandler.instance.mineCyborgScrollViewContent.transform)
                {
                    //Debug.Log("Count" + childCount);
                    childCount++;
                }
                if (gm.gameMode && tournamentCount == 0 && !isWager)
                {
                    CanvasHandler.instance.noCyborgSelectedMine.SetActive(false);
                    tsh.cyborgsOccupiedMine.SetActive(false);
                    tsh.noCyborgsMine.SetActive(true);
                }
                else if (cyborgList.result.Count == 0 && !isWager)
                {
                    CanvasHandler.instance.noCyborgSelectedMine.SetActive(false);
                    tsh.cyborgsOccupiedMine.SetActive(false);
                    tsh.noCyborgsMine.SetActive(true);
                }
                else if (childCount == 0 && cyborgList.result.Count > 0 && !isWager)
                {
                    //Debug.Log("occupied");
                    CanvasHandler.instance.noCyborgSelectedMine.SetActive(false);
                    tsh.noCyborgsMine.SetActive(false);
                    tsh.cyborgsOccupiedMine.SetActive(true);
                }
                else if (cyborgList.result.Count > 0)
                {
                    tsh.noCyborgsMine.SetActive(false);
                    tsh.cyborgsOccupiedMine.SetActive(false);

                }
                else
                {
                    tsh.cyborgsOccupiedMine.SetActive(false);
                    tsh.noCyborgsMine.SetActive(false);
                }

                foreach (GameObject obj in GameManager.instance.playerCyborgList)
                {
                    InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                    if (tsh.cybList.Contains(invCyb.cyborg.id))
                    {
                        invCyb.greyImage.gameObject.SetActive(true);
                        invCyb.goldBorder.gameObject.SetActive(false);
                        invCyb.button.enabled = false;
                    }


                }
            }
            if (CanvasHandler.instance.lootTeamSelectionGroup.activeInHierarchy)
            {
                GameManager.instance.playerCyborgList.Clear();
                foreach (Transform t in CanvasHandler.instance.lootCyborgScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                if (GameManager.instance.selectedCyborg == null)
                {
                    CanvasHandler.instance.noCyborgSelectedLoot.SetActive(true);
                }
                else if (GameManager.instance.selectedCyborg.id == 0)
                {
                    CanvasHandler.instance.noCyborgSelectedLoot.SetActive(true);
                }
                cyborgList = nftRankFilter(cyborgList);




                TeamSelectionHandler tsh = CanvasHandler.instance.lootCyborgScrollViewContent.GetComponentInParent<TeamSelectionHandler>();
                int tournamentCount = 0;
                for (int i = 0; i < cyborgList.result.Count; i++)
                {
                    if (NetworkingManager.instance.gm.gameMode)
                    {
                        if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                        {
                            continue;
                        }
                        else
                        {
                            tournamentCount++;
                        }
                    }
                    else
                    {
                        if (cyborgList.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }
                    if (cyborgList.result[i].cyborg.status == "Idle" && cyborgList.result[i].cyborg.stressPoint < 100 && cyborgList.result[i].cyborg.energy >= 1)
                    {
                        GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.lootCyborgScrollViewContent.transform);
                        GameManager.instance.playerCyborgList.Add(inventCyborg);
                        if (GameManager.instance.selectedCyborg != null)
                        {
                            if (GameManager.instance.selectedCyborg.id == cyborgList.result[i].cyborg.id)
                            {
                                inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                            }

                        }
                        CyborgPFPSetter(inventCyborg, i);
                        inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                    }
                }
                int childCount = 0;
                foreach (Transform t in CanvasHandler.instance.lootCyborgScrollViewContent.transform)
                {
                    //Debug.Log("Count" + childCount);
                    childCount++;
                }
                if (gm.gameMode && tournamentCount == 0)
                {
                    CanvasHandler.instance.noCyborgSelectedLoot.SetActive(false);
                    tsh.cyborgsOccupiedLoot.SetActive(false);
                    tsh.noCyborgsLoot.SetActive(true);
                }
                else if (cyborgList.result.Count == 0)
                {
                    CanvasHandler.instance.noCyborgSelectedLoot.SetActive(false);
                    tsh.cyborgsOccupiedLoot.SetActive(false);
                    tsh.noCyborgsLoot.SetActive(true);
                }
                else if (childCount == 0 && cyborgList.result.Count > 0)
                {
                    //Debug.Log("occupied");
                    CanvasHandler.instance.noCyborgSelectedLoot.SetActive(false);
                    tsh.noCyborgsLoot.SetActive(false);
                    tsh.cyborgsOccupiedLoot.SetActive(true);
                }
                else if (cyborgList.result.Count > 0)
                {
                    tsh.noCyborgsLoot.SetActive(false);
                    tsh.cyborgsOccupiedLoot.SetActive(false);
                }
                else
                {
                    tsh.cyborgsOccupiedLoot.SetActive(false);
                    tsh.noCyborgsLoot.SetActive(false);
                }
                foreach (GameObject obj in GameManager.instance.playerCyborgList)
                {
                    InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                    if (tsh.cybList.Contains(invCyb.cyborg.id))
                    {
                        invCyb.greyImage.gameObject.SetActive(true);
                        invCyb.goldBorder.gameObject.SetActive(false);
                        invCyb.button.enabled = false;
                    }
                }
            }
            if (CanvasHandler.instance.zionObject.activeInHierarchy)
            {

                GameManager.instance.playerCyborgList.Clear();
                foreach (Transform t in CanvasHandler.instance.zionCardsScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                cyborgList.result.Sort((x, y) => y.cyborg.stressPoint.CompareTo(x.cyborg.stressPoint));
                for (int i = 0; i < cyborgList.result.Count; i++)
                {
                    if (NetworkingManager.instance.gm.gameMode)
                    {
                        if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (cyborgList.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }
                    if (cyborgList.result[i].cyborg.status == "Idle")
                    {
                        if (CanvasHandler.instance.tavernObject.activeInHierarchy)
                        {
                            if (cyborgList.result[i].cyborg.stressPoint > 0)
                            {
                                GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.zionCardsScrollViewContent.transform);
                                GameManager.instance.playerCyborgList.Add(inventCyborg);
                                CyborgPFPSetter(inventCyborg, i);
                                inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                            }
                        }
                        else if (CanvasHandler.instance.hospitalObject.activeInHierarchy)
                        {
                            for (int j = 0; j < cyborgList.result[i].cyborg.quirks.Count; j++)
                            {
                                if (cyborgList.result[i].cyborg.quirks[j].attributes.Count > 0)
                                {
                                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.zionCardsScrollViewContent.transform);
                                    GameManager.instance.playerCyborgList.Add(inventCyborg);
                                    CyborgPFPSetter(inventCyborg, i);
                                    inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                                    break;
                                }
                            }


                        }
                    }
                }
            }
            if (CanvasHandler.instance.cyborgSelectedChild.activeInHierarchy)
            {

                if (levelUp)
                {
                    for (int i = 0; i < cyborgList.result.Count; i++)
                    {
                        if (NetworkingManager.instance.gm.gameMode)
                        {
                            if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                            {
                                continue;
                            }
                        }
                        else
                        {
                            if (cyborgList.result[i].mode == "tournament")
                            {
                                continue;
                            }
                        }
                        if (GameManager.instance.inventorySelectedCyborg.id == cyborgList.result[i].cyborg.id)
                        {
                            GameManager.instance.inventorySelectedCyborg = cyborgList.result[i].cyborg;
                        }
                    }

                    CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().ShowSelectedCyborg();
                    CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().OnClickLevelUp();
                }

            }

        }

    }

    public IEnumerator RankUp(string id)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        Debug.Log(baseURL + $"/auth/rankup?cyborgID={id}");
        UnityWebRequest uwr = new UnityWebRequest(baseURL + $"/auth/rankup?cyborgID={id}", "POST");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log("User Details");
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Rank Up Response|" + uwr.downloadHandler.text);
            RankUpResponse rr = JsonUtility.FromJson<RankUpResponse>(uwr.downloadHandler.text);
            if (rr.success)
            {
                //timer on and overlay with speedup

                StartCoroutine(GetServerTime());
                StartCoroutine(GetUserDetails());
                StartCoroutine(GetUsersNFTs(true));

            }
            else
            {
                if (rr.message == "Token balance insufficient")
                {
                    CanvasHandler.instance.inventoryPopUpCanvas.SetActive(true);
                    CanvasHandler.instance.NotEnoughtPointsPopUp.SetActive(true);
                    //open negative rank up popup
                }
            }



        }
    }

    public IEnumerator ClaimRankUp(string id, bool speedUp = false)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        Debug.Log(baseURL + $"/auth/rankup?cyborgID={id}");
        UnityWebRequest uwr = new UnityWebRequest(baseURL + $"/auth/rankup/claim", "POST");

        RankUpClaim rc = new RankUpClaim();
        rc.cyborgID = id;
        rc.speedup = speedUp;
        string jsonData = JsonUtility.ToJson(rc);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Rank Up Claim|" + uwr.downloadHandler.text);
            RankUpResponse rr = JsonUtility.FromJson<RankUpResponse>(uwr.downloadHandler.text);
            if (rr.success)
            {
                if (speedUp)
                {
                    CanvasHandler.instance.rankUpSpeedUp.gameObject.SetActive(false);
                    CanvasHandler.instance.inventoryPopUpCanvas.gameObject.SetActive(false);
                    CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().ShowSelectedCyborg();
                }
                //timer on and overlay with speedup
                StartCoroutine(GetUserDetails());
                StartCoroutine(GetUsersNFTs(true));
            }
            else
            {
                if (rr.message == "Token balance insufficient")
                {
                    CanvasHandler.instance.inventoryPopUpCanvas.SetActive(true);
                    CanvasHandler.instance.NotEnoughtPointsPopUp.SetActive(true);
                    //open negative rank up popup
                }
            }



        }
    }

    public void SetCyborgPfp(Image cyborgOriginPlanetImage, Image cyborgNeckImage, Image cyborgBodyImage, Image cyborgJawImage, Image cyborgVestImage, Image cyborgHelmetImage, Image cyborgEyeImage,
    string cyborgOriginPlanet, string cyborgGender, string cyborgVest, string cyborgEye, string cyborgNeck, string cyborgSkin, string rank)
    {

        //Debug.Log("Setting Origin Planet: " + cyborgOriginPlanet);

        switch (cyborgOriginPlanet)
        {

            //Aviator Origin Planet
            case "Nova Prime":
                //Debug.Log("Nova Prime");
                cyborgOriginPlanetImage.sprite = cyborgOriginPlanetSpriteList[0];
                break;

            //Brawler Origin Planet
            case "Zephyr":
                //Debug.Log("Nova Prime");
                cyborgOriginPlanetImage.sprite = cyborgOriginPlanetSpriteList[1];
                break;

            //Marine Origin Planet
            case "Arcturia":
                //Debug.Log("Arcturia");
                cyborgOriginPlanetImage.sprite = cyborgOriginPlanetSpriteList[2];
                break;

            //Tactician Origin Planet
            case "Xandar":
                //Debug.Log("Xandar");
                cyborgOriginPlanetImage.sprite = cyborgOriginPlanetSpriteList[3];
                break;

            //Warrior   Origin Planet
            case "Helios":
                //Debug.Log("Helios");
                cyborgOriginPlanetImage.sprite = cyborgOriginPlanetSpriteList[4];
                break;
            default:
                //Debug.Log("Default");
                cyborgOriginPlanetImage.sprite = cyborgOriginPlanetSpriteList[0];
                break;
        }

        //Eyes
        switch (cyborgEye)
        {
            //Aviator Eye
            case "MechaLens":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[0];
                break;
            case "CyberLens":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[1];
                break;
            case "QuantumLens":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[2];
                break;
            case "CosmicLens":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[3];
                break;
            case "StellarLens":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[4];
                break;
            case "GalacticLens":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[5];
                break;


            //Brawler Eye
            case "MechaGaze":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[6];
                break;
            case "CyberGaze":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[7];
                break;
            case "QuantumGaze":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[8];
                break;
            case "CosmicGaze":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[9];
                break;
            case "StellarGaze":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[10];
                break;
            case "GalacticGaze":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[11];
                break;

            //Marine Eye
            case "MechaVision":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[12];
                break;
            case "CyberVision":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[13];
                break;
            case "QuantumVision":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[14];
                break;
            case "CosmicVision":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[15];
                break;
            case "StellarVision":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[16];
                break;
            case "GalacticVision":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[17];
                break;

            //Tactician Eye
            case "MechaOptics":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[18];
                break;
            case "CyberOptics":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[19];
                break;
            case "QuantumOptics":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[20];
                break;
            case "CosmicOptics":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[21];
                break;
            case "StellarOptics":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[22];
                break;
            case "GalacticOptics":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[23];
                break;

            //Warriors Eye
            case "MechaSight":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[24];
                break;
            case "CyberSight":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[25];
                break;
            case "QuantumSight":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[26];
                break;
            case "CosmicSight":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[27];
                break;
            case "StellarSight":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[28];
                break;
            case "GalacticSight":
                cyborgEyeImage.sprite = cyborgEyeSpriteList[29];
                break;

            default:
                cyborgEyeImage.sprite = cyborgEyeSpriteList[0];
                break;
        }




        if (cyborgGender == "Female")
        {


            //cyborgBodyImage.sprite = cyborgBodySpriteList[0];
            //cyborgJawImage.sprite = cyborgJawSpriteList[0];
            //Female Body
            switch (cyborgSkin)
            {
                case "PaleIvory":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[0];
                    break;
                case "Porcelain":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[1];
                    break;
                case "Beige":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[2];
                    break;
                case "Almond":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[3];
                    break;
                case "Espresso":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[4];
                    break;
                case "Chocolate":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[5];
                    break;
                default:
                    cyborgBodyImage.sprite = cyborgBodySpriteList[0];
                    break;
            }
            //}
            //Female Neck
            switch (cyborgNeck)
            {
                //Aviator Neck
                case "LunarForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[0];
                    break;
                case "SolarForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[1];
                    break;
                case "IonForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[2];
                    break;
                case "NutrinoForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[3];
                    break;
                case "StellarForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[4];
                    break;
                case "GalacticForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[5];
                    break;

                //Brwaler Neck
                case "LunarCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[6];
                    break;
                case "SolarCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[7];
                    break;
                case "IonCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[8];
                    break;
                case "NutrinoCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[9];
                    break;
                case "StellarCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[10];
                    break;
                case "GalacticCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[11];
                    break;

                //Marine Neck
                case "LunarCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[12];
                    break;
                case "SolarCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[13];
                    break;
                case "IonCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[14];
                    break;
                case "NutrinoCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[15];
                    break;
                case "StellarCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[16];
                    break;
                case "GalacticCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[17];
                    break;

                //Tactician Neck
                case "LunarTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[18];
                    break;
                case "SolarTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[19];
                    break;
                case "IonTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[20];
                    break;
                case "NutrinoTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[21];
                    break;
                case "StellarTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[22];
                    break;
                case "GalacticTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[23];
                    break;

                //Warrior Neck
                case "LunarCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[24];
                    break;
                case "SolarCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[25];
                    break;
                case "IonCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[26];
                    break;
                case "NutrinoCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[27];
                    break;
                case "StellarCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[28];
                    break;
                case "GalacticCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[29];
                    break;
                default:
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[0];
                    break;
            }
            // Female Vest + Helmet
            switch (cyborgVest)
            {
                //Aviator Female Vest + Helmet
                case "AviatorCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[0];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[0];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[1];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[1];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[2];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[2];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[3];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[3];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[4];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[4];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[5];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[5];
                    }
                    break;
                case "AviatorSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[1];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[1];
                    break;
                case "AviatorMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[2];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[2];
                    break;
                case "AviatorLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[3];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[3];
                    break;
                case "AviatorBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[4];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[4];
                    break;
                case "AviatorGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[5];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[5];
                    break;

                //Brawler Female Vest + Helmet
                case "BrawlerCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[6];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[6];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[7];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[7];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[8];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[382];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[9];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[9];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[10];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[10];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[11];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[11];
                    }
                    break;
                case "BrawlerSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[7];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[7];
                    break;
                case "BrawlerMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[8];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[8];
                    break;
                case "BrawlerLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[9];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[9];
                    break;
                case "BrawlerBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[10];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[10];
                    break;
                case "BrawlerGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[11];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[11];
                    break;

                //Marine Female Vest + Helmet
                case "MarineCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[12];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[12];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[13];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[13];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[14];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[14];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[15];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[15];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[16];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[16];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[17];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[17];
                    }
                    break;
                case "MarineSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[13];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[13];
                    break;
                case "MarineMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[14];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[14];
                    break;
                case "MarineLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[15];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[15];
                    break;
                case "MarineBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[16];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[16];
                    break;
                case "MarineGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[17];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[17];
                    break;

                //Tactician Female Vest + Helmet
                case "TacticianCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[18];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[18];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[19];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[19];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[20];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[20];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[21];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[21];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[22];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[22];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[23];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[23];
                    }
                    break;
                case "TacticianSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[19];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[19];
                    break;
                case "TacticianMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[20];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[20];
                    break;
                case "TacticianLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[21];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[21];
                    break;
                case "TacticianBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[22];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[22];
                    break;
                case "TacticianGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[23];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[23];
                    break;

                //Warrior Female Vest + Helmet
                case "WarriorCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[24];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[24];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[25];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[25];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[26];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[26];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[27];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[27];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[28];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[28];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[29];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[29];
                    }
                    break;
                case "WarriorSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[25];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[25];
                    break;
                case "WarriorMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[26];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[26];
                    break;
                case "WarriorLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[27];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[27];
                    break;
                case "WarriorBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[28];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[28];
                    break;
                case "WarriorGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[29];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[29];
                    break;

                default:
                    cyborgVestImage.sprite = cyborgVestSpriteList[0];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[0];
                    break;
            }


        }
        if (cyborgGender == "Male")
        {
            //cyborgBodyImage.sprite = cyborgBodySpriteList[1];
            //cyborgJawImage.sprite = cyborgJawSpriteList[1];

            // Male Body
            switch (cyborgSkin)
            {
                case "PaleIvory":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[6];
                    break;

                case "Porcelain":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[7];
                    break;

                case "Beige":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[8];
                    break;

                case "Almond":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[9];
                    break;

                case "Espresso":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[10];
                    break;

                case "Chocolate":
                    cyborgBodyImage.sprite = cyborgBodySpriteList[11];
                    break;

                default:
                    cyborgBodyImage.sprite = cyborgBodySpriteList[6];
                    break;

            }
            //Male Neck
            switch (cyborgNeck)
            {
                //Aviator Neck
                case "LunarForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[30];
                    break;
                case "SolarForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[31];
                    break;
                case "IonForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[32];
                    break;
                case "NutrinoForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[33];
                    break;
                case "StellarForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[34];
                    break;
                case "GalacticForged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[35];
                    break;
                //Brwaler Neck
                case "LunarCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[36];
                    break;
                case "SolarCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[37];
                    break;
                case "IonCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[38];
                    break;
                case "NutrinoCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[39];
                    break;
                case "StellarCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[40];
                    break;
                case "GalacticCore":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[41];
                    break;

                //Marine Neck
                case "LunarCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[42];
                    break;
                case "SolarCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[43];
                    break;
                case "IonCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[44];
                    break;
                case "NutrinoCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[45];
                    break;
                case "StellarCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[46];
                    break;
                case "GalacticCharged":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[47];
                    break;

                //Tactician Neck
                case "LunarTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[48];
                    break;
                case "SolarTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[49];
                    break;
                case "IonTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[50];
                    break;
                case "NutrinoTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[51];
                    break;
                case "StellarTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[52];
                    break;
                case "GalacticTech":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[53];
                    break;

                //Warrior Neck
                case "LunarCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[54];
                    break;
                case "SolarCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[55];
                    break;
                case "IonCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[56];
                    break;
                case "NutrinoCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[57];
                    break;
                case "StellarCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[58];
                    break;
                case "GalacticCrest":
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[59];
                    break;
                default:
                    cyborgNeckImage.sprite = cyborgNeckSpriteList[0];
                    break;
            }

            // Male Vest + Helmet
            switch (cyborgVest)
            {
                //Aviator Male Vest + Helmet
                case "AviatorCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[30];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[30];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[31];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[31];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[32];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[32];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[33];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[33];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[34];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[34];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[35];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[35];
                    }
                    break;
                case "AviatorSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[31];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[31];
                    break;
                case "AviatorMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[32];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[32];
                    break;
                case "AviatorLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[33];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[33];
                    break;
                case "AviatorBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[34];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[34];
                    break;
                case "AviatorGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[35];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[35];
                    break;

                //Brawler Male Vest + Helmet
                case "BrawlerCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[36];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[36];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[37];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[37];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[38];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[38];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[39];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[39];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[40];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[40];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[41];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[41];
                    }

                    break;
                case "BrawlerSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[37];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[37];
                    break;
                case "BrawlerMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[38];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[38];
                    break;
                case "BrawlerLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[39];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[39];
                    break;
                case "BrawlerBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[40];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[40];
                    break;
                case "BrawlerGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[41];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[41];
                    break;

                //Marine Male Vest + Helmet
                case "MarineCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[42];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[42];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[43];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[43];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[44];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[44];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[45];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[45];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[46];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[46];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[47];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[47];
                    }
                    break;
                case "MarineSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[43];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[43];
                    break;
                case "MarineMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[44];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[44];
                    break;
                case "MarineLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[45];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[45];
                    break;
                case "MarineBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[46];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[46];
                    break;
                case "MarineGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[47];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[47];
                    break;

                //Tactician Male Vest + Helmet
                case "TacticianCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[48];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[48];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[49];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[49];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[50];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[50];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[51];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[51];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[52];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[52];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[53];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[53];
                    }
                    break;
                case "TacticianSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[49];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[49];
                    break;
                case "TacticianMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[50];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[50];
                    break;
                case "TacticianLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[51];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[51];
                    break;
                case "TacticianBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[52];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[52];
                    break;
                case "TacticianGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[53];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[53];
                    break;

                //Warrior Male Vest + Helmet
                case "WarriorCorporal":
                    if (rank == "mint" || rank == "Corporal")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[54];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[54];
                    }
                    else if (rank == "Sergeant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[55];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[55];
                    }
                    else if (rank == "Major")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[56];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[56];
                    }
                    else if (rank == "Lieutenant")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[57];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[57];
                    }
                    else if (rank == "Brigadier")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[58];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[58];
                    }
                    else if (rank == "General")
                    {
                        cyborgVestImage.sprite = cyborgVestSpriteList[59];
                        cyborgHelmetImage.sprite = cyborgHelmetSpriteList[59];
                    }
                    break;
                case "WarriorSergeant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[55];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[55];
                    break;
                case "WarriorMajor":
                    cyborgVestImage.sprite = cyborgVestSpriteList[56];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[56];
                    break;
                case "WarriorLieutenant":
                    cyborgVestImage.sprite = cyborgVestSpriteList[57];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[57];
                    break;
                case "WarriorBrigadier":
                    cyborgVestImage.sprite = cyborgVestSpriteList[58];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[58];
                    break;
                case "WarriorGeneral":
                    cyborgVestImage.sprite = cyborgVestSpriteList[59];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[59];
                    break;

                default:
                    cyborgVestImage.sprite = cyborgVestSpriteList[30];
                    cyborgHelmetImage.sprite = cyborgHelmetSpriteList[30];
                    break;
            }

        }
    }

    #endregion

    #region LootBox API's
    public IEnumerator GetLootBoxes()
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/auth/assets/lootboxes", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            foreach (Transform t in CanvasHandler.instance.lootBoxScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            Debug.Log("Get LootBoxes|" + uwr.downloadHandler.text);
            lbr = JsonUtility.FromJson<LootBoxResponse>(uwr.downloadHandler.text);
            float maxTime = lootBoxTime;
            if (lbr.result.Count > 0)
            {
                for (int i = 0; i < lbr.result.Count; i++)
                {
                    if (gm.gameMode)
                    {
                        if (lbr.result[i].mode == null || lbr.result[i].mode != "tournament")
                        {
                            continue;
                        }
                    }
                    else
                    {
                        if (lbr.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }
                    if (lbr.result[i].state == "close")
                    {
                        GameObject lootBox = Instantiate(CanvasHandler.instance.cratePrefab, CanvasHandler.instance.lootBoxScrollViewContent.transform);
                        lootboxCard lbc = lootBox.GetComponent<lootboxCard>();
                        lbc.id = lbr.result[i].id;
                        lbc.openBtn.SetActive(true);
                        lbc.timerBG.SetActive(false);
                        lbc.claimBtn.SetActive(false);
                        lbc.speedUpBtn.SetActive(false);
                    }
                    if (lbr.result[i].state == "open")
                    {
                        GameObject lootBox = Instantiate(CanvasHandler.instance.cratePrefab, CanvasHandler.instance.lootBoxScrollViewContent.transform);
                        lootboxCard lbc = lootBox.GetComponent<lootboxCard>();
                        lbc.id = lbr.result[i].id;
                        lbc.timerBG.SetActive(true);
                        lbc.speedUpBtn.SetActive(true);
                        lbc.openBtn.SetActive(false);
                        long timePassed = st.timestamp / 1000 - lbr.result[i].openTimeStamp / 1000;
                        Debug.Log(st.timestamp + " " + lbr.result[i].openTimeStamp);
                        float time = maxTime - (float)timePassed;
                        lbc.timerBG.GetComponentInChildren<CountdownTimer>().timerStart = time;
                        if (time <= 0f)
                        {
                            lbc.timerBG.SetActive(false);
                            lbc.claimBtn.SetActive(true);
                            lbc.speedUpBtn.SetActive(false);
                        }
                    }
                }



            }

        }
    }

    public IEnumerator OpenLootBox(string id, GameObject obj)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + $"/auth/openLootbox?lootboxID={id}", "POST");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Open LootBox|" + uwr.downloadHandler.text);
            StartCoroutine(GetServerTime());
        }
    }

    public IEnumerator ClaimLootBox(string id, bool speedup = false)
    {
        //CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + $"/auth/claimLootbox", "POST");
        LootBoxClaim lbc = new LootBoxClaim();
        lbc.lootboxID = id;
        lbc.speedup = speedup;
        string jsonData = JsonUtility.ToJson(lbc);
        Debug.Log(jsonData);


        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);

        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();

        CanvasHandler.instance.lootboxSpeedUpPopup.SetActive(false);
        CanvasHandler.instance.inventoryPopUpCanvas.SetActive(false);
        //CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {

            LootBoxClaimResponse lbcr = JsonUtility.FromJson<LootBoxClaimResponse>(uwr.downloadHandler.text);
            if (lbcr.success)
            {
                StartCoroutine(GetUserDetails());
                Debug.Log("Claim LootBox|" + uwr.downloadHandler.text);
                CanvasHandler.instance.inventoryPopUpCanvas.SetActive(true);
                CanvasHandler.instance.succesfulPopUp.SetActive(true);
                if (gm.gameMode)
                {
                    string result = $"{(lbcr.data.lootbox.SGF2 / Math.Pow(10, 9)).ToString()} SGF2 " +
                   "& ";
                    foreach (Xp xp in lbcr.data.lootbox.xp)
                    {
                        string xpResp = $"Cyborg {xp.cyborgID} gained {xp.xp} xp ";
                        result = result + xpResp;
                    }
                    CanvasHandler.instance.succesfulPopUp.GetComponent<PopupCanvas>().descriptionText.text = result;
                }
                else
                {
                    string result = $"{(lbcr.data.lootbox.SGF1 / Math.Pow(10, 9)).ToString()} SGF1 " +
                   "& ";
                    foreach (Xp xp in lbcr.data.lootbox.xp)
                    {
                        string xpResp = $"Cyborg {xp.cyborgID} gained {xp.xp} xp ";
                        result = result + xpResp;
                    }
                    CanvasHandler.instance.succesfulPopUp.GetComponent<PopupCanvas>().descriptionText.text = result;
                }

            }
            else
            {

                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = lbcr.message;
            }

            StartCoroutine(GetServerTime());
            StartCoroutine(GetUserDetails());

        }
    }

    public IEnumerator GetServerTime(bool notGetLootBoxes = false)
    {
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/user", "GET");
        //string jsonData = JsonUtility.ToJson();
        //Debug.Log(jsonData);



        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("Server Time|" + uwr.downloadHandler.text);
            st = JsonUtility.FromJson<ServerTime>(uwr.downloadHandler.text);
            if (CanvasHandler.instance.cyborgSelectedChild.activeInHierarchy)
            {
                CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().ShowSelectedCyborg();
                CanvasHandler.instance.cyborgSelectedChild.GetComponent<CyborgInventoryCard>().OnClickLevelUp();
            }
            if (!notGetLootBoxes)
            {
                StartCoroutine(GetLootBoxes());
            }

        }
    }

    #endregion

    #region Wager API's
    public IEnumerator GetWagerCyborgs(int amount, bool reRoll, int gameID = 0)
    {
        Debug.Log("GameID1|" + gameID);
        isWager = true;
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURLStaging + "/auth/getWagerCyborgs", "POST");
        if(gameID!= 0)
        {
            gwcb.gameID = gameID;
            Debug.Log("GameID2|" + gameID);
        }
        gwcb.amount = amount;
        gwcb.reRoll = reRoll;
        string jsonData = JsonUtility.ToJson(gwcb);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
       

        yield return uwr.SendWebRequest();

        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("GetWagerCyborgs|" + uwr.downloadHandler.text);
            GetWagerCyborgsResponse gwcr2 = new GetWagerCyborgsResponse();
            if (!reRoll)
            {
                gwcr = JsonUtility.FromJson<GetWagerCyborgsResponse>(uwr.downloadHandler.text);
            }
            else
            {
                gwcr2 = JsonUtility.FromJson<GetWagerCyborgsResponse>(uwr.downloadHandler.text);
                gwcr.result = gwcr2.result;
            }
            CanvasHandler.instance.mineCanvas.SetActive(true);
            CanvasHandler.instance.mineLootActiveHitsoryGroup.SetActive(false);
            CanvasHandler.instance.mineTeamSelectionGroup.SetActive(true);
            CanvasHandler.instance.celestialTrialsCanvas.SetActive(false);
            TeamSelectionHandler tsh = CanvasHandler.instance.mineCanvas.GetComponentInParent<TeamSelectionHandler>();
            tsh.cyborgsOccupiedMine.SetActive(false);
            tsh.noCyborgsMine.SetActive(false);
            CanvasHandler.instance.noCyborgSelectedMine.SetActive(true);
            foreach (Transform t in CanvasHandler.instance.mineCyborgScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            GameManager.instance.playerCyborgList.Clear();
            if (!reRoll)
            {
                for (int i = 0; i < gwcr.result.Count; i++)
                {
                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.mineCyborgScrollViewContent.transform);
                    GameManager.instance.playerCyborgList.Add(inventCyborg);
                    SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                                inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                                inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                                inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                                inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                                gwcr.result[i].metadata.trait.bodyParts.originPlanet.name,
                                gwcr.result[i].metadata.trait.bodyParts.gender,
                                gwcr.result[i].metadata.trait.bodyParts.vest,
                                gwcr.result[i].metadata.trait.bodyParts.eye.name,
                                gwcr.result[i].metadata.trait.bodyParts.neck.name,
                                gwcr.result[i].metadata.trait.bodyParts.skin,
                                "Corporal");
                    InventoryCyborg ic = inventCyborg.GetComponent<InventoryCyborg>();
                    ic.cyborg = gwcr.result[i].metadata;
                    ic.cyborg.sequence = gwcr.result[i].sequence;
                }
            }
            else
            {
                for (int i = 0; i < gwcr2.result.Count; i++)
                {
                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.mineCyborgScrollViewContent.transform);
                    GameManager.instance.playerCyborgList.Add(inventCyborg);
                    SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                                inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                                inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                                inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                                inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                                gwcr2.result[i].metadata.trait.bodyParts.originPlanet.name,
                                gwcr2.result[i].metadata.trait.bodyParts.gender,
                                gwcr2.result[i].metadata.trait.bodyParts.vest,
                                gwcr2.result[i].metadata.trait.bodyParts.eye.name,
                                gwcr2.result[i].metadata.trait.bodyParts.neck.name,
                                gwcr2.result[i].metadata.trait.bodyParts.skin,
                                "Corporal");
                    InventoryCyborg ic = inventCyborg.GetComponent<InventoryCyborg>();
                    ic.cyborg = gwcr2.result[i].metadata;
                    ic.cyborg.sequence = gwcr2.result[i].sequence;
                }
            }
        }
        StartCoroutine(GetUserDetails());


    }

    public IEnumerator WagerWar(WagerWarBody wwb)
    {
        isWager = true;
        CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURLStaging + "/auth/wagerWar", "POST");
        string jsonData = JsonUtility.ToJson(wwb);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);
        Debug.Log("WagerWarJSON|" + jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        uwr.SetRequestHeader("Content-Type", "application/json");
        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);

        yield return uwr.SendWebRequest();

        CanvasHandler.instance.loadingCanvas.SetActive(false);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log("WagerWar|" + uwr.downloadHandler.text);
            wwr = JsonUtility.FromJson<WagerWarResponse>(uwr.downloadHandler.text);
            if(wwr.error == "get: We encountered an internal error. Please try again. (10001)")
            {
                CanvasHandler.instance.zionPopUpCanvas.SetActive(true);
                CanvasHandler.instance.failCasePopup.SetActive(true);
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().titleText.text = "Error";
                CanvasHandler.instance.failCasePopup.GetComponent<PopupCanvas>().descriptionText.text = "Something went wrong, Your bet amount has been refunded";
            }
            else
            {
                SceneManager.LoadScene(2);
            }
       
        }
    }
    #endregion

    #region Demo API's
    public IEnumerator UserFeedback(int rating)
    {
        //CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/user/feedback", "POST");
        FeedbackData fd = new FeedbackData();
        fd.feedback = rating;
        string jsonData = JsonUtility.ToJson(fd);
        Debug.Log(jsonData);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Content-Type", "application/json");

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        login.token = uwr.GetResponseHeader("Authorization");
        //CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log(uwr.downloadHandler.text);
            NetworkingManager.instance.isDemo = false;
            if (gm.gameMode)
            {
                SceneManager.LoadScene(1);
            }
            else
            {
                SceneManager.LoadScene(1);
            }

        }
    }


    public IEnumerator Activation(string code)
    {
        //CanvasHandler.instance.loadingCanvas.SetActive(true);
        UnityWebRequest uwr = new UnityWebRequest(baseURL + "/v2/user/activate", "POST");
        ActivationData ad = new ActivationData();
        ad.activationCode = code;
        string jsonData = JsonUtility.ToJson(ad);
        Debug.Log(jsonData);
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

        uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();

        uwr.SetRequestHeader("Content-Type", "application/json");

        uwr.SetRequestHeader("Authorization", "Bearer " + login.token);
        yield return uwr.SendWebRequest();
        login.token = uwr.GetResponseHeader("Authorization");
        //CanvasHandler.instance.loadingCanvas.SetActive(false);
        //Debug.Log(uwr.result);
        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error:" + uwr.error);
        }
        else
        {
            Debug.Log(uwr.downloadHandler.text);
            ActivationResponse ar = new ActivationResponse();
            ar = JsonUtility.FromJson<ActivationResponse>(uwr.downloadHandler.text);

            if (ar.success)
            {
                SceneManager.LoadScene(1);
                NetworkingManager.instance.isDemo = false;
            }
            else
            {
                ActivationAPIResponse aar = new ActivationAPIResponse();
                aar = JsonUtility.FromJson<ActivationAPIResponse>(uwr.downloadHandler.text);
                BattleHandler.instance.activationPopup.SetActive(false);
                BattleHandler.instance.failPopup.SetActive(true);
                BattleHandler.instance.failPopup.GetComponent<PopupCanvas>().descriptionText.text = aar.message;
            }
        }
    }

    #endregion

    #region Misc Front End Calculations
    public int LevelCalculator(int xp)
    {
        if (xp < 67)
        {
            return 1;
        }
        else if (xp >= 67 && xp < 201)
        {
            return 2;
        }
        else if (xp >= 201 && xp < 402)
        {
            return 3;
        }
        else if (xp >= 402 && xp < 670)
        {
            return 4;
        }
        else if (xp >= 670 && xp < 1005)
        {
            return 5;
        }
        else if (xp >= 1005 && xp < 1407)
        {
            return 6;
        }
        else if (xp >= 1407 && xp < 1876)
        {
            return 7;
        }
        else if (xp >= 1876 && xp < 2412)
        {
            return 8;
        }
        else if (xp >= 2412 && xp < 3015)
        {
            return 9;
        }
        else if (xp >= 3015)
        {
            return 10;
        }
        else
        {
            return 1;
        }
    }

    public int XPUpperLimit(int lvl)
    {
        switch (lvl)
        {
            case 1: return 67;

            case 2:
                return 201;

            case 3:
                return 402;

            case 4:
                return 670;

            case 5:
                return 1005;

            case 6:
                return 1407;

            case 7:
                return 1876;

            case 8:
                return 2412;

            case 9:
                return 3015;
            case 10:
                return 3015;
            default: return 1;
        }
    }

    public string GetQuirk(int type, int index1, int index2)
    {
        Debug.Log("Type |" + type + "index1|" + index1 + "Index2|" + index2);
        switch (type)
        {
            case 1:
                switch (index1)
                {
                    case 1:
                        switch (index2)
                        {
                            case 1: return "Increases Health by 12.5%";
                            case 2: return "Decreases Health by 12.5%";
                            case 3: return "Increases Health by 25%";
                            case 4: return "Decreases Health by 25%";
                            case 5: return "Increases Health by 50%";
                            case 6: return "Decreases Health by 50%";
                            default: return "Invalid index2";
                        }

                    case 2:
                        switch (index2)
                        {
                            case 1: return "Increases Attack by 14.5%";
                            case 2: return "Decreases Attack by 14.5%";
                            case 3: return "Increases Attack by 29%";
                            case 4: return "Decreases Attack by 29%";
                            case 5: return "Increases Attack by 58%";
                            case 6: return "Decreases Attack by 58%";
                            default: return "Invalid index2";
                        }
                    case 3:
                        switch (index2)
                        {
                            case 1: return "Increases Accuracy by 4.25%";
                            case 2: return "Decreases Accuracy by 4.25%";
                            case 3: return "Increases Accuracy by 8.5%";
                            case 4: return "Decreases Accuracy by 8.5%";
                            case 5: return "Increases Accuracy by 17%";
                            case 6: return "Decreases Accuracy by 17%";
                            default: return "Invalid index2";
                        }

                    case 4:
                        switch (index2)
                        {
                            case 1: return "Increases Critical Hit by 17% ";
                            case 2: return "Decreases Critical Hit by 17% ";
                            case 3: return "Increases Critical Hit by 34%";
                            case 4: return "Decreases Critical Hit by 34%";
                            case 5: return "Increases Critical Hit by 68%";
                            case 6: return "Decreases Critical Hit by 68%";
                            default: return "Invalid index2";
                        }

                    case 5:
                        switch (index2)
                        {
                            case 1: return "Increases Speed by 18.5%";
                            case 2: return "Decreases Speed by 18.5%";
                            case 3: return "Increases Speed by 37%";
                            case 4: return "Decreases Speed by 37%";
                            case 5: return "Increases Speed by 74%";
                            case 6: return "Decreases Speed by 74%";
                            default: return "Invalid index2";
                        }

                    case 6:
                        switch (index2)
                        {
                            case 1: return "Increases Luck by 15%";
                            case 2: return "Decreases Luck by 15%";
                            case 3: return "Increases Luck by 30%";
                            case 4: return "Decreases Luck by 30%";
                            case 5: return "Increases Luck by 60%";
                            case 6: return "Decreases Luck by 60%";
                            default: return "Invalid index2";
                        }

                    case 7:
                        switch (index2)
                        {
                            case 1: return "Increases Persistence by 19.5%";
                            case 2: return "Decreases Persistence by 19.5%";
                            case 3: return "Increases Persistence by 39%";
                            case 4: return "Decreases Persistence by 39%";
                            case 5: return "Increases Persistence by 78%";
                            case 6: return "Decreases Persistence by 78% ";
                            default: return "Invalid index2";
                        }
                    default: return "invalid index1 case 1";
                }

            case 2:
                switch (index1)
                {
                    case 1:
                        switch (index2)
                        {
                            case 1: return "Deals 2x Damage to the opponent with least health";
                            case 2: return "Deals 2x Damage to the opponent with max health";
                            case 3: return "Deals 2x damage shared across cyborgs in the back row";
                            case 4: return "Deals 2x hit damage shared across cyborgs in the front row";
                            case 5: return "2x Damage to a random opponent";
                            default: return "Invalid index2";
                        }

                    case 2:
                        switch (index2)
                        {
                            case 1: return "Skips the turn of the opponent with the minimum attack and deals 1x Damage to them";
                            case 2: return "Skips the turn of the opponent with the maximum attack and deals 1 Damage to them";
                            case 3: return "Skips the turn of all the opponents in the back row and deals 1x Damage shared across them";
                            case 4: return "Skips the turn of all the opponents in the front row and deals 1x Damage shared across them";
                            case 5: return "Skips the turn of a random opponent and deals 1x Damage to them";
                            default: return "Invalid index2";
                        }

                    case 3:
                        switch (index2)
                        {
                            case 1: return "Increases the stress of the opponent with the minimum stress by 15 and deals 1x Damage to them";
                            case 2: return "Increases the stress of the opponent with the maximum stress by 15 and deals 1x Damage to them";
                            case 3: return "Increases the stress of the all the opponents in the back row by 15 and deals 1x Damage shared across them";
                            case 4: return "Increases the stress of the all the opponents in the front row by 15 and deals 1x Damage shared across them";
                            case 5: return "Increases the stress of a random opponent and deals 1x Damage to them";
                            default: return "Invalid index2";
                        }

                    case 4:
                        switch (index2)
                        {
                            case 1: return "Restore health of the teammate with minimum health by 25% of own max health";
                            case 2: return "Restore health of the teammate with the maximum health by 25% of own max health";
                            case 3: return "Restore health by 25% of own max health shared across the cyborgs in the back row";
                            case 4: return "Restore health by 25% of own max health shared across the cyborgs in the front row";
                            case 5: return "Restore health of a random teammate";
                            default: return "Invalid index2";
                        }

                    case 5:
                        switch (index2)
                        {
                            case 1: return "3x Damage to the opponent with the least health";
                            case 2: return "3x Damagee to the opponent with the maximum health";
                            case 3: return "3x Damage shared across the cyborgs in the back row";
                            case 4: return "3x Damage shared across the cyborgs in the front row";
                            case 5: return "3x Damage to a random opponent";
                            default: return "Invalid index2";
                        }
                    default: return "invalid index1 case 2";
                }

            case 3:
                switch (index1)
                {
                    case 1:
                        switch (index2)
                        {
                            case 1: return "Increases zion timer by 5%";
                            case 2: return "Decreases zion timer by 5%";
                            case 3: return "Increases zion timer by 10%";
                            case 4: return "Decreases zion timer by 10%";
                            case 5: return "Increases zion timer by 20%";
                            case 6: return "Decreases zion timer by 20%";
                            default: return "Invalid index2";
                        }

                    case 2:
                        switch (index2)
                        {
                            case 1: return "Increases zion cost by 5%";
                            case 2: return "Decreases zion cost by 5%";
                            case 3: return "Increases zion cost by 10%";
                            case 4: return "Decreases zion cost by 10%";
                            case 5: return "Increases zion cost by 20%";
                            case 6: return "Decreases zion cost by 20%";
                            default: return "Invalid index2";
                        }

                    case 3:
                        switch (index2)
                        {
                            case 1: return "Increases XP gain by 5%";
                            case 2: return "Decreases XP gain by 5%";
                            case 3: return "Increases XP gain by 10%";
                            case 4: return "Decreases XP gain by 10%";
                            case 5: return "Increases XP gain by 20%";
                            case 6: return "Decreases XP gain by 20%";
                            default: return "Invalid index2";
                        }

                    case 4:
                        switch (index2)
                        {
                            case 1: return "Increases energy consumption by 5%";
                            case 2: return "Decreases energy consumption by 5%";
                            case 3: return "Increases energy consumption by 10%";
                            case 4: return "Decreases energy consumption by 10%";
                            case 5: return "Increases energy consumption by 20%";
                            case 6: return "Decreases energy consumption by 20%";
                            default: return "Invalid index2";
                        }

                    case 5:
                        switch (index2)
                        {
                            case 1: return "Increases stress taken by 5%";
                            case 2: return "Decreases stress taken by 5%";
                            case 3: return "Increases stress taken by 10%";
                            case 4: return "Decreases stress taken by 10%";
                            case 5: return "Increases stress taken by 20%";
                            case 6: return "Decreases stress taken by 20%";
                            default: return "Invalid index2";
                        }

                    case 6:
                        switch (index2)
                        {
                            case 1: return "Increases life points reduction by 5%";
                            case 2: return "Decreases life points reduction by 5%";
                            case 3: return "Increases life points reduction by 10%";
                            case 4: return "Decreases life points reduction by 10%";
                            case 5: return "Increases life points reduction by 20%";
                            case 6: return "Decreases life points reduction by 20%";
                            default: return "Invalid index2";
                        }
                    default: return "invalid index1 case 3";
                }

            case 4:
                switch (index1)
                {
                    case 1:
                        switch (index2)
                        {
                            case 1: return "Increases all stats by 5% Against Aviators";
                            case 2: return "Decreases all stats by 5% Against Aviators";
                            case 3: return "Increases all stats by 10% Against Aviators";
                            case 4: return "Decreases all stats by 10% Against Aviators";
                            case 5: return "Increases all stats by 20% Against Aviators";
                            case 6: return "Decreases all stats by 20% Against Aviators";
                            default: return "Invalid index2";
                        }

                    case 2:
                        switch (index2)
                        {
                            case 1: return "Increases all stats by 5% Against Brawlers";
                            case 2: return "Decreases all stats by 5% Against Brawlers";
                            case 3: return "Increases all stats by 10% Against Brawlers";
                            case 4: return "Decreases all stats by 10% Against Brawlers";
                            case 5: return "Increases all stats by 20% Against Brawlers";
                            case 6: return "Decreases all stats by 20% Against Brawlers";
                            default: return "Invalid index2";
                        }

                    case 3:
                        switch (index2)
                        {
                            case 1: return "Increases all stats by 5% Against Marines";
                            case 2: return "Decreases all stats by 5% Against Marines";
                            case 3: return "Increases all stats by 10% Against Marines";
                            case 4: return "Decreases all stats by 10% Against Marines";
                            case 5: return "Increases all stats by 20% Against Marines";
                            case 6: return "Decreases all stats by 20% Against Marines";
                            default: return "Invalid index2";
                        }

                    case 4:
                        switch (index2)
                        {
                            case 1: return "Increases all stats by 5% Against Tacticians";
                            case 2: return "Decreases all stats by 5% Against Tacticians";
                            case 3: return "Increases all stats by 10% Against Tacticians";
                            case 4: return "Decreases all stats by 10% Against Tacticians";
                            case 5: return "Increases all stats by 20% Against Tacticians";
                            case 6: return "Decreases all stats by 20% Against Tacticians";
                            default: return "Invalid index2";
                        }

                    case 5:
                        switch (index2)
                        {
                            case 1: return "Increases all stats by 5% Against Warriors";
                            case 2: return "Decreases all stats by 5% Against Warriors";
                            case 3: return "Increases all stats by 10% Against Warriors";
                            case 4: return "Decreases all stats by 10% Against Warriors";
                            case 5: return "Increases all stats by 20% Against Warriors";
                            case 6: return "Decreases all stats by 20% Against Warriors";
                            default: return "Invalid index2";
                        }
                    default: return "invalid index1 case 4";
                }

            default: return "Type invalid";



        }
    }

    public Color32 GetColorOfNeck(string neck)
    {
        if (neck.Contains("Forged"))
        {
            return new Color32(38, 253, 221, 255);
        }
        else if (neck.Contains("Charged"))
        {
            return Color.yellow;
        }
        else if (neck.Contains("Core"))
        {
            return new Color32(253, 116, 2, 255);
        }
        else if (neck.Contains("Tech"))
        {
            return Color.white;
        }
        else if (neck.Contains("Crest"))
        {
            return Color.green;
        }
        else
        {
            return Color.white;
        }

    }

    public Color32 GetColorOfEye(string eye)
    {
        if (eye.Contains("Lens"))
        {
            return new Color32(38, 253, 221, 255);
        }
        else if (eye.Contains("Vision"))
        {
            return Color.yellow;
        }
        else if (eye.Contains("Gaze"))
        {
            return new Color32(253, 116, 2, 255);
        }
        else if (eye.Contains("Optic"))
        {
            return Color.white;
        }
        else if (eye.Contains("Sight"))
        {
            return Color.green;
        }
        else
        {
            return Color.white;
        }

    }

    public Color32 GetColorOfHelmetVest(string helmetVest)
    {
        if (helmetVest.Contains("Aviator"))
        {
            return new Color32(38, 253, 221, 255);
        }
        else if (helmetVest.Contains("Marine"))
        {
            return Color.yellow;
        }
        else if (helmetVest.Contains("Brawler"))
        {
            return new Color32(253, 116, 2, 255);
        }
        else if (helmetVest.Contains("Tactician"))
        {
            return Color.white;
        }
        else if (helmetVest.Contains("Warrior"))
        {
            return Color.green;
        }
        else
        {
            return Color.white;
        }

    }

    public Color32 GetColorOfPlanet(string planet)
    {
        if (planet == "Nova Prime")
        {
            return new Color32(38, 253, 221, 255);
        }
        else if (planet == "Arcturia")
        {
            return Color.yellow;
        }
        else if (planet == "Zephyr")
        {
            return new Color32(253, 116, 2, 255);
        }
        else if (planet == "Xandar")
        {
            return Color.white;
        }
        else if (planet == "Helios")
        {
            return Color.green;
        }
        else
        {
            return Color.white;
        }
    }

    public string GetInitialOfNeck(string neck)
    {
        if (neck.Contains("Forged"))
        {
            return "<color=yellow>(A)</color>";
        }
        else if (neck.Contains("Charged"))
        {
            return "<color=yellow>(M)</color>";
        }
        else if (neck.Contains("Core"))
        {
            return "<color=yellow>(B)</color>";
        }
        else if (neck.Contains("Tech"))
        {
            return "<color=yellow>(T)</color>";
        }
        else if (neck.Contains("Crest"))
        {
            return "<color=yellow>(W)</color>";
        }
        else
        {
            return "<color=yellow>(A)</color>";
        }

    }

    public string GetInitialOfEye(string eye)
    {
        if (eye.Contains("Lens"))
        {
            return "<color=yellow>(A)</color>";
        }
        else if (eye.Contains("Vision"))
        {
            return "<color=yellow>(M)</color>";
        }
        else if (eye.Contains("Gaze"))
        {
            return "<color=yellow>(B)</color>";
        }
        else if (eye.Contains("Optic"))
        {
            return "<color=yellow>(T)</color>";
        }
        else if (eye.Contains("Sight"))
        {
            return "<color=yellow>(W)</color>";
        }
        else
        {
            return "<color=yellow>(A)</color>";
        }

    }

    public string GetInitialOfHelmetVest(string helmetVest)
    {
        if (helmetVest.Contains("Aviator"))
        {
            return "<color=yellow>(A)</color>";
        }
        else if (helmetVest.Contains("Marine"))
        {
            return "<color=yellow>(M)</color>";
        }
        else if (helmetVest.Contains("Brawler"))
        {
            return "<color=yellow>(B)</color>";
        }
        else if (helmetVest.Contains("Tactician"))
        {
            return "<color=yellow>(T)</color>";
        }
        else if (helmetVest.Contains("Warrior"))
        {
            return "<color=yellow>(W)</color>";
        }
        else
        {
            return "<color=yellow>(A)</color>";
        }

    }

    public string GetInitialOfPlanet(string planet)
    {
        if (planet == "Nova Prime")
        {
            return "<color=yellow>(A)</color>";
        }
        else if (planet == "Arcturia")
        {
            return "<color=yellow>(M)</color>";
        }
        else if (planet == "Zephyr")
        {
            return "<color=yellow>(B)</color>";
        }
        else if (planet == "Xandar")
        {
            return "<color=yellow>(T)</color>";
        }
        else if (planet == "Helios")
        {
            return "<color=yellow>(W)</color>";
        }
        else
        {
            return "<color=yellow>(A)</color>";
        }
    }
    #endregion

    #region Demo Functions

    public void DemoClaimCyborg(GameObject demoManager)
    {
        if (demoClaimVar < 3)
        {
            if (demoClaimVar == 0)
            {
                demoManager.GetComponent<DemoManager>().popup4.SetActive(false);
            }

            CanvasHandler.instance.SuccessPopUpCyborgDrop.SetActive(true);
            CanvasHandler.instance.PopUpCyborgDrop.SetActive(false);
            TraitN trait = dmlr.result.participant.mine[demoClaimVar].trait;
            SetCyborgPfp(CanvasHandler.instance.cyborgOriginPlanetImage,
                                 CanvasHandler.instance.cyborgNeckImage,
                                 CanvasHandler.instance.cyborgBodyImage,
                                 CanvasHandler.instance.cyborgJawImage,
                                 CanvasHandler.instance.cyborgVestImage,
                                 CanvasHandler.instance.cyborgHelmetImage,
                                 CanvasHandler.instance.cyborgEyeImage,
                                 trait.bodyParts.originPlanet.name,
                                 trait.bodyParts.gender,
                                 trait.bodyParts.vest,
                                 trait.bodyParts.eye.name,
                                 trait.bodyParts.neck.name,
                                 trait.bodyParts.skin,
                                 "mint");
            demoClaimVar++;
            if (demoClaimVar == 1)
            {
                demoManager.GetComponent<DemoManager>().popup5.SetActive(true);
            }
            else
            {
                demoManager.GetComponent<DemoManager>().popup5.SetActive(false);
            }
        }
        if (demoClaimVar == 3)
        {
            demoManager.GetComponent<DemoManager>().popup6.SetActive(true);
        }



    }

    public void SpawnTeamSelectionCyborgs(GameObject demoManager)
    {
        for (int i = 0; i < dmlr.result.participant.mine.Count; i++)
        {
            GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, demoManager.GetComponent<DemoManager>().mineTeamSelectionScrollView.transform);
            GameManager.instance.demoCyborgList.Add(inventCyborg);
            TraitN trait = dmlr.result.participant.mine[i].trait;
            SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                        inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                        inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                        inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                        inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                        inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                        inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                        trait.bodyParts.originPlanet.name,
                        trait.bodyParts.gender,
                        trait.bodyParts.vest,
                        trait.bodyParts.eye.name,
                        trait.bodyParts.neck.name,
                        trait.bodyParts.skin,
                        "mint");

            inventCyborg.GetComponent<InventoryCyborg>().demoParticipant = dmlr.result.participant.mine[i];

            Debug.Log(trait.bodyParts.originPlanet.name + " originPlanet" +
                        trait.bodyParts.gender + " gender" +
                        trait.bodyParts.vest + " vest" +
                        trait.bodyParts.eye.name + " eye" +
                        trait.bodyParts.neck.name + " neck" +
                        trait.bodyParts.skin + " skin");

        }
    }

    public void SetLootWinTrue()
    {
        isLootWin = true;
    }

    #endregion

    #region Rank GateKeeping

    public MineData mineRankFilter(MineData mineData)
    {
        int rankChosenT = rankChosen;
        MineData temp = new MineData();
        List<Datum> tempdata = new List<Datum>();
        if (rankChosenT == 1)
        {

            foreach (Datum data in mineData.data)
            {
                foreach (MineCyborgN mineCyborgs in data.mineCyborgs)
                {
                    if (mineCyborgs.rank == "Corporal")
                    {
                        //Debug.Log("Here");
                        tempdata.Add(data);
                        break;
                    }
                }
            }
        }
        if (rankChosenT == 2)
        {

            foreach (Datum data in mineData.data)
            {
                foreach (MineCyborgN mineCyborgs in data.mineCyborgs)
                {
                    if (mineCyborgs.rank == "Sergeant")
                    {
                        tempdata.Add(data);
                        break;
                    }
                }
            }
        }
        if (rankChosenT == 3)
        {

            foreach (Datum data in mineData.data)
            {
                foreach (MineCyborgN mineCyborgs in data.mineCyborgs)
                {
                    if (mineCyborgs.rank == "Major")
                    {
                        tempdata.Add(data);
                        break;
                    }
                }
            }
        }
        if (rankChosenT == 4)
        {

            foreach (Datum data in mineData.data)
            {
                foreach (MineCyborgN mineCyborgs in data.mineCyborgs)
                {
                    if (mineCyborgs.rank == "Lieutenant")
                    {
                        tempdata.Add(data);
                        break;
                    }
                }
            }
        }
        if (rankChosenT == 5)
        {

            foreach (Datum data in mineData.data)
            {
                foreach (MineCyborgN mineCyborgs in data.mineCyborgs)
                {
                    if (mineCyborgs.rank == "Brigadier")
                    {
                        tempdata.Add(data);
                        break;
                    }
                }
            }
        }
        if (rankChosenT == 6)
        {

            foreach (Datum data in mineData.data)
            {
                foreach (MineCyborgN mineCyborgs in data.mineCyborgs)
                {
                    if (mineCyborgs.rank == "General")
                    {
                        tempdata.Add(data);
                        break;
                    }
                }
            }
        }
        temp.data = tempdata;
        temp.timestamp = mineData.timestamp;
        return temp;
    }

    public CyborgData nftRankFilter(CyborgData cyborgData)
    {
        CyborgData temp = new CyborgData();
        List<Result> tempResult = new List<Result>();
        int rankChosenT = rankChosen;

        foreach (Result result in cyborgData.result)
        {
            if (rankChosenT == 1)
            {
                if (result.cyborg.rank == "Corporal")
                {
                    tempResult.Add(result);
                }
            }
            else if (rankChosenT == 2)
            {
                if (result.cyborg.rank == "Sergeant")
                {
                    tempResult.Add(result);
                }
            }
            else if (rankChosenT == 3)
            {
                if (result.cyborg.rank == "Major")
                {
                    tempResult.Add(result);
                }
            }
            else if (rankChosenT == 4)
            {
                if (result.cyborg.rank == "Lieutenant")
                {
                    tempResult.Add(result);
                }
            }
            else if (rankChosenT == 5)
            {
                if (result.cyborg.rank == "Brigadier")
                {
                    tempResult.Add(result);
                }
            }
            else if (rankChosenT == 6)
            {
                if (result.cyborg.rank == "General")
                {
                    tempResult.Add(result);
                }
            }
        }

        temp.result = tempResult;
        return temp;
    }

    #endregion

    public void CustomAnalytics(string eventName)
    {
#if ENABLE_CLOUD_SERVICES_ANALYTICS
        Analytics.CustomEvent(eventName);
#endif
    }

    public void CyborgFilter(string filter)
    {
        if (filter == "health")
        {
            cyborgList.result.Sort((x, y) => y.cyborg.health.CompareTo(x.cyborg.health));
            gwcr.result.Sort((x, y) => y.metadata.health.CompareTo(x.metadata.health));
        }
        else if (filter == "stress")
        {
            cyborgList.result.Sort((x, y) => y.cyborg.stressPoint.CompareTo(x.cyborg.stressPoint));
            gwcr.result.Sort((x, y) => y.metadata.stressPoint.CompareTo(x.metadata.stressPoint));
        }
        else if (filter == "level")
        {
            cyborgList.result.Sort((x, y) => y.cyborg.xp.CompareTo(x.cyborg.xp));
            gwcr.result.Sort((x, y) => y.metadata.xp.CompareTo(x.metadata.xp));
        }
        else if (filter == "attack")
        {
            cyborgList.result.Sort((x, y) => y.cyborg.attack.CompareTo(x.cyborg.attack));
            gwcr.result.Sort((x, y) => y.metadata.attack.CompareTo(x.metadata.attack));
        }
        else if (filter == "purity")
        {
            //Debug.Log("Purity Click");


            List<Cyborg> cybListTemp = new List<Cyborg>();
            for (int i = 0; i < cyborgList.result.Count - 1; i++)
            {

                int greatest = i;
                for (int j = i + 1; j < cyborgList.result.Count; j++)
                {
                    int purity = 0;
                    int purity1 = 0;
                    Cyborg cyb = cyborgList.result[i].cyborg;
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

                    Cyborg cyb1 = cyborgList.result[j].cyborg;
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb1.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb1.trait.bodyParts.vest))
                    {
                        purity1 += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb1.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb1.trait.bodyParts.vest))
                    {
                        purity1 += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb1.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb1.trait.bodyParts.vest))
                    {
                        purity1 += 1;
                    }
                    purity1 += 2;
                    if (purity1 > purity)
                    {
                        //Debug.Log($"Purity1 {purity1} > Purity {purity}");
                        greatest = j;
                        Result temporary = cyborgList.result[i];
                        cyborgList.result[i] = cyborgList.result[greatest];
                        cyborgList.result[greatest] = temporary;
                    }
                }


            }
            for (int i = 0; i < gwcr.result.Count - 1; i++)
            {

                int greatest = i;
                for (int j = i + 1; j < gwcr.result.Count; j++)
                {
                    int purity = 0;
                    int purity1 = 0;
                    Cyborg cyb = gwcr.result[i].metadata;
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

                    Cyborg cyb1 = gwcr.result[j].metadata;
                    if (NetworkingManager.instance.GetInitialOfNeck(cyb1.trait.bodyParts.neck.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb1.trait.bodyParts.vest))
                    {
                        purity1 += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfPlanet(cyb1.trait.bodyParts.originPlanet.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb1.trait.bodyParts.vest))
                    {
                        purity1 += 1;
                    }
                    if (NetworkingManager.instance.GetInitialOfEye(cyb1.trait.bodyParts.eye.name) == NetworkingManager.instance.GetInitialOfHelmetVest(cyb1.trait.bodyParts.vest))
                    {
                        purity1 += 1;
                    }
                    purity1 += 2;
                    if (purity1 > purity)
                    {
                        //Debug.Log($"Purity1 {purity1} > Purity {purity}");
                        greatest = j;
                        ResultWagerCyborgs temporary = gwcr.result[i];
                        gwcr.result[i] = gwcr.result[greatest];
                        gwcr.result[greatest] = temporary;
                    }
                }


            }
        }

        if (CanvasHandler.instance.inventoryCyborgScrollViewContent.activeInHierarchy)
        {
            foreach (Transform t in CanvasHandler.instance.inventoryCyborgScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            for (int i = 0; i < cyborgList.result.Count; i++)
            {
                if (NetworkingManager.instance.gm.gameMode)
                {
                    if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                    {
                        continue;
                    }
                }
                else
                {
                    if (cyborgList.result[i].mode == "tournament")
                    {
                        continue;
                    }
                }
                GameObject inventCyborg = Instantiate(CanvasHandler.instance.inventoryCyborgPrefab, CanvasHandler.instance.inventoryCyborgScrollViewContent.transform);
                if (cyborgList.result[i].cyborg.status != "Idle")
                {
                    inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                }

                SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                            inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                            inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                            inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                            inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                            inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                            inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                            cyborgList.result[i].cyborg.trait.bodyParts.originPlanet.name,
                            cyborgList.result[i].cyborg.trait.bodyParts.gender,
                            cyborgList.result[i].cyborg.trait.bodyParts.vest,
                            cyborgList.result[i].cyborg.trait.bodyParts.eye.name,
                            cyborgList.result[i].cyborg.trait.bodyParts.neck.name,
                            cyborgList.result[i].cyborg.trait.bodyParts.skin,
                            cyborgList.result[i].cyborg.rank);


                inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
            }
        }
        if (CanvasHandler.instance.cemeteryScrollViewContent.activeInHierarchy)
        {
            foreach (Transform t in CanvasHandler.instance.cemeteryScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }


            for (int i = 0; i < cyborgList.result.Count; i++)
            {

                if (NetworkingManager.instance.gm.gameMode)
                {
                    if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                    {
                        continue;
                    }
                }
                else
                {
                    if (cyborgList.result[i].mode == "tournament")
                    {
                        continue;
                    }
                }
                if (cyborgList.result[i].cyborg.status.ToLower() == "dead")
                {
                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.inventoryCyborgPrefab, CanvasHandler.instance.cemeteryScrollViewContent.transform);
                    inventCyborg.GetComponent<InventoryCyborg>().deadBorder.gameObject.SetActive(true);
                    SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                           inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                           inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                           inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                           inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                           inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                           inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                           cyborgList.result[i].cyborg.trait.bodyParts.originPlanet.name,
                           cyborgList.result[i].cyborg.trait.bodyParts.gender,
                           cyborgList.result[i].cyborg.trait.bodyParts.vest,
                           cyborgList.result[i].cyborg.trait.bodyParts.eye.name,
                           cyborgList.result[i].cyborg.trait.bodyParts.neck.name,
                           cyborgList.result[i].cyborg.trait.bodyParts.skin,
                           cyborgList.result[i].cyborg.rank);


                    inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;

                }

            }
        }
        if (CanvasHandler.instance.mineTeamSelectionGroup.activeInHierarchy)
        {
            if (!isWager)
            {
                GameManager.instance.playerCyborgList.Clear();
                foreach (Transform t in CanvasHandler.instance.mineCyborgScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                cyborgList = nftRankFilter(cyborgList);

                TeamSelectionHandler tsh = CanvasHandler.instance.mineCyborgScrollViewContent.GetComponentInParent<TeamSelectionHandler>();
                int tournamentCount = 0;

                for (int i = 0; i < cyborgList.result.Count; i++)
                {
                    if (gm.gameMode)
                    {
                        if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                        {
                            continue;
                        }
                        else
                        {
                            tournamentCount++;
                        }
                    }
                    else
                    {
                        if (cyborgList.result[i].mode == "tournament")
                        {
                            continue;
                        }
                    }

                    if (cyborgList.result[i].cyborg.status == "Idle" && cyborgList.result[i].cyborg.stressPoint < 100 && cyborgList.result[i].cyborg.energy >= 4)
                    {
                        GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.mineCyborgScrollViewContent.transform);
                        GameManager.instance.playerCyborgList.Add(inventCyborg);
                        if (GameManager.instance.selectedCyborg != null)
                        {
                            if (GameManager.instance.selectedCyborg.id == cyborgList.result[i].cyborg.id)
                            {
                                inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                            }

                        }
                        SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                                    inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                                    inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                                    inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                                    inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                                    inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                                    inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                                    cyborgList.result[i].cyborg.trait.bodyParts.originPlanet.name,
                                    cyborgList.result[i].cyborg.trait.bodyParts.gender,
                                    cyborgList.result[i].cyborg.trait.bodyParts.vest,
                                    cyborgList.result[i].cyborg.trait.bodyParts.eye.name,
                                    cyborgList.result[i].cyborg.trait.bodyParts.neck.name,
                                    cyborgList.result[i].cyborg.trait.bodyParts.skin,
                                    cyborgList.result[i].cyborg.rank);

                        inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                    }

                }
                if (GameManager.instance.playerCyborgList.Count > 0)
                {
                    foreach (GameObject obj in GameManager.instance.playerCyborgList)
                    {
                        InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                        if (tsh.cybList.Contains(invCyb.cyborg.id))
                        {
                            invCyb.greyImage.gameObject.SetActive(true);
                            invCyb.goldBorder.gameObject.SetActive(false);
                            invCyb.button.enabled = false;
                        }


                    }
                }
            }
            else
            {
                GameManager.instance.playerCyborgList.Clear();
                foreach (Transform t in CanvasHandler.instance.mineCyborgScrollViewContent.transform)
                {
                    GameObject.Destroy(t.gameObject);
                }
                TeamSelectionHandler tsh = CanvasHandler.instance.mineCyborgScrollViewContent.GetComponentInParent<TeamSelectionHandler>();
                for (int i = 0; i < gwcr.result.Count; i++)
                {
                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.mineCyborgScrollViewContent.transform);
                    GameManager.instance.playerCyborgList.Add(inventCyborg);
                    if (GameManager.instance.selectedCyborg != null)
                    {
                        if (GameManager.instance.selectedCyborg.sequence == gwcr.result[i].metadata.sequence)
                        {
                            inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                        }

                    }
                    SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                                inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                                inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                                inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                                inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                                gwcr.result[i].metadata.trait.bodyParts.originPlanet.name,
                                gwcr.result[i].metadata.trait.bodyParts.gender,
                                gwcr.result[i].metadata.trait.bodyParts.vest,
                                gwcr.result[i].metadata.trait.bodyParts.eye.name,
                                gwcr.result[i].metadata.trait.bodyParts.neck.name,
                                gwcr.result[i].metadata.trait.bodyParts.skin,
                                gwcr.result[i].metadata.rank);

                    inventCyborg.GetComponent<InventoryCyborg>().cyborg = gwcr.result[i].metadata;


                }
                if (GameManager.instance.playerCyborgList.Count > 0)
                {
                    foreach (GameObject obj in GameManager.instance.playerCyborgList)
                    {
                        InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                        if (tsh.sequenceList.Contains(invCyb.cyborg.sequence))
                        {
                            invCyb.greyImage.gameObject.SetActive(true);
                            invCyb.goldBorder.gameObject.SetActive(false);
                            invCyb.button.enabled = false;
                        }


                    }
                }
            }

        }
        if (CanvasHandler.instance.lootTeamSelectionGroup.activeInHierarchy)
        {
            GameManager.instance.playerCyborgList.Clear();
            foreach (Transform t in CanvasHandler.instance.lootCyborgScrollViewContent.transform)
            {
                GameObject.Destroy(t.gameObject);
            }
            cyborgList = nftRankFilter(cyborgList);

            TeamSelectionHandler tsh = CanvasHandler.instance.lootCyborgScrollViewContent.GetComponentInParent<TeamSelectionHandler>();
            int tournamentCount = 0;
            for (int i = 0; i < cyborgList.result.Count; i++)
            {
                if (NetworkingManager.instance.gm.gameMode)
                {
                    if (cyborgList.result[i].mode == null || cyborgList.result[i].mode != "tournament")
                    {
                        continue;
                    }
                    else
                    {
                        tournamentCount++;
                    }
                }
                else
                {
                    if (cyborgList.result[i].mode == "tournament")
                    {
                        continue;
                    }
                }
                if (cyborgList.result[i].cyborg.status == "Idle" && cyborgList.result[i].cyborg.stressPoint < 100 && cyborgList.result[i].cyborg.energy >= 1)
                {
                    GameObject inventCyborg = Instantiate(CanvasHandler.instance.mineCyborgPrefab, CanvasHandler.instance.lootCyborgScrollViewContent.transform);
                    GameManager.instance.playerCyborgList.Add(inventCyborg);
                    if (GameManager.instance.selectedCyborg != null)
                    {
                        if (GameManager.instance.selectedCyborg.id == cyborgList.result[i].cyborg.id)
                        {
                            inventCyborg.GetComponent<InventoryCyborg>().goldBorder.gameObject.SetActive(true);
                        }

                    }
                    SetCyborgPfp(inventCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().neckImage,
                                inventCyborg.GetComponent<InventoryCyborg>().bodyImage,
                                inventCyborg.GetComponent<InventoryCyborg>().jawImage,
                                inventCyborg.GetComponent<InventoryCyborg>().vestImage,
                                inventCyborg.GetComponent<InventoryCyborg>().helmetImage,
                                inventCyborg.GetComponent<InventoryCyborg>().eyeImage,
                                cyborgList.result[i].cyborg.trait.bodyParts.originPlanet.name,
                                cyborgList.result[i].cyborg.trait.bodyParts.gender,
                                cyborgList.result[i].cyborg.trait.bodyParts.vest,
                                cyborgList.result[i].cyborg.trait.bodyParts.eye.name,
                                cyborgList.result[i].cyborg.trait.bodyParts.neck.name,
                                cyborgList.result[i].cyborg.trait.bodyParts.skin,
                                cyborgList.result[i].cyborg.rank);

                    inventCyborg.GetComponent<InventoryCyborg>().cyborg = cyborgList.result[i].cyborg;
                }
            }
            foreach (GameObject obj in GameManager.instance.playerCyborgList)
            {
                InventoryCyborg invCyb = obj.GetComponent<InventoryCyborg>();
                if (tsh.cybList.Contains(invCyb.cyborg.id))
                {
                    invCyb.greyImage.gameObject.SetActive(true);
                    invCyb.goldBorder.gameObject.SetActive(false);
                    invCyb.button.enabled = false;
                }
            }
        }
    }

    public void CyborgPFPSetter(GameObject instantiatedCyborg, int cyborgListIndex)
    {
        SetCyborgPfp(instantiatedCyborg.GetComponent<InventoryCyborg>().originPlanetImage,
                                           instantiatedCyborg.GetComponent<InventoryCyborg>().neckImage,
                                           instantiatedCyborg.GetComponent<InventoryCyborg>().bodyImage,
                                           instantiatedCyborg.GetComponent<InventoryCyborg>().jawImage,
                                           instantiatedCyborg.GetComponent<InventoryCyborg>().vestImage,
                                           instantiatedCyborg.GetComponent<InventoryCyborg>().helmetImage,
                                           instantiatedCyborg.GetComponent<InventoryCyborg>().eyeImage,
                                           cyborgList.result[cyborgListIndex].cyborg.trait.bodyParts.originPlanet.name,
                                           cyborgList.result[cyborgListIndex].cyborg.trait.bodyParts.gender,
                                           cyborgList.result[cyborgListIndex].cyborg.trait.bodyParts.vest,
                                           cyborgList.result[cyborgListIndex].cyborg.trait.bodyParts.eye.name,
                                           cyborgList.result[cyborgListIndex].cyborg.trait.bodyParts.neck.name,
                                           cyborgList.result[cyborgListIndex].cyborg.trait.bodyParts.skin,
                                           cyborgList.result[cyborgListIndex].cyborg.rank);
    }
}





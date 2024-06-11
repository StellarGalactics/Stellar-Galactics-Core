using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MineStartedCard : MonoBehaviour
{
    [SerializeField] public TMP_Text mainText, mineStatusText, mineNumberText, reward1Text, reward2Text, reward3Text, reward4Text;
    [SerializeField] GameObject cyborgCardPrefab;
    [SerializeField] public Button lootBtn, viewBtn, claimBtn, replayBtn;
    [SerializeField] public Datum mineData;
    [SerializeField] public GameObject timer;

    public List<Image> originPlanetImage;
    public List<Image> bodyImage;
    public List<Image> jawImage;
    public List<Image> eyeImage;
    public List<Image> neckImage;
    public List<Image> helmetImage;
    public List<Image> vestImage;

    public List<TMP_Text> energyText, stressText, lvlText, nameText;

    public string mineOrLoot = "";

    private void Start()
    {
        //Debug.Log(mineData.result.ToLower());
        if (mineData.result.ToLower() == "minewon")
        {
            if(mineData.minePlayerId == NetworkingManager.instance.playerId)
            {
                //mainText.text = "Mine Won";
                mainText.text = "Won";
                mainText.color = Color.green;
            }
            else
            {
                mainText.text = "Lost";
                mainText.color = Color.red;
            }
            //Debug.Log("in minewon");
           
        }
        else if (mineData.result.ToLower() == "lootwon")
        {
            if (mineData.lootPlayerId == NetworkingManager.instance.playerId)
            {
                mainText.text = "Won";
                mainText.color = Color.green;
                //mainText.text = "Loot Won";
            }
            else
            {
                mainText.text = "Lost";
                mainText.color = Color.red;
            }
        }
        else if(mineData.result.ToLower() == "inprogrss")
        {
            mainText.text = "In Progress";
            mainText.color = Color.white;
        }
        else if (mineData.result.ToLower() == "purewin")
        {
            mainText.text = "Pure Win";
            mainText.color = Color.green;
        }
        else
        {
            //Debug.Log("else");
            mainText.text = mineData.result;
        }

        mineStatusText.text = mineData.state;
        mineNumberText.text = mineData.gameID.ToString();
        if(mineData.state == "Mine")
        {
            if(NetworkingManager.instance.gm.gameMode)
            {
                reward1Text.text = "Reward: $SGF2 100";
            }
            else
            {
                reward1Text.text = "Reward: $SGF1 100";
            }
            
            //reward2Text.text = 100.ToString();
        }

        if (mineOrLoot == "loot")
        {
            if (mineData.lootClaimed && claimBtn.IsActive())
            {
                claimBtn.GetComponentInChildren<TMP_Text>().text = "Claimed";
                claimBtn.interactable = false;
            }
        }
        if(mineOrLoot == "mine")
        {
            if (mineData.mineClaimed && claimBtn.IsActive())
            {
                claimBtn.GetComponentInChildren<TMP_Text>().text = "Claimed";
                claimBtn.interactable = false;
            }
        }
      
    }

    public void OnClickViewBtn()
    {
        NetworkingManager.instance.mineSimData = mineData;
        NetworkingManager.instance.mineOrLoot = "view";
        SceneManager.LoadScene(2);
    }

    public void OnClickLootBtn()
    {
        NetworkingManager.instance.mineToLootID = mineData.id;
        CanvasHandler.instance.OnClickLoot();
    }

    public void OnClickClaimBtn()
    {
        if(mineOrLoot == "mine")
        {
            StartCoroutine(NetworkingManager.instance.EndMine(mineData.id));
        }
        else if(mineOrLoot == "loot")
        {
            StartCoroutine(NetworkingManager.instance.EndLoot(mineData.id));
        }
       
    }

    public void OnClickReplay()
    {
        if(mineData.lootPlayerId == NetworkingManager.instance.playerId)
        {
            if (CanvasHandler.instance.mineLootActiveHitsoryGroup.activeInHierarchy)
            {
                NetworkingManager.instance.activeLootSkip = true;
            }
            else
            {
                NetworkingManager.instance.lootRepSkip = true;
            }
               
        }
        if(mineData.minePlayerId == NetworkingManager.instance.playerId)
        {
            if (CanvasHandler.instance.mineResources.activeInHierarchy)
            {
                NetworkingManager.instance.mineSkip = true;
            }
            else
            {
                NetworkingManager.instance.mineRepSkip = true;
            }
     
        }
        StartCoroutine(NetworkingManager.instance.GetGameInfo(mineData.id));
    }
}


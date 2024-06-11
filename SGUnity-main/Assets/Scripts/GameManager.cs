using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{

    public static GameManager instance;
    [SerializeField] public Cyborg selectedCyborg, inventorySelectedCyborg, zionSelectedCyborg;
    [SerializeField] public MineN selectedParticipant;
    [SerializeField] public List<GameObject> playerCyborgList = new List<GameObject>();
    [SerializeField] public List<GameObject> demoCyborgList = new List<GameObject>();
    //[SerializeField] public Image selectedCyborgImage;

    [SerializeField] public Image selectedCyborgOriginPlanetImage;
    [SerializeField] public Image selectedCyborgBodyImage;
    [SerializeField] public Image selectedCyborgJawImage;
    [SerializeField] public Image selectedCyborgEyeImage;
    [SerializeField] public Image selectedCyborgNeckImage;
    [SerializeField] public Image selectedCyborgHelmetImage;
    [SerializeField] public Image selectedCyborgVestImage;

    private void Awake()
    {
        if(instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }
}

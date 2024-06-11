using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public static SoundManager instance;
    [SerializeField] public AudioSource clickVfx, mineVfx, hitVfx, dodgVfx, missVfx, stressIncVfx, stressDecVfx, aviatorCrit, tacticianCrit, marineCrit, warriorCrit, brawlerCrit, brawlerCritLinger, faint, fleeSfx;


    private void Awake()
    {
        if(instance == null)
        {
            DontDestroyOnLoad(this);
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
       
    }     
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DemoBattleManager : MonoBehaviour
{

    public DemoMineLossResp dmlr;
    // Start is called before the first frame update
    void Start()
    {
        dmlr = NetworkingManager.instance.dmlr;

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SelectQuirkHospitalPrefab : MonoBehaviour
{
    public int type, attribute;
    public TMP_Text quirkEffect, quirkEffectSelected;

    private void Start()
    {
        gameObject.GetComponent<Toggle>().group = GetComponentInParent<ToggleGroup>();
    }
    public void OnClickQuirk()
    {
        ZionHandler zh = CanvasHandler.instance.zionObject.GetComponent<ZionHandler>();
        zh.typeIndex = type;
        zh.attributeIndex = attribute;
    }
}

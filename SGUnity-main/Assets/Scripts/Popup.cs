using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Popup : MonoBehaviour
{
    private TextMeshPro popupText;
    private float disappearingTimer;
    private Color textColor;
    private void Awake()
    {
        popupText = transform.GetComponent<TextMeshPro>();
    }
    public static Popup Create(Vector3 position, string text, bool isStress, bool isHeal = false)
    {
        Transform popupTransform = Instantiate(BattleHandler.instance.popupPrefab, position, Quaternion.identity);

        Popup popup = popupTransform.GetComponent<Popup>();
        Quaternion rotation = Quaternion.Euler(90f, 180f, 0f);
        popup.transform.rotation = rotation;
        popup.Setup(text, isStress);
       
        return popup;
    }
    // Update is called once per frame
    void Update()
    {
        float moveZSpeed = 1f;
        transform.position += new Vector3(0, 0, -moveZSpeed) * Time.deltaTime;

        disappearingTimer -= Time.deltaTime;
        if(disappearingTimer < 0)
        {
            float disappearSpeed = 3f;
            textColor.a -= disappearSpeed * Time.deltaTime;
            popupText.color = textColor;
            if(textColor.a < 0)
            {
                Destroy(gameObject);
            }
        }

    }

    public void Setup(string text, bool isStress, bool isHeal = false)
    {
        popupText.SetText(text);
        if (isStress)
        {
            Color color = new Color32(0, 230, 255, 255);
            popupText.color = color;
        }
        else if(isHeal)
        {
            Color color = Color.green;
            popupText.color = color;
        }
        else
        {
            Color color = new Color32(239, 74, 80, 255);
            textColor = color;
        }
       
        disappearingTimer = 1f;
    }
}

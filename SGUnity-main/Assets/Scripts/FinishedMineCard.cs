using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FinishedMineCard : MonoBehaviour
{
    [SerializeField] public TMP_Text mainText, mineStatusText, mineNumberText, reward1Text, reward2Text, reward3Text, reward4Text;
    [SerializeField] GameObject cyborgCardPrefab;
    [SerializeField] public Button viewBtn;
    [SerializeField] public TMP_Text battleNumberText;
}

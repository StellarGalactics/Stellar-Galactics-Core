using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class HistoryPage : MonoBehaviour
{
    public int pageNumber;
    void Start()
    {
        GetComponent<Button>().onClick.AddListener(TaskOnClick);
    }

    public void SetText()
    {
        GetComponentInChildren<TMP_Text>().text = pageNumber.ToString();
    }
    private void TaskOnClick()
    {
        if (CanvasHandler.instance.mineHistoryGroup.activeInHierarchy)
        {
            NetworkingManager.instance.mineHistoryPageCount = pageNumber;
        }
        else
        {
            NetworkingManager.instance.lootHistoryPageCount = pageNumber;
        }
        CanvasHandler.instance.OnClickPageNumberHistory();
        CanvasHandler.instance.SetPageNumberHistory();
    }
}

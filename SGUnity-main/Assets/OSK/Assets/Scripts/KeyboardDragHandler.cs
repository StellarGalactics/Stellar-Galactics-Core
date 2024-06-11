using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class KeyboardDragHandler : MonoBehaviour, IDragHandler
{



    #region IDragHandler implementation

    public void OnDrag(PointerEventData eventData)
    {
        Vector2 offset = new Vector2(-500f, -250f);
        transform.localPosition = eventData.position + offset;
    }

    #endregion





}
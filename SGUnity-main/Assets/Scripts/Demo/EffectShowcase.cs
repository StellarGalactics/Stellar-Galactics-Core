using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectShowcase : MonoBehaviour
{
    public bool dodge, flee;
    // Start is called before the first frame update
    void OnEnable ()
    {
        if (dodge)
        {
            StartCoroutine(DodgeAnim());
        }
        if (flee)
        {
            StartCoroutine(FleeAnim());
        }
    }

    IEnumerator DodgeAnim()
    {
        GameObject obj = this.gameObject;
        Vector3 initTransform = obj.transform.position;
        Debug.Log(initTransform.x);
        // Debug.Log("Dodge Anim");
        obj.transform.DOMoveX(initTransform.x + 0.25f, 0.25f);
        yield return new WaitForSeconds(0.25f);
        obj.transform.DOMoveX(initTransform.x - 0.25f, 0.25f);
        yield return new WaitForSeconds(0.25f);
        obj.transform.DOMove(initTransform, 0.25f);

    }

    public IEnumerator FleeAnim()
    {
        gameObject.GetComponent<BattleCard>().cardFlee.SetActive(true);
        yield return new WaitForSeconds(1.5f);
        gameObject.SetActive(false);
    }
}

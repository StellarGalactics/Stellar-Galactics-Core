using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarouselScroll : MonoBehaviour
{
    public List<GameObject> showcaseSetup2 = new List<GameObject>();
    public List<GameObject> abilityScreens, showcaseSetup;
    public GameObject nextButton;
    public int counter = 0;

    private void Start()
    {
        if(showcaseSetup2.Count > 0)
        {
            showcaseSetup[0].SetActive(true);
        }
        
    }
    public void RightButtonPressed()
    {
        abilityScreens[counter].SetActive(false);
        if (showcaseSetup.Count > 0)
        {
            showcaseSetup[counter].SetActive(false);
        }

        counter++;
        if (counter == abilityScreens.Count)
        {
            counter = 0;
        }
        else if (counter == abilityScreens.Count - 1)
        {
            nextButton.SetActive(true);
        }
        if (showcaseSetup.Count > 0)
        {
            showcaseSetup[counter].SetActive(true);
        }
        abilityScreens[counter].SetActive(true);

    }

    public void LeftButtonPressed()
    {
        abilityScreens[counter].SetActive(false);
        if (showcaseSetup.Count > 0)
        {
            showcaseSetup[counter].SetActive(false);
        }
        if (counter == abilityScreens.Count - 2)
        {
            nextButton.SetActive(true);
        }
        counter--;
        if (counter < 0)
        {
            counter = abilityScreens.Count - 1;
        }
        abilityScreens[counter].SetActive(true);
        if (showcaseSetup.Count > 0)
        {
            showcaseSetup[counter].SetActive(true);
        }
    }
}

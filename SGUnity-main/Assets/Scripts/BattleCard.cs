using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class BattleCard : MonoBehaviour
{
    [SerializeField] public GameObject attackingHighlight, hitProjectile, critHit, stressDecrease, stressIncrease, cardFaint, cardFlee;
    [SerializeField] public GameObject aviatorCrit, brawlerCrit, tacticianCrit, warriorCrit, marinesCrit, healingSeal, persistenceVFX, stressedOutVFX;
    [SerializeField] public List<GameObject> missVFX;
    [SerializeField] public double currentHealth, maxHealth, stress;
    [SerializeField] public Slider healthSlider, stressSlider;
    [SerializeField] public Material ghostMat, regularMat;
    [SerializeField] TMP_Text healthText, stressText;



    public Image originPlanetImage;
    public Image bodyImage;
    public Image jawImage;
    public Image eyeImage;
    public Image neckImage;
    public Image helmetImage;
    public Image vestImage;

    private void Start()
    {
        stressSlider.maxValue = 100f;
        stressSlider.value = (float)stress;
        stressText.text = stress.ToString("F0");
        currentHealth = (float)maxHealth;
        healthSlider.value = (float)currentHealth;
        healthText.text = currentHealth.ToString("F0");
    }

    public void ModifyStress(double _stress)
    {
        stress += _stress;
        stressSlider.value = (float)stress;
        stressText.text = stress.ToString("F0");
    }

    public void SetHealth(double health)
    {
        currentHealth = (float)health;
        healthSlider.value = (float)currentHealth;
        healthText.text = currentHealth.ToString("F0");
        if (health == 1)
        {
            persistenceVFX.SetActive(true);
        }
        else
        {
            persistenceVFX.SetActive(false);
        }
    }

    public void SetMaxHealth(double health)
    {
        maxHealth = (float)health;
        healthSlider.maxValue = (float)maxHealth;
    }



}

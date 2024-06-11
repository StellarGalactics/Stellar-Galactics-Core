using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class CyborgStats : MonoBehaviour
{
    [SerializeField] public TMP_Text cybName, stress, lifePoints, energy, rank, level, attack, speed, health, persistence, luck, accuracy, crit, gender, neck, eyes, helmet, vest, origin;
    public GameObject gameStats, bodyParts;
    public Image originPlanetImage;
    public Image bodyImage;
    public Image jawImage;
    public Image eyeImage;
    public Image neckImage;
    public Image helmetImage;
    public Image vestImage;
    public Image aviatorBg, tacticianBg, warriorBg, marinesBg, brawlersBg;
}

using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ButtonHandler : MonoBehaviour
{
    public Button button;
    public TextMeshProUGUI buttonText;  // Make sure this is linked in the Unity Editor
    public int row;
    public int col;

    //public TicTacToeContractInteraction gameController;
    public GameStateController gameController;


    void Start() {
        //gameController = FindObjectOfType<TicTacToeContractInteraction>();  // Find the game controller in the scene
        gameController = FindAnyObjectByType<GameStateController>(); // Find the game controller in the scene
        button.onClick.AddListener(() => gameController.MakeMove(row, col));
    }

    public void UpdateTile(string symbol) {
        buttonText.text = symbol;
    }
}

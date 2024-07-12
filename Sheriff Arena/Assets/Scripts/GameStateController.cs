using System;
using System.Threading.Tasks;
using Thirdweb;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

// This script is used for Controlling the State of the Game. All 

public class GameStateController : MonoBehaviour
{

    private ThirdwebSDK sdk;

    public ProfileInfoScript profileInfoScript;

    private string player1Address;
    private string player2Address;
    private string connectedWallet;
    public Button leaveGameButton;

    public TextMeshProUGUI player1AddressUI;
    public TextMeshProUGUI player2AddressUI;

    public TextMeshProUGUI errorAlertMessage; 

    // Game ended objects
    public GameObject winLoseText;
    public GameObject claimRewardButton;
    public Button claimRewardButton_button;
    public GameObject gameEndedContainer;
    public GameObject gameActiveContainer;
    public GameObject tokenToBeRewardedText;
    public GameObject goldCoinImage;
    


    // Gamestate
    private bool isGameOver = false;
    public GameBoard gameBoard;
    private string currentPlayerToMoveAddress;
    public TextMeshProUGUI currentPlayerToMoveUI;
    public string currentSymbol = "X";

    // Smart Contract Interaction
    public TicTacToeContractInteraction ticTacToeContractInteraction;

    
    void Start() {
        InitializeSDKAndContract();
        this.gameBoard = new GameBoard(); 
    }

    private async void InitializeSDKAndContract() {

        sdk = ThirdwebManager.Instance.SDK;
        connectedWallet = await sdk.Wallet.GetAddress();

        await UpdatePlayerAddresses();  

        //await SetupEventListeners();
    }

    public async Task UpdatePlayerAddresses() {
        player1Address = await ticTacToeContractInteraction.FetchPlayerAddress("player1");
        player2Address = await ticTacToeContractInteraction.FetchPlayerAddress("player2");
        // Debug.Log($"Player 1 Address: {player1Address}, Player 2 Address: {player2Address}");

        player1AddressUI.text = player1Address == "0x0000000000000000000000000000000000000000" ? "Waiting for player..." : player1Address;
        player2AddressUI.text = player2Address == "0x0000000000000000000000000000000000000000" ? "Waiting for player..." : player2Address;

        if ((player1Address != "0x0000000000000000000000000000000000000000") && (player2Address != "0x0000000000000000000000000000000000000000")) {
            await UpdateCurrentPlayer();
        }
    }

    public async Task UpdateCurrentPlayer() {
        currentPlayerToMoveAddress = await ticTacToeContractInteraction.FetchCurrentPlayerToMove();
        currentPlayerToMoveUI.text = connectedWallet == currentPlayerToMoveAddress ? "Your turn to move!" : "Waiting for opponent to make a move...";
    }

    public void MakeMove(int row, int col) {

        if (isGameOver) {
            Debug.Log("Can't move, game is over!");
            return;
        }

        if (!(currentPlayerToMoveAddress == connectedWallet)){
            Debug.Log("Not your move!");
            errorAlertMessage.text = "It's not your move!";
            return;
        }

        if (gameBoard.IsValidMove(row, col)) {
            errorAlertMessage.text = "";
            currentPlayerToMoveUI.text = "Making move..";
            ticTacToeContractInteraction.MakeMove(row, col);

            // TODO: Her setter vi at player 2 har alle cellene, er dette viktig er spørsmålet. 
            gameBoard.SetTile(row, col, 2);
        } 
        
        else {
            errorAlertMessage.text = "Tile already occupied!";
            Debug.Log("Tile already occupied!");
        }
    }

    public string GetCurrentPlayerToMove() {
        return currentPlayerToMoveAddress;
    }

    public void GameOver(string winningPlayerAddress) {
        Debug.Log("Entering GameOver function");

        isGameOver = true;
        gameActiveContainer.SetActive(false);
        gameEndedContainer.SetActive(true);

        Debug.Log("Checking conditions");

        // Check if Claim Reward button should be shown
        if (connectedWallet == winningPlayerAddress) {

            winLoseText.GetComponent<TextMeshProUGUI>().text = "You won! Claim your rewards now.";
            tokenToBeRewardedText.SetActive(true);
            claimRewardButton.SetActive(true);
            goldCoinImage.SetActive(true);
        } else {
            winLoseText.GetComponent<TextMeshProUGUI>().text = "You lost!";
            tokenToBeRewardedText.SetActive(false);
            claimRewardButton.SetActive(false);
            goldCoinImage.SetActive(false);
        }

        Debug.Log("Exiting GameOver function");

    }

    public async void ClaimReward() {

        Debug.Log("Claiming reward...");

        claimRewardButton_button.GetComponentInChildren<TextMeshProUGUI>().text = "Claiming..";

        ulong amountToClaim = await ticTacToeContractInteraction.GetReward(connectedWallet);
        
        Debug.Log("Reward to be claimed: " + amountToClaim);

        Debug.Log("Converting to string");

        string amountToClaimString = amountToClaim.ToString();

        Debug.Log("Success converting amount to claim to String");

        await ERC20TokenContractInteractionScript.ClaimERC20Token(amountToClaimString);

        winLoseText.GetComponent<TextMeshProUGUI>().text = "Reward claimed!";
        tokenToBeRewardedText.SetActive(false);

        profileInfoScript.UpdateTokenBalanceText();

        // Remove the claim reward button, after reward has been claimed
        claimRewardButton.SetActive(false);
    }

    public void LeaveGame() {
        Debug.Log("Trying to leave game...");
        if (connectedWallet == player1Address || connectedWallet == player2Address) {
            leaveGameButton.GetComponentInChildren<TextMeshProUGUI>().text = "Leaving game..";
            ticTacToeContractInteraction.LeaveGame();
            // Handle Player Left is called when playerLeft event is emitted from the smart contract
        }
    }

    public void HandlePlayerLeft(string playerAddress) {
        Debug.Log("Handle player left...");

        if (playerAddress == connectedWallet) {
            SceneManager.LoadScene("MainMenuScene");
        } else {
            if (connectedWallet == player1Address || connectedWallet == player2Address) {
                Debug.Log("The other player left the game!");
            }
        }
    }

    public void BackToMenu() {
        SceneManager.LoadScene("MainMenuScene");
    }
}

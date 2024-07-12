using System;
using System.Collections;
using UnityEngine;
using Thirdweb;
using UnityEngine.SceneManagement;
using WalletConnectSharp.Sign.Models.Engine.Events;
using UnityEngine.UI;
using System.Threading.Tasks;

public class TicTacToeContractInteraction : MonoBehaviour {
    
    private ThirdwebSDK sdk;

    // NEW - 
    private string contractAddress = "0xec6B022B54707bDff5E546ABeB7EbFE65A6B6c5c";
    string contractABI = "[{\"type\":\"event\",\"name\":\"GameJoined\",\"inputs\":[{\"type\":\"address\",\"name\":\"player\",\"indexed\":false,\"internalType\":\"address\"}],\"outputs\":[],\"anonymous\":false},{\"type\":\"event\",\"name\":\"GameLeft\",\"inputs\":[{\"type\":\"address\",\"name\":\"player\",\"indexed\":false,\"internalType\":\"address\"}],\"outputs\":[],\"anonymous\":false},{\"type\":\"event\",\"name\":\"GameStarted\",\"inputs\":[],\"outputs\":[],\"anonymous\":false},{\"type\":\"event\",\"name\":\"GameWon\",\"inputs\":[{\"type\":\"address\",\"name\":\"winner\",\"indexed\":false,\"internalType\":\"address\"}],\"outputs\":[],\"anonymous\":false},{\"type\":\"event\",\"name\":\"MoveMade\",\"inputs\":[{\"type\":\"address\",\"name\":\"player\",\"indexed\":false,\"internalType\":\"address\"},{\"type\":\"uint256\",\"name\":\"row\",\"indexed\":false,\"internalType\":\"uint256\"},{\"type\":\"uint256\",\"name\":\"col\",\"indexed\":false,\"internalType\":\"uint256\"}],\"outputs\":[],\"anonymous\":false},{\"type\":\"function\",\"name\":\"board\",\"inputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"},{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"outputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"claimReward\",\"inputs\":[{\"type\":\"address\",\"name\":\"player\",\"internalType\":\"address\"}],\"outputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"stateMutability\":\"nonpayable\"},{\"type\":\"function\",\"name\":\"currentPlayer\",\"inputs\":[],\"outputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"gameStarted\",\"inputs\":[],\"outputs\":[{\"type\":\"bool\",\"name\":\"\",\"internalType\":\"bool\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"getReward\",\"inputs\":[{\"type\":\"address\",\"name\":\"player\",\"internalType\":\"address\"}],\"outputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"joinGame\",\"inputs\":[],\"outputs\":[],\"stateMutability\":\"nonpayable\"},{\"type\":\"function\",\"name\":\"leaveGame\",\"inputs\":[],\"outputs\":[],\"stateMutability\":\"nonpayable\"},{\"type\":\"function\",\"name\":\"makeMove\",\"inputs\":[{\"type\":\"uint256\",\"name\":\"row\",\"internalType\":\"uint256\"},{\"type\":\"uint256\",\"name\":\"col\",\"internalType\":\"uint256\"}],\"outputs\":[],\"stateMutability\":\"nonpayable\"},{\"type\":\"function\",\"name\":\"player1\",\"inputs\":[],\"outputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"player2\",\"inputs\":[],\"outputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"resetGame\",\"inputs\":[],\"outputs\":[],\"stateMutability\":\"nonpayable\"},{\"type\":\"function\",\"name\":\"rewards\",\"inputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"outputs\":[{\"type\":\"uint256\",\"name\":\"\",\"internalType\":\"uint256\"}],\"stateMutability\":\"view\"}]";

    private string ticTacToeContractAddress;
    private string ticTacToeContractABI;
    private Contract ticTacToeContract;



    public string currentSymbol = "X";
    public GameStateController gameStateController;

    // Start is called before the first frame update
    void Start() {
        InitializeSDKAndContract();
    }   

    private async void InitializeSDKAndContract() {

        sdk = ThirdwebManager.Instance.SDK;

        // Initialize your contract here if not already initialized
        ticTacToeContractAddress = SmartContractAddresses.TicTacToeContract;
        ticTacToeContractABI = SmartContractAddresses.TicTacToeContractABI;
        ticTacToeContract = sdk.GetContract(ticTacToeContractAddress, ticTacToeContractABI);

        //contract = sdk.GetContract(contractAddress, contractABI);
        await SetupEventListeners();

    }

    // Join the game
    public void JoinGame() {
        StartCoroutine(ContractOperationCoroutine("joinGame", new object[] { }));
    }

    // Leave the game
    public void LeaveGame() {
        StartCoroutine(ContractOperationCoroutine("leaveGame", new object[] { }));
    }

    // Reset everything
    public void ResetGame() {
        StartCoroutine(ContractOperationCoroutine("resetGame_dev", new object[] { }));
    }

    // Make move
    public void MakeMove(int row, int col) {
        StartCoroutine(ContractOperationCoroutine("makeMove", new object[] { row, col }));
    }

    private IEnumerator ContractOperationCoroutine(string methodName, object[] parameters) {
        bool isComplete = false;
        Exception operationException = null;

        // Trigger async operation
        AsyncContractOperation(methodName, parameters, () => isComplete = true, (ex) => operationException = ex);

        // Wait for completion
        yield return new WaitUntil(() => isComplete);

        if (operationException != null) {
            Debug.LogError($"Contract operation failed: {operationException.Message}");
        }
        else {
            Debug.Log($"Contract operation '{methodName}' completed successfully.");
            if (methodName == "joinGame") {
                Debug.Log("Game joined successfully!");
                SceneManager.LoadScene("GameScene");
            }
        }
    }

    private async void AsyncContractOperation(string methodName, object[] parameters, Action onComplete, Action<Exception> onException) {
        try {
            await ticTacToeContract.Write(methodName, parameters);
        }
        catch (Exception ex) {
            onException?.Invoke(ex);
            return;
        }
        onComplete?.Invoke();
    }

    // Function to read the reward for a player
    public async Task<ulong> GetReward(string playerAddress) {
        try {
            // Call the 'getReward' function in the smart contract
            ulong reward = await ticTacToeContract.Read<ulong>("getReward", playerAddress);
            Debug.Log($"Reward for address {playerAddress}: {reward}");
            return reward;
        }
        catch (Exception e) {
            Debug.LogError($"Error while fetching reward: {e.Message}");
            return 0;
        }
    }

    public class MoveMadeEventData {
        public string player;
        public uint row;
        public uint col;
    }

    public class GameJoinedEventData {
        public string player;
    }

    public class GameLeftEventData {
        public string player;
    }

    public class GameWonData {
        public string winner;
    }

    private async Task SetupEventListeners() {
        await ticTacToeContract.Events.RemoveAllListeners();
        ListenToEvents();
    }

    private void ListenToEvents() {

        ticTacToeContract.Events.ListenToAll((ContractEvent<object> anyEvent) => {
            Debug.Log("Event occurred: " + anyEvent.eventName);
            string jsonData = anyEvent.data.ToString(); // Assuming anyEvent.data is serialized JSON

            switch (anyEvent.eventName) {
                case "MoveMade":
                    var moveData = JsonUtility.FromJson<MoveMadeEventData>(jsonData);
                    HandleMoveMadeEvent(moveData);
                    break;
                case "GameJoined":
                    var joinedData = JsonUtility.FromJson<GameJoinedEventData>(jsonData);
                    HandleGameJoinedEvent(joinedData);
                    break;
                case "GameLeft":
                    var leftData = JsonUtility.FromJson<GameLeftEventData>(jsonData);
                    HandleGameLeftEvent(leftData);
                    break;
                case "GameWon":
                    var gameWonData = JsonUtility.FromJson<GameWonData>(jsonData);
                    HandleGameWon(gameWonData);
                    break;
                default:
                    Debug.Log("Unhandled event: " + anyEvent.eventName);
                    break;
            }
        });
    }

    private async void HandleMoveMadeEvent(MoveMadeEventData eventData) {
        Debug.Log($"Move made by {eventData.player} at row {eventData.row}, column {eventData.col}");

        // Find the button that matches the row and col, and update its UI
        ButtonHandler[] buttons = FindObjectsOfType<ButtonHandler>();
        foreach (var button in buttons) {
            if (button.row == eventData.row && button.col == eventData.col) {
                button.UpdateTile(currentSymbol);
                break;
            }
        }

        // LIMITATION: For å holde oversikt over brette, må vi markere at en rute er tatt. Nå setter vi bare at spiller 2 har hvilken som helst cell. 
        // Foreløpig har det ikke noe å si, fordi vi bare sjekker hvilke cells som er opptatt.
        gameStateController.gameBoard.SetTile(((int)eventData.row), ((int)eventData.col), 2);

        currentSymbol = currentSymbol == "X" ? "O" : "X";
        await gameStateController.UpdateCurrentPlayer();

    }

    private async void HandleGameJoinedEvent(GameJoinedEventData eventData) {
        Debug.Log($"Player joined: {eventData.player}");
        // Update game state or UI
        await gameStateController.UpdatePlayerAddresses();
    }

    private void HandleGameLeftEvent(GameLeftEventData eventData) {
        Debug.Log($"Player left: {eventData.player}");
        // Handle player leaving the game
        gameStateController.HandlePlayerLeft(eventData.player);
    }

    private void HandleGameWon(GameWonData eventData) {
        Debug.Log("Getting address");
        string winnerAddress = eventData.winner;
        Debug.Log("Success getting address");

        Debug.Log($"Player won: {eventData.winner}");


        Debug.Log("Trying to access GameOverFunction");
        gameStateController.GameOver(winnerAddress);
        // Handle player leaving the game
        Debug.Log("GAME FINISHED!");
    }

    public async Task<string> FetchPlayerAddress(string player) {
        Debug.Log("Fetching player address for player: " + player);
        if (!(player == "player1" || player == "player2")) {
            Debug.LogError("{player} needs to be player1 or player 2. Now it is: " + player);
            return null; 
        } else {
            string playerAddress = await ticTacToeContract.Read<string>(player);
            Debug.Log("Successfully fetched Player Address from TicTacToeController in FetchPlayerAddress() method");
            Debug.Log("playerAddress: " + playerAddress);
            return playerAddress;
            
        }
    }

    public async Task<string> FetchCurrentPlayerToMove() {
        try {
            Debug.Log("Fetching current player to move from TicTacToeContractInteraction..");
            string currentPlayerToMoveAddress = await ticTacToeContract.Read<string>("currentPlayer");
            Debug.Log("Successfully fetched current player to move from TicTacToeContractInteraction..");
            return currentPlayerToMoveAddress;
        } catch (Exception e) {
            Debug.LogError("Could not Fetch Current Player to move");
            return null;
        }
    }

    /* private void ListenToEvents() {
        var listener = contract.Events.ListenToAll((ContractEvent<object> anyEvent) => {
            Debug.Log("Event occurred: " + anyEvent.data);

            // You might want to filter by specific event types
            if (anyEvent.eventName == "MoveMade") {
                var moveData = eventData.data;
                Debug.Log($"Move made by {moveData.player} at row {moveData.row}, column {moveData.col}");
            }
        });
    } */
}

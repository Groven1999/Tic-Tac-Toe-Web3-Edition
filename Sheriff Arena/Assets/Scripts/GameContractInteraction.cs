using System;
using System.Collections;
using System.Threading.Tasks;
using Thirdweb;
using UnityEngine;

public class GameContractInteraction : MonoBehaviour {

    // SCRIPT NOT IN USE //


    // Assuming you have a contract instance ready. Replace 'YourContractType' with the actual type provided by thirdweb for interacting with your contract.
    
    private string contractAddress = "0x0fC010111dA3758cD0075D492A51174B02573a34";
    private string contractABI = "[{\"type\":\"event\",\"name\":\"GameStarted\",\"inputs\":[{\"type\":\"address\",\"name\":\"player1\",\"indexed\":false,\"internalType\":\"address\"},{\"type\":\"address\",\"name\":\"player2\",\"indexed\":false,\"internalType\":\"address\"}],\"outputs\":[],\"anonymous\":false},{\"type\":\"event\",\"name\":\"PlayerJoined\",\"inputs\":[{\"type\":\"address\",\"name\":\"player\",\"indexed\":false,\"internalType\":\"address\"}],\"outputs\":[],\"anonymous\":false},{\"type\":\"function\",\"name\":\"gameStarted\",\"inputs\":[],\"outputs\":[{\"type\":\"bool\",\"name\":\"\",\"internalType\":\"bool\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"joinGame\",\"inputs\":[],\"outputs\":[],\"stateMutability\":\"nonpayable\"},{\"type\":\"function\",\"name\":\"player1\",\"inputs\":[],\"outputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"stateMutability\":\"view\"},{\"type\":\"function\",\"name\":\"player2\",\"inputs\":[],\"outputs\":[{\"type\":\"address\",\"name\":\"\",\"internalType\":\"address\"}],\"stateMutability\":\"view\"}]";

    private ThirdwebSDK sdk;
    Contract contract;

    // Start is called before the first frame update
    void Start() {

        sdk = ThirdwebManager.Instance.SDK;

        // Initialize your contract here if not already initialized
        contract = sdk.GetContract(contractAddress, contractABI);
    }

    // Example function to join a game
    public async Task JoinGameAsync() {
        try {
            // Call the joinGame function on your smart contract
            var txReceipt = await contract.Write("joinGame");

            // If the call was successful, log the result (or just a success message)
            Debug.Log("Joined game successfully."); 
        }
        catch (Exception e) {
            // Log any errors that occur during the call
            Debug.LogError($"Failed to join game: {e.Message}");
        }
    }

    // A helper coroutine to call the async JoinGame function since Unity's Start and Update methods do not support async directly
    private IEnumerator CallJoinGame() {
        Debug.Log("Joining game... (CallJoinGame())");
        Debug.Log("Contract address: " + contract.Address);

        // Removed Task.Run and directly awaiting the async method inside a coroutine
        var joinGameTask = JoinGameAsync();

        // Wait for the task to complete
        while (!joinGameTask.IsCompleted) {
            yield return null;
        }

        // Check for exceptions
        if (joinGameTask.Exception != null) {
            Debug.LogError($"Error calling joinGame: {joinGameTask.Exception}");
        }
        else {
            // If no exception, check result or assume success
            Debug.Log("JoinGameAsync completed successfully.");
        }
    }

    // Example method to trigger the coroutine from a UI button click or other event
    public void OnJoinGameButtonClicked() {
        Debug.Log("Trykka på knappen hvertfal!");
        StartCoroutine(CallJoinGame());
    }
}


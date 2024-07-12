using System;
using Thirdweb;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainMenuScript : MonoBehaviour
{
    private ThirdwebSDK sdk;

    public GameObject ERC20TokenBalanceText;

    public GameObject WalletAddressText;
    public Button joinGameButton;

    public TicTacToeContractInteraction ticTacToeContractInteraction;

    public ProfileInfoScript profileInfoScript;

    public Button adminClaimGoldButton;
    public Button adminResetGameButton;

    private string tokenContractAddress = "0x8F8FD75c2eDAA1124E7EfE8e5681A7d017e748A0";
    private string itemContractAddress = "0x63B637a0a2AC88e6141E590FD330525999815793";

    // Start is called before the first frame update
    void Start()
    {
        sdk = ThirdwebManager.Instance.SDK;
        GetWalletAddress();
        GetTokenBalance();
    }

    public async void GetTokenBalance() {

        string walletAddress = await sdk.Wallet.GetAddress();

        Contract contract = sdk.GetContract(tokenContractAddress);

        var data = await contract.ERC20.BalanceOf(walletAddress);

        ERC20TokenBalanceText.GetComponent<TMPro.TextMeshProUGUI>().text = "Gold coin balance: " + data.displayValue;
    }

    public async void GetWalletAddress() {

        string walletAddress = await sdk.Wallet.GetAddress();

        WalletAddressText.GetComponent<TextMeshProUGUI>().text = walletAddress;

    }

    public void JoinGame() {
        joinGameButton.GetComponentInChildren<TextMeshProUGUI>().text = "Joining game..";
        ticTacToeContractInteraction.JoinGame();
    }

    public void EnterShop() {
        SceneManager.LoadScene("ShopScene");
    }

    // Admin Function - for testing purposes only. This function claims 20 gold coins to the connected wallet.
    public async void AdminFunction_Claim20GoldCoins() {
        try {
            Debug.Log("Claiming 20 tokens from the admin function..");
            adminClaimGoldButton.GetComponentInChildren<TextMeshProUGUI>().text = "Claiming gold coins...";
            await ERC20TokenContractInteractionScript.ClaimERC20Token("20");
            profileInfoScript.UpdateTokenBalanceText();
            adminClaimGoldButton.GetComponentInChildren<TextMeshProUGUI>().text = "Gold coins claimed!";
            Debug.Log("Gold Coins claimed!");
        } catch (Exception e) {
            Debug.Log("Could not claim 20 tokens from the admin function. Error message" + e);
        }
    }

    // Admin Function - for testing purposes only. This function resets the ongoing game, in case something happens during testing.
    public void AdminFunction_ResetGame() {
        try {
            Debug.Log("Resetting game..");
            adminResetGameButton.GetComponentInChildren<TextMeshProUGUI>().text = "Resetting game...";
            ticTacToeContractInteraction.ResetGame();
            adminResetGameButton.GetComponentInChildren<TextMeshProUGUI>().text = "Game was reset!";
            Debug.Log("Game was reset!");
        }
        catch (Exception e) {
            Debug.Log("Could not reset game. " + e);
        }
    }
}

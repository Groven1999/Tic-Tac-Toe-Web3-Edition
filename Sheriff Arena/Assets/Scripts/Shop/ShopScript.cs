using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Thirdweb;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ShopScript : MonoBehaviour
{

    // Thirdweb 
    private ThirdwebSDK sdk;
    private Contract backgroundsSmartContract;
    private string backgroundsSmartContractAddress;
    private string connectedWalletAddress;

    // Midnight NFT | ID: 0
    public GameObject midnight_NFT_container_owned;
    public GameObject midnight_NFT_container_notOwned;
    private int midnightNFTPrice;

    // Red Landscape NFT | ID: 1
    public GameObject greenForest_NFT_container_owned;
    public GameObject greenForest_NFT_container_notOwned;
    private int greenForestPrice;


    // Western NFT | ID: 2 | Default
    public GameObject redForest_NFT_container_owned;

    // UI
    public TextMeshProUGUI errorAlertMessage;

    void Start() {
        InitializeSDKAndContract();
        errorAlertMessage.text = "";
    }

    public async void InitializeSDKAndContract() {
        sdk = ThirdwebManager.Instance.SDK;
        backgroundsSmartContractAddress = SmartContractAddresses.BackgroundsContract;
        backgroundsSmartContract = sdk.GetContract(backgroundsSmartContractAddress);
        connectedWalletAddress = await sdk.Wallet.GetAddress();
        CheckIfOwnsAnyNFT();

        // Set prices for each background, corresponding to the NFTs in the collection
        midnightNFTPrice = 10;
        greenForestPrice = 20;
    }


    public async void BuyBackgroundNFT(string background_ID) {
        if (await CheckIfUserHasEnoughFundsToBuyBackground(background_ID)) {
            try {
                Debug.Log($"Attempting to buy background NFT with ID {background_ID}");
                errorAlertMessage.text = "Trying to purchase background, please wait..";
                //var result = await backgroundsSmartContract.ERC1155.Claim(background_ID, 1);
                await ERC1155ContractInteractionScript.BuyBackgroundNFT(background_ID);

                HandlePurchaseComplete(background_ID);
                Debug.Log($"Successfully bought background NFT with ID {background_ID}");
                
            }
            catch (Exception e) {
                errorAlertMessage.text = "Could not buy background!";
                Debug.Log($"Failed to buy background NFT with ID {background_ID}. Error: {e.Message}");
            }
        }
        
    }

    public async void HandlePurchaseComplete(string background_ID) {
        switch (background_ID) {
            case "0":
                Debug.Log("Purchase complete for Background: Midnight");
                errorAlertMessage.text = "Midnight background successfully purchased!";
                if (await CheckIfUserOwnsNFT(background_ID)) { MidnightNFTOwned(); }
                break;
            case "1":
                Debug.Log("Purchase complete for Background: Green Forest");
                errorAlertMessage.text = "Green Forest background successfully purchased!";
                if (await CheckIfUserOwnsNFT(background_ID)) { GreenForestNFTOwned(); }
                break;
            default:
                Debug.Log("Purchase complete for an unknown Background ID");
                break;
        }
    }



    // Update GUI if user already owns any NFT when Shop loads
    public async void CheckIfOwnsAnyNFT() {
        Debug.Log("Checking if user owns any NFTs");
        bool ownsMidnightNFT = await CheckIfUserOwnsNFT("0");
        bool ownsGreenForestNFT = await CheckIfUserOwnsNFT("1");

        if (ownsMidnightNFT) {
            MidnightNFTOwned();
        }

        if (ownsGreenForestNFT) {
            GreenForestNFTOwned();
        }
    }

    // Check if a user owns the specific NFT
    public async Task<bool> CheckIfUserOwnsNFT(string NFT_ID) {
        try {
            Debug.Log("Attempting to check if user owns the specific NFT");
            Debug.Log("Wallet address: " + connectedWalletAddress);

            return await ERC1155ContractInteractionScript.CheckIfUserOwnsNFT(NFT_ID);
        }
        catch (Exception e) {
            Debug.LogError("Could not check if user owns this NFT. Error:" + e.Message);
            return false;
        }
    }

    public async Task<bool> CheckIfUserHasEnoughFundsToBuyBackground(string NFT_ID) {
        // Check if user has enough funds
        try {
            Debug.Log("Checking if user has enough coins to buy..");
            
            int coinsRequired = (NFT_ID == "0") ? midnightNFTPrice : greenForestPrice;
            Debug.Log("Coins required: " + coinsRequired);
            string tokenBalanceString = await ERC20TokenContractInteractionScript.GetTokenBalance(connectedWalletAddress);
            int tokenBalance = ParseStringToInt(tokenBalanceString);

            Debug.Log("Token Balance: " + tokenBalance);

            Debug.Log("Token Balance: " + tokenBalance);
            Debug.Log("Coins Required: " + coinsRequired);
            if (tokenBalance < coinsRequired) {
                errorAlertMessage.text = "You do not have enough gold coins to buy this background!";
                Debug.Log("You do not have enough coins to buy this background!");
                return false;
            }

            Debug.Log("User has enough funds to buy the background!");
            return true;
        }
        catch (Exception e) {
            Debug.Log($"Failed to buy background NFT with ID {NFT_ID}. Error: {e.Message}");
            return false;
        }
    }

    public void MidnightNFTOwned() {
        try {
            Debug.Log("Attempting to update the UI for MidnightNFTOwned");

            midnight_NFT_container_notOwned.SetActive(false);
            midnight_NFT_container_owned.SetActive(true);
        }
        catch (Exception e) {
            Debug.LogError("Could not update the UI for MidnightNFTOwned. Error:" + e.Message);
        }
    }

    public void GreenForestNFTOwned() {
        try {
            Debug.Log("Attempting to update the UI for GreenForestUIOwned");

            greenForest_NFT_container_notOwned.SetActive(false);
            greenForest_NFT_container_owned.SetActive(true);
        }
        catch (Exception e) {
            Debug.LogError("Could not update the UI for GreenForestUIOwned. Error:" + e.Message);
        }
    }

    private int ParseStringToInt(string stringToParse) {
        // Split the tokenBalanceString at the decimal point and take the first part
        var parts = stringToParse.Split('.');
        string clearnString = parts[0];

        // Now parse the integer part
        int parsedInt;
        if (int.TryParse(clearnString, out parsedInt)) {
            // Successfully parsed the integer part
            Debug.Log("Parsed token balance: " + parsedInt);
            return parsedInt;
        }
        else {
            // Handle parsing failure
            Debug.Log("Failed to parse token balance.");
            return 0;
        }
    }

    public void BackToMenu() {
        SceneManager.LoadScene("MainMenuScene");
    }
}

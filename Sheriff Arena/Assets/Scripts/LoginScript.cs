using System;
using System.Collections;
using System.Collections.Generic;
using Thirdweb;
using TMPro;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoginScript : MonoBehaviour
{

    // Thirdweb 
    public ThirdwebSDK sdk;
    public Contract accessKeySmartContract;
    public string accessKeySmartContractAddress;
    public string connectedWalletAddress;

    // Game Objects
    public GameObject container_menu;
    public Button button_claimAccessKey;
    public Button button_enterGame;
    public GameObject text_accessKeyClaimed;
    public GameObject text_youNeedAccessToken;

    public GameObject container_noAccessToken;
    public GameObject container_accessTokenClaimed;
    

    void Start() {
        InitializeSDKAndContract();
        container_noAccessToken.SetActive(false);
        container_accessTokenClaimed.SetActive(false);
    }

    public void InitializeSDKAndContract() {
        sdk = ThirdwebManager.Instance.SDK;
        accessKeySmartContractAddress = SmartContractAddresses.AccessKeyContract;
        accessKeySmartContract = sdk.GetContract(accessKeySmartContractAddress);
    }

    public async void OnConnected() {

        connectedWalletAddress = await sdk.Wallet.GetAddress();
        
        ShowMenu();
        CheckIfUserHasAccessKey();
        //GetTokenBalance();
        //GetItemBalance();

    }

    

    public async void ClaimAccessKey() {

        // The Access Key NFT has a ID of 0 in the collection.
        string accessKey_ID = "0";

        Debug.Log("Claiming the Access Key...");
        button_claimAccessKey.GetComponentInChildren<TextMeshProUGUI>().text = "Claiming..";

        var data = await accessKeySmartContract.ERC1155.Claim(accessKey_ID, 1);

        // Access token claimed successfully - update UI
        container_accessTokenClaimed.SetActive(true);
        container_noAccessToken.SetActive(false);

        Debug.Log("Access Key claimed!");

    }

    public async void CheckIfUserHasAccessKey() {
        Debug.Log(accessKeySmartContract);
        Debug.Log(connectedWalletAddress);

        Debug.Log("Connected wallet: " + connectedWalletAddress);
        var accessKey_balance = await accessKeySmartContract.ERC1155.BalanceOf(connectedWalletAddress, "0");

        if (accessKey_balance == 1) {
            container_accessTokenClaimed.SetActive(true);
            container_noAccessToken.SetActive(false);
        } else {
            container_accessTokenClaimed.SetActive(false);
            container_noAccessToken.SetActive(true);
        }
        Debug.Log(accessKey_balance);
    }

    private void ShowMenu() {
        container_menu.SetActive(true);
    }

    public void GoToMenu() {
        SceneManager.LoadScene("MainMenuScene");
    }
}

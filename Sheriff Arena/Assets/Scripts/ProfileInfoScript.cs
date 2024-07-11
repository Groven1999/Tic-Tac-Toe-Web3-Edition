using UnityEngine;
using Thirdweb;
using TMPro;
using System;


// This Script is used to update User Wallet Address and Token Balance

public class ProfileInfoScript : MonoBehaviour
{
    private ThirdwebSDK sdk;
    public GameObject WalletAddressText;
    public GameObject ERC20TokenBalanceText;

    void Start() {
        sdk = ThirdwebManager.Instance.SDK;

        try {
            UpdateTokenBalanceText();
            UpdateWalletAddressText();
        } catch (Exception e) {
            Debug.LogException(e);
            Debug.LogError("Could not update Token Balance or Wallet Address. In Script: ProfileInfoScript.cs");
        }
    }

    public async void UpdateTokenBalanceText() {
        Debug.Log("Getting gold balance..");

        ERC20TokenBalanceText.GetComponent<TextMeshProUGUI>().text = "Getting gold balance..";
        string walletAddress = await sdk.Wallet.GetAddress();
        string tokenBalance = await ERC20TokenContractInteractionScript.GetTokenBalance(walletAddress);
        ERC20TokenBalanceText.GetComponent<TextMeshProUGUI>().text = "Gold balance: " + tokenBalance;
        
        Debug.Log("Successfully got gold balance!");
    }

    public async void UpdateWalletAddressText() {
        Debug.Log("Getting wallet address..");

        WalletAddressText.GetComponent<TextMeshProUGUI>().text = "Getting wallet address..";
        string walletAddress = await sdk.Wallet.GetAddress();
        WalletAddressText.GetComponent<TextMeshProUGUI>().text = "Your wallet address: " + walletAddress;

        Debug.Log("Successfully got wallet address!");
    }
}

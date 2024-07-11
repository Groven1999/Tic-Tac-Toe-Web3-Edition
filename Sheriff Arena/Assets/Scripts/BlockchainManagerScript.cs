using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Thirdweb;
using TMPro;
using UnityEngine.SceneManagement;
using System;

public class BlockchainManagerScript : MonoBehaviour
{

    // SCRIPT NOT IN USE //


    private ThirdwebSDK sdk;

    public GameObject ERC20TokenBalanceText;

    public GameObject NFTBalanceText;

    private string tokenContractAddress = "0x8F8FD75c2eDAA1124E7EfE8e5681A7d017e748A0";
    private string itemContractAddress = "0x63B637a0a2AC88e6141E590FD330525999815793";

    public GameObject Item01Balance; 
    public GameObject Item02Balance;

    public GameObject enterGameButton;


    void Start()
    {
        sdk = ThirdwebManager.Instance.SDK;    
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnConnected() {
        GetTokenBalance();
        GetItemBalance();
    }

    public async void GetTokenBalance() {

        string walletAddress = await sdk.Wallet.GetAddress();

        Contract contract = sdk.GetContract(tokenContractAddress);

        var data = await contract.ERC20.BalanceOf(walletAddress);

        ERC20TokenBalanceText.GetComponent<TMPro.TextMeshProUGUI>().text = data.displayValue;
    }

    public async void ClaimERC20Token(string amountToClaim) {
        Debug.Log("Claiming tokens...");
        Contract contract = sdk.GetContract(tokenContractAddress);

        var data = await contract.ERC20.Claim(amountToClaim);
        Debug.Log("Tokens were claimed");

        GetTokenBalance();
    }

    public async void GetItemBalance() {
        string walletAddress = await sdk.Wallet.GetAddress();

        Contract contract = sdk.GetContract(itemContractAddress);

        var item1Balance = await contract.ERC1155.BalanceOf(walletAddress, "0");
        var item2Balance = await contract.ERC1155.BalanceOf(walletAddress, "1");

        Debug.Log(item1Balance);
        Debug.Log(item1Balance.GetType());

        if (item1Balance == 1) {
            enterGameButton.SetActive(true);
        }

        Item01Balance.GetComponent<TMPro.TextMeshProUGUI>().text = "Item 01: " + item1Balance;
        Item02Balance.GetComponent<TMPro.TextMeshProUGUI>().text = "Item 02: " + item2Balance;
    }
    
    public async void ClaimItem(string tokenId) {

        // Claiming the Sheriff NFT
        if (tokenId == "0") {
            Debug.Log("Claiming Sheriff...");

            Contract contract = sdk.GetContract(itemContractAddress);
            var data = await contract.ERC1155.Claim(tokenId, 1);

            Debug.Log("Sheriff NFT claimed!");

            GetItemBalance();
        }
        

        // Claiming the Hunter NFT
        if (tokenId == "1") {
            Debug.Log("Claiming Hunter...");

            Contract contract = sdk.GetContract(itemContractAddress);
            var data = await contract.ERC1155.Claim(tokenId, 1);

            Debug.Log("Hunter NFT claimed!");

            GetItemBalance();
            GetTokenBalance();

        }
    }

    public void EnterGame() {
        SceneManager.LoadScene("MainMenuScene");
    }
}

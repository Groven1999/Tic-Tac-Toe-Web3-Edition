using Org.BouncyCastle.Bcpg;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using Thirdweb;
using UnityEngine;

public static class ERC1155ContractInteractionScript
{
    // Thirdweb 
    private static ThirdwebSDK sdk = ThirdwebManager.Instance.SDK;
    private static Contract backgroundsSmartContract = sdk.GetContract(SmartContractAddresses.BackgroundsContract);
    private static string backgroundsSmartContractAddress = SmartContractAddresses.BackgroundsContract;

    public static async Task<bool> CheckIfUserOwnsNFT(string NFT_ID) {
        try {
            string connectedWalletAddress = await sdk.Wallet.GetAddress();
            Debug.Log("Attempting to check if user owns the specific NFT");
            Debug.Log("Wallet address: " + connectedWalletAddress);

            var nft_balance = await backgroundsSmartContract.ERC1155.BalanceOf(connectedWalletAddress, NFT_ID);
            Debug.Log(nft_balance);
            return nft_balance >= 1;
        }
        catch (Exception e) {
            Debug.LogError("Could not check if user owns this NFT. Error:" + e.Message);
            return false;
        }
    }

    public static async Task BuyBackgroundNFT(string background_ID) {
        try {
            Debug.Log("Trying to buy NFT..");
            var result = await backgroundsSmartContract.ERC1155.Claim(background_ID, 1);

            Debug.Log($"Successfully bought background NFT with ID {background_ID}");
        }
        catch (Exception e) {
            Debug.Log($"Failed to buy background NFT with ID {background_ID}. Error: {e.Message}");
        }
    }
}

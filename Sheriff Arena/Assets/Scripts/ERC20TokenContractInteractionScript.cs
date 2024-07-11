using System.Threading.Tasks;
using Thirdweb;
using UnityEngine;

public static class ERC20TokenContractInteractionScript
{
    private static ThirdwebSDK sdk = ThirdwebManager.Instance.SDK;
    private static string tokenContractAddress = SmartContractAddresses.erc20tokenContractAddress;

    public static async Task ClaimERC20Token(string amountToClaim) {
        Debug.Log("Claiming tokens...");

        Contract contract = sdk.GetContract(tokenContractAddress);

        var data = await contract.ERC20.Claim(amountToClaim);
        Debug.Log("Tokens were claimed");

    }

    public static async Task<string> GetTokenBalance(string address) {

        Debug.Log("Getting Token Balance from ERC20 script...");
        Contract contract = sdk.GetContract(tokenContractAddress);

        var data = await contract.ERC20.BalanceOf(address);

        string tokenBalance = data.displayValue;

        Debug.Log("Successfully got Token Balance from ERC20 Script");

        return tokenBalance;
    }
}

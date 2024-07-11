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

        ERC20TokenBalanceText.GetComponent<TMPro.TextMeshProUGUI>().text = data.displayValue;
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
}

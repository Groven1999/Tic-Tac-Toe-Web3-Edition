# Tic Tac Toe - Web3 Edition
Welcome to a Web3 Edition of the classic Tic Tac Toe game! <br>

The game was made as a part of my Master Thesis in Informatics, July 2024. <br> <br>


**Game features:** <br>

- Multiplayer battles on **Blockchain**
- Earn **Gold Coins** by winning battles - the in-game cryptocurrency
- Purchase **Background NFTs** with the Gold Coins




&ensp;

# Play the Game
The game can be played on _itch.io_ in most modern browsers. [Play it now!](https://groven99.itch.io/web3-tic-tac-toe).

1. Press **Connect Wallet** and log in with your Web3 wallet, social login or _guest account_
2. Claim the free _Access Token_
3. Play multiplayer battles and earn _Gold Coins_ to buy _Background NFTs_
4. Enjoy! :)

&ensp;


# Setting up the Project Locally

## Prerequisites
Ensure you have the following software installed:
1. Unity Editor (version ^2021.3.35f1 or newer)
2. Unity Hub 

## Installation

1. Download the project as a **ZIP** file
2. Launch Unity Hub
3. Press **Add** -> **Add project from disk** -> select the ZIP file you just downloaded
4. Launch the project
5. Done!

## Testing the Game During Development
Several blockchain functionalities are disabled when testing the game within the Unity Editor. Therefore, the game needs to be compiled as a _WebGL_ project and played in the browser.

1. In the Unity Editor, go to **File** -> **Build Settings**
2. Select **WebGL** (installation might be required)
3. Go to **Player Settings**
4. Under **Settings for WebGL** -> **Resolution and Presentation**, select **Thirdweb** as the **WebGL Template**
5. Under **Settings for WebGL** -> **Comperssion Format**, select **Disabled**
6. Exit the **Player Settings** and press **Build And Run**
7. Choose your designated folder for the compiled project
8. When the project is finished building, the game should launch automatically in your default browser
9. Enjoy!



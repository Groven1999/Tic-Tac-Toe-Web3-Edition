using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class BackgroundHandlerScript : MonoBehaviour
{

    public Image backgroundImage;

    public Sprite redForestBackground; // Default background
    public Sprite midnightBackground; // NFT ID: 0
    public Sprite greenForestBackground; // NFT ID: 1

    private void Awake() {
        Debug.Log("Setting background...");

        Sprite currentBackground = BackgroundStateScript.GetBackground();
        Debug.Log("Current Background: " + currentBackground);

        if (currentBackground == null) {
            Debug.Log("Setting default background...");
            BackgroundStateScript.SetBackground(redForestBackground);
            RefreshBackground();
        }
        else {
            backgroundImage.sprite = currentBackground;
        }

        RefreshBackground();

        Debug.Log("Background set!");
    }

    public async void UpdateBackgroundImage(string NFT_ID) {
        // BACKGROUNDS
        // 0: midnight, 1: sheriff

        Debug.Log("Trying to update the background image...");

        switch (NFT_ID) {
            
            case "0":
                if (await CheckIfUserOwnsSpecificBackground(NFT_ID)) {
                    BackgroundStateScript.SetBackground(midnightBackground);
                    //backgroundImage.sprite = midnightBackground;
                    backgroundImage.color = new Color(1f, 1f, 1f, 0.5f);
                    RefreshBackground();
                    Debug.Log("Successfully update the background image to midnight!");
                } else {
                    Debug.Log("You do not own this background!");
                }

                break;
            case "1":
                if (await CheckIfUserOwnsSpecificBackground(NFT_ID)) {
                    BackgroundStateScript.SetBackground(greenForestBackground);
                    backgroundImage.sprite = greenForestBackground;
                    backgroundImage.color = new Color(1f, 1f, 1f, 1f);
                    RefreshBackground();
                    Debug.Log("Successfully update the background image to greenForest!");
                } else {
                    Debug.Log("You do not own this background!");
                }
                
                break;
            case "default":
                BackgroundStateScript.SetBackground(redForestBackground);
                backgroundImage.sprite = redForestBackground;
                backgroundImage.color = new Color(1f, 1f, 1f, 1f);
                RefreshBackground();
                Debug.Log("Successfully update the background image to red forest!");
                break;
            default:
                Debug.LogError("Background " + NFT_ID + " not recognized.");
                break;
        }

        

    }

    private async Task<bool> CheckIfUserOwnsSpecificBackground(string backgroundName) {
        try {
            var ownsBackground = await ERC1155ContractInteractionScript.CheckIfUserOwnsNFT(backgroundName);
            return ownsBackground;
        } catch (Exception e) {
            Debug.LogError("Could not check if user owns this background NFT");
            return false;
        }
        
    }

    // Function to reset the background to default
    public void ResetBackground() {
        if (backgroundImage != null) {
            backgroundImage.sprite = redForestBackground;
            backgroundImage.color = new Color(1f, 1f, 1f, 1f);
        }
        else {
            Debug.LogWarning("Background image is not assigned!");
        }
    }

    public void RefreshBackground() {
        Debug.Log("Trying to referesh background...");
        backgroundImage.sprite = BackgroundStateScript.GetBackground();
        backgroundImage.color = new Color(1f, 1f, 1f, 1f);
        Debug.Log("Success refreshing background...");
    }
}

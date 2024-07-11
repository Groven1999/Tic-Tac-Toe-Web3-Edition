using System;
using UnityEngine;

public static class BackgroundStateScript
{
    private static Sprite background;

    public static void SetBackground(Sprite image) {
        try {
            background = image;
            Debug.Log("Successfully updated the global background image");
        } catch (Exception e) {
            Debug.LogError("Could not SetBackground from BackgroundStateScript. Error: " + e);
        }
    }

    public static Sprite GetBackground() {
        return background;
    }
}

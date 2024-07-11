using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameBoard : MonoBehaviour
{
    private int[,] board; // Use int instead of uint because C# commonly uses int for such purposes.

    public GameBoard() {
        board = new int[3, 3]; // Create a 3x3 board initialized with default int values (0).
    }

    // Method to set a value on the board
    public void SetTile(int row, int column, int value) {
        if (row >= 0 && row < 3 && column >= 0 && column < 3) {
            board[row, column] = value;
        }
        else {
            throw new ArgumentOutOfRangeException("Row or column is out of the board's range.");
        }
    }

    // Method to get a value from the board
    public int GetTile(int row, int column) {
        if (row >= 0 && row < 3 && column >= 0 && column < 3) {
            return board[row, column];
        }
        else {
            throw new ArgumentOutOfRangeException("Row or column is out of the board's range.");
        }
    }

    public bool IsValidMove(int row, int column) {
        // Check if the indices are within the bounds of the board
        if (row >= 0 && row < 3 && column >= 0 && column < 3) {
            // Check if the tile is empty (i.e., not marked by player 1 or 2)
            return board[row, column] != 1 && board[row, column] != 2;
        }
        else {
            throw new ArgumentOutOfRangeException("Row or column is out of the board's range.");
        }
    }

    // Optionally, a method to reset the board
    public void ResetBoard() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i, j] = 0;
            }
        }
    }
}


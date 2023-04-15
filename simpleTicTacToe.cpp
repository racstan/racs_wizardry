#include <iostream>
using namespace std;

// Function to display the current board
void displayBoard(char board[3][3]) {
    cout << "Current Board:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if the game is won
bool checkWin(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;
    return false;
}

int main() {
    char board[3][3];  // 2D array to represent the game board
    char player1 = 'X';  // Player 1 symbol
    char player2 = 'O';  // Player 2 symbol
    char currentPlayer = player1;  // Current player

    // Initialize the game board with empty spaces
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }

    int row, col;
    bool gameover = false;
    int moves = 0;

    // Game loop
    while (!gameover && moves < 9) {
        displayBoard(board);
        cout << "Player " << currentPlayer << ", enter row (0-2): ";
        cin >> row;
        cout << "Player " << currentPlayer << ", enter col (0-2): ";
        cin >> col;

        // Check if the chosen cell is valid and empty
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            // Mark the cell with the current player's symbol
            board[row][col] = currentPlayer;
            moves++;

            // Check if the current player has won
            if (checkWin(board, currentPlayer)) {
                displayBoard(board);
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameover = true;
            } else {
                // Switch to the other player
                currentPlayer = (currentPlayer == player1) ? player2 : player1;
            }
        } else {
            cout << "Invalid move! Please try again." << endl;
        }
    }

    // If no player has won and the game is a draw
    if (!gameover && moves == 9) {
        displayBoard(board);
        cout << "It's a draw!" << endl;
    }

    return 0;
}

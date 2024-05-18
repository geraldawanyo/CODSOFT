#include <iostream>
#include <string>

using namespace std;

/*Variables*/
char grid_position[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
const char playerX = 'X';
const char playerO = 'O';
char currentPlayer = playerX;
char winner = ' ';
char playGame = 'y';
string player1;
string player2;


int main() {

    /*Prints playing board and with position numbers*/
    cout << " " << "1" << " | " << "2" << " | " << "3" << '\n';
    cout << "----" << "----" << "----" << '\n';
    cout << " " << "4" << " | " << "5" << " | " << "6" << '\n';
    cout << "----" << "----" << "----" << '\n';
    cout << " " << "7" << " | " << "8" << " | " << "9" << '\n';
    cout << "                  " << '\n';
    
    /*The loop continues as long as user chooses to restart game at the end*/
    while (playGame == 'y') {

        /*Asks user to enter names of both players*/
        cout << "Player 1, Enter Your Name: ";
        cin >> player1;
        cout << player1 << " is " << playerX << endl;

        cout << "Player 2, Enter Your Name: ";
        cin >> player2;
        cout << player2 << " is " << playerO << endl;


        /* For each loop, the user makes a move on the board and the board is checked for a three in a row*/
        for (int i = 0; i < 9; i++) {

            /*Display updated board after every move*/
            cout << " " << grid_position[0] << " | " << grid_position[1] << " | " << grid_position[2] << '\n';
            cout << "----" << "----" << "----" << '\n';
            cout << " " << grid_position[3] << " | " << grid_position[4] << " | " << grid_position[5] << '\n';
            cout << "----" << "----" << "----" << '\n';
            cout << " " << grid_position[6] << " | " << grid_position[7] << " | " << grid_position[8] << '\n';

            /*Breaks the for loop if one of the players gets three three in a row, */
            if (winner != ' ') {
                break;
            }

            
            int position;

            /*Tells user who's turn it is to make a move*/
            if (currentPlayer == playerX) {

                cout << player1 << ", " << "Enter board position: ";

            } else if (currentPlayer == playerO) {

                cout << player2 << ", " << "Enter board position: ";

            }

            /*Allows player to input the posistion of their mark on the board (1 to 9)*/
            cin >> position;
            
            /*Ensures that user input a number from 1 to 9*/
            while (position < 1 || position > 9) {
                cout << "Invalid Input - Try again" << endl;
                cin >> position;

                if (position > 0 && position < 10) {
                    break;

                }

            }
            /*Ensures that user only inputs a position that is empty*/
            while (grid_position[position - 1] != ' ') {
                cout << "Invalid Input - Try again" << endl;
                cin >> position;

                if (grid_position[position - 1] == ' ') {
                    break;

                }
            }

            /*Adds player's mark to the inputted position in the array*/
            grid_position[position - 1] = currentPlayer;

            /*Switches mark after each player takes their turn*/
            currentPlayer = (currentPlayer == playerX) ? playerO : playerX;

            /*Loops through board positions horizonally to check for a three in a row*/
            for (int i = 0; i < 9; i += 3) {


                if (grid_position[i] == grid_position[i + 1] && grid_position[i] == grid_position[i+2]) {

                    winner = grid_position[i];
                    break;

                }

            }

            /*Loops through board positions vertically to check for a three in a row*/
            for (int i = 0; i < 3; i++) {

                if (grid_position[i] == grid_position[i + 3] && grid_position[i] == grid_position[i + 6]) {

                    winner = grid_position[i];
                    break;
                }

            }

            /*Checks for a diagonal three in a row*/
            if (grid_position[0] == grid_position[4] && grid_position[0] == grid_position[8]) {

                winner = grid_position[0];


            }

            else if (grid_position[2] == grid_position[4] && grid_position[2] == grid_position[6]) {

                winner = grid_position[2];
            

            }

        }

        /*Declares winner or whether its a draw*/
        if (winner != ' ' && winner == 'X') {
            cout << "Winner is " << player1 << endl;

        } if (winner != ' ' && winner == 'O') {
            cout << "Winner is " << player2 << endl;

        } else if (winner == ' ') {
            cout << "It's a Draw" << endl;
        }

        /*Allows user to restart game or exit*/
        cout << "Start another game? (y/n)" << endl;
        cin >> playGame;

        while (playGame != 'y' && playGame != 'n') {
            cin >> playGame;
            cout << "Invalid input" << endl;
            cout << "Start another game? (y/n)" << endl;
            
            if (playGame == 'y' || playGame == 'n') {
                break;
            }
        }

        /*Breaks out of while loop if user wants yo exit game*/
        if (playGame == 'n') {
            cout << "Game Over" << endl;
            break;
        
        /*Starts new game and continues in while loop if user wants to play another game*/
        } else if (playGame == 'y') {
            winner = ' ';
            currentPlayer = playerX;
            for (int i=0;i<9;i++) {
                grid_position[i] = ' ';
            }
        }
        


    }
    






}


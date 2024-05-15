#include <iostream>

using namespace std;


char grid_position[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
const char playerX = 'X';
const char playerO = 'O';
char currentPlayer = playerX;
char winner = ' ';
char playGame = 'Y';






int main() {

    cout << " " << "1" << " | " << "2" << " | " << "3" << '\n';
    cout << "----" << "----" << "----" << '\n';
    cout << " " << "4" << " | " << "5" << " | " << "6" << '\n';
    cout << "----" << "----" << "----" << '\n';
    cout << " " << "7" << " | " << "8" << " | " << "9" << '\n';
    cout << "                  " << '\n';
    
    while (playGame == 'Y') {
        for (int i = 0; i < 9; i++) {
            cout << " " << grid_position[0] << " | " << grid_position[1] << " | " << grid_position[2] << '\n';
            cout << "----" << "----" << "----" << '\n';
            cout << " " << grid_position[3] << " | " << grid_position[4] << " | " << grid_position[5] << '\n';
            cout << "----" << "----" << "----" << '\n';
            cout << " " << grid_position[6] << " | " << grid_position[7] << " | " << grid_position[8] << '\n';

            if (winner != ' ') {
                break;
            }
       

            int position;

            cout << "Player " << currentPlayer << ", " << "Enter board position:" << endl;

            cin >> position;

            while (position < 1 || position > 9) {
                cout << "Invalid Input - Try again" << endl;
                cin >> position;

                if (position > 0 && position < 10) {
                    break;

                }

            }

            while (grid_position[position - 1] != ' ') {
                cout << "Invalid Input - Try again" << endl;
                cin >> position;

                if (grid_position[position - 1] == ' ') {
                    break;

                }
            }

            grid_position[position - 1] = currentPlayer;
            currentPlayer = (currentPlayer == playerX) ? playerO : playerX;

            for (int i = 0; i < 9; i += 3) {


                if (grid_position[i] == grid_position[i + 1] && grid_position[i] == grid_position[i+2]) {

                    winner = grid_position[i];
                    break;

                }

            }

            for (int i = 0; i < 3; i++) {

                if (grid_position[i] == grid_position[i + 3] && grid_position[i] == grid_position[i + 6]) {

                    winner = grid_position[i];
                    break;
                }

            }

            if (grid_position[0] == grid_position[4] && grid_position[0] == grid_position[8]) {

                winner = grid_position[0];


            }

            else if (grid_position[2] == grid_position[4] && grid_position[2] == grid_position[6]) {

                winner = grid_position[2];
            

            }

        }

        if (winner != ' ') {
            cout << "Winner is Player " << winner << endl;

        }
        else {
            cout << "It's a Draw" << endl;
        }

        cout << "Start another game?" << endl;;
        

        while (playGame != 'Y' || playGame != 'N') {
            cin >> playGame;
            cout << "Invalid input" << endl;
            cout << "Try again" << endl;
            
            if (playGame == 'Y' || playGame == 'N') {
                break;
            }
        }

        if (playGame == 'N') {
            cout << "Game Over" << endl;
            break;

        } else if (playGame == 'Y') {
            winner = ' ';
            currentPlayer = playerX;
            for (int i=0;i<9;i++) {
                grid_position[i] = ' ';
            }
        }
        


    }
    






}


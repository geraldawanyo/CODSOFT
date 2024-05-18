#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

/*Function generates random number*/
int gen_num() { 
    srand(time(0));
    int n = 10;
    int r = rand() % n+1;
    
    
    return r;
}

/*Main function*/
int main() {
    int input;
    int r = gen_num();
    cout << "input number from 1 to 10: ";
    cin >> input;

    while (input < 1 || input > 10) {
        cout << "Invalid input" << endl; 
        cout << "Try again:" << endl;
        cout << "input number from 1 to 10: ";
        cin >> input;

        if (input >= 1 && input <= 10) {
            break;
        }
    }
    

    /*Checks whether inputted number is a correct guess*/
    while (input > r || input < r) {

        /*Tells user whether number is too high or too low*/
        if (input > r) {
             cout << "Too High" << '\n';
        } else if (input < r) {
             cout << "Too low" << '\n';
        }
        cout << "input number from 1 to 10: ";
        cin >> input;
        cout << "input: " << input << '\n';

        /*If input number is correct, the program breaks loop*/
        if (input == r) {
        cout << "Correct" << '\n';
        break;
        } 

    }

    
}
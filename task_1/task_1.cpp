#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int gen_num() { 
    srand(time(0));
    int n = 10;
    int r = rand() % n;
    cout << "generated number: " << r << '\n';

    return r;
}


int main() {
    int input;
    int r = gen_num();
    cout << "input number from 1 to 10: ";
    cin >> input;
    cout << "input: " << input << '\n';

    while (input > r || input < r) {
        if (input > r) {
             cout << "Too High" << '\n';
        } else if (input < r) {
             cout << "Too low" << '\n';
        }

        cout << "input number from 1 to 10: ";
        cin >> input;
        cout << "input: " << input << '\n';

        if (input == r) {
        cout << "Correct" << '\n';
        break;
        } 

    }

    
}
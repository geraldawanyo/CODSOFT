#include <iostream>

using namespace std;


int main() {
    int a,b,ans; /*a = first number, b = second number, ans = result*/
    char op; /*op = operator*/
    cout << "Enter a number:" << '\n';
    cin >> a; /*allows user to input first number*/
    cout << "Enter an operator:" << '\n';
    cout << a << " ";
    cin >> op; /*allows user to input operation*/
    
    /*If operation input is invalid, the program will ask user to try again*/
    while (op != '+' && op != '-' && op != 'x' && op != '/' ) {
        cout << "try again: " << '\n';
        cout << a << " ";
        cin >> op;
        
        /*If operation input is valid, the program breaks loop*/
        if (op == '+' || op == '-' || op == 'x' || op == '/' ) {
        
            break;
        }

        
    }
    cout << "Enter another number:" << '\n';
    cout << a << " " << op << " ";
    cin >> b; /*allows user to input second number*/

    /*Execute inputted operation between inputted numbers*/
    if (op == '+') {
        ans = a + b;
    
    } else if (op == '-') {
        ans = a - b;
    
    } else if (op == 'x') {
        ans = a * b;
        
    } else if (op == '/') {
        ans = a / b;
    }

    cout << '\n' << a << " " << op << " " << b << " " << '=' << " " << ans;
}
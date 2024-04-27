#include <iostream>

using namespace std;


int main() {
    int a,b,ans;
    char op;
    cout << "Enter a number:" << '\n';
    cin >> a;
    cout << "Enter an operator:" << '\n';
    cout << a << " ";
    cin >> op;
    
    if (op == '+' || op == '-' || op == 'x' || op == '/' ) {
        
        cout << "Enter another number:" << '\n';
        cout << a << " " << op << " ";
        cin >> b;
        
    } else {

        while (op != '+' || op != '-' || op != 'x' || op != '/' ) {
        cout << "try again: " << '\n';
        cout << a << " ";
        cin >> op;
        

        if (op == '+' || op == '-' || op == 'x' || op == '/' ) {

            cout << "Enter another number:" << '\n';
            cout << a << " " << op << " ";
            cin >> b;
        
            break;
        }
    }

    }
    


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
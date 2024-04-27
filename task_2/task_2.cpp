#include <iostream>

using namespace std;


int main() {
    int a,b,ans;
    char op;
    cin >> a;
    cout << a << " ";
    cin >> op;
    cout << a << " " << op << " ";
    cin >> b;
    

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
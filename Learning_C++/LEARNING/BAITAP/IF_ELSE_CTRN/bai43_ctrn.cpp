#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int a, b; char x;
    cin >> a >> b >> x;

    switch(x) {
        case '+':
            cout << fixed << setprecision(2) << a << " + " << b << " = " << a + b << endl;
            break;
        case '-':
            cout << fixed << setprecision(2) << a << " - " << b << " = " << a - b << endl;
            break;
        case '*':
            cout << fixed << setprecision(2) << a << " * " << b << " = " << a * b << endl;
            break;
        case '/':
            cout << fixed << setprecision(2) << a << " / " << b << " = " << (double)a / b << endl;
            break;
        case '%':
            cout << fixed << setprecision(2) << a << " % " << b << " = " << a % b << endl;
            break;
        default:
            cout << "Phep toan khong hop le" << endl;
    }
}
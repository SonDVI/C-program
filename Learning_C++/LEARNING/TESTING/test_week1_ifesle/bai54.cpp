//NGAY THANG HOP LE
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;


    if (c > 0) {
        if ((b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && (a > 0 && a <= 31) ) {
            cout << "28tech" << endl;
        }
        else if ((b == 4 || b == 6 || b == 9 || b == 11) && (a > 0 && a <= 30)) {
            cout << "28tech" << endl;
        }
    
        else if (b == 2) {
            if ((a > 0 && a <= 28) || (a == 29 && ((c % 4 == 0 && c % 100 != 0) || (c % 400 == 0))))    {
                cout << "28tech" << endl;
                }
            else {
                cout << "29tech" << endl;
                }
            }
        else {
            cout << "29tech" << endl;
        }
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n;
    cin >> t >> n;
    if (t > 0 && t <= 12 && n > 0 && n <= 5000) {
        if (t == 1 || t ==3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
            cout << 31 << endl;
        }
        else if (t == 4 || t == 6 || t == 9 || t == 11) {
            cout << 30 << endl;
        }
        else {
            if ((n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))) {
                cout << 29 << endl;
                }
            else {
                cout << 28 << endl;
                }
            }
            
        
        }
    else {
        cout << "INVALID" << endl;
    }
    return 0;
}
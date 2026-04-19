/*
*
**
*3*
*44*
*555*
*6666*
*77777*
********

*/
#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == n || i == 1) {
                cout << "*";
            }
            else {
                if (j == 1 || j == i) {
                    cout << "*";
                }
                else {
                    cout << i;
                }
            }
        }
        cout << endl;
    }
}
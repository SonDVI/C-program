/*OUTPUT:

01010
10101
01010
10101
01010

*/
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            for (int j = 1; j <= n; j++) {
                if (j % 2 != 0) {
                    cout << 0;
                }
                else {
                    cout << 1;
                }
            }
        }
        else {
            for (int j = 1; j <= n; j++) {
                if (j % 2 != 0) {
                    cout << 1;
                }
                else {
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
}
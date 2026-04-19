/* output : 
1       1 
  2   2
    3
  4   4
5       5

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j + i == n + 1) { // J + I == N + 1 là đường chéo phụ, J == I là đường chéo chính TRONG HINH VUÔNG
                cout << i << " ";
            }
            else {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
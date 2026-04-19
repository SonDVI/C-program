/*  OUTPUT :
        1 
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5

*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = i; j <= i * 2 - 1; j++) {
            cout << j << " ";
        }
        for (int j = i * 2 - 2; j >= i; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
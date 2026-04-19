
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
    }
    cout << endl;
    for (int i = n; i >= 1; i--) {
        if (n % i == 0) {
            if (i % 2 != 0) {
                cout << i << " ";
            }
        }
    }
    return 0;
}
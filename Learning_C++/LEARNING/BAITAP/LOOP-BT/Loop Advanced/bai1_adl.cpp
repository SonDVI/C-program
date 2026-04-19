// Tính tổng S(n) = 1^2 + 2^2 + 3^2 + ... + n^2
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;


int main() {
    int n; cin >> n;
    ll sum = 0;
    ll power = 0;
    for (int i = 1; i <= n; i++) {
        power = pow(i, 2);
        sum += power;
    }
    cout << sum << endl;
    return 0;
}
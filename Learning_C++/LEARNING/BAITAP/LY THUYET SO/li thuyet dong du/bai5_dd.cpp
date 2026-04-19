/*Dãy số 23 được định nghĩa như sau :

F(1) = 1, F(2) = 1, Fn = 2 * F(n - 1) + 3 * F(n - 2).

Một số đầu tiên trong dãy 23 : 1, 1, 5, 13, 41.... Hãy tính số thứ n trong dãy số 23 chia dư cho 10^9 + 7.

*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

ll fn(int n) {
    ll f1 = 1, f2 = 1;
    if (n == 1 || n == 2) {
        return 1;
    }
    ll fi;
    for(int i = 3; i <= n; i++) {
        fi = (2 * f2) % mod + (3 * f1) % mod;
        fi %= mod;
        f1 = f2;
        f2 = fi;
    }
    return fi;
}

int main() {
    int n; cin >> n;
    cout << fn(n) << endl;
}
//tong cac so tu 1 den n
#include <iostream>
#include <cmath>

using namespace std;
using ll = long long;
int main() {
    ll n; cin >> n;
    ll tong = 0;
    for (ll i = 1; i <= n; i++) {
        tong += i;
    }
    cout << tong << endl;
    return 0;
}
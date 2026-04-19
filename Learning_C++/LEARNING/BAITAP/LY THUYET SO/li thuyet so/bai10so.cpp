/*Cho phân tích thừa số nguyên tố của một số nguyên dương N, hãy đếm số lượng ước số của số nguyên dương đó.

Ví dụ N = 60 = 2^2 * 3^1 * 5^1 thì số ước của 60 = (2 + 1) * (1 + 1) * (1 + 1) = 12 ước.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
bool snt(ll n) {
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int main() {
    ll t, p, e; cin >> t;
    ll tich = 1;
    for (ll i = 1; i <= t; i++) {
        cin >> p >> e;
        if (snt(p) && e >= 0) {
            ll c = e + 1;
            tich = (tich * c) % 1000000007;
        }
    }
    cout << tich << endl;
    return 0;
}   

#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;

ll sochuso(ll n) {
    ll tich = 1;
    while(n != 0) {
        tich *= (n % 10);
        n /= 10;
    
    }
    if (tich >= 1000000)
        return tich % 1000000;
    return tich;
 
}

ll luythua(ll n, ll k) {
    ll res = 1;
    while(k != 0) {
        if(k % 2 == 1) {
            res = res % mod * n % mod;
            res %= mod;
        }
        k /= 2;
        n = n % mod * n % mod;
        n %= mod;
    }
    return res;

}

int main() {
    ll n; cin >> n;
    ll k = sochuso(n);
    cout << luythua(n % mod, k) << endl;
    return 0;
}

#include <iostream>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int luythua(ll a, ll b) {
    ll res = 1;
    while (b != 0) {
        if(b % 2 == 1) {
            res = res % mod * a % mod;
            res %= mod;
        }
        b /= 2;
        a = a % mod * a % mod;
        a %= mod;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll b[n];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        int k = luythua(a[i], b[i]);
        sum = sum % mod + k % mod;
        sum %= mod;
    }

    cout << sum << endl;
    return 0;
}
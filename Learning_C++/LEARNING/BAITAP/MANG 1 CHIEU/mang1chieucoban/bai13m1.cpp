#include <iostream>
#include <climits>
using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll tich = 1;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        tich = tich % mod * a[i] % mod;
        tich %= mod;

        sum = sum % mod + a[i] % mod;
        sum %= mod;
    }

    cout << sum << endl;
    cout << tich << endl;

    return 0;
}
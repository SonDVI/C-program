

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool check(ll n) {
    ll can = round(cbrt(n));
    return 1ll * can * can * can == n;
}

int main() {
    ll n = 0;
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        if (check(n)) {
            cout << "28tech" << endl;
        }
        else {
            cout << "29tech" << endl;
        }
    }
    return 0; 
}
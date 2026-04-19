
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll a, b; cin >> a >> b;
    ll tich = 1;
    if (a == 0 || b == 0) {
        cout << 1 << endl;
    }
    else if (a > b) {
        for (ll i = 1; i <= b; i++) {
            tich *= i;
        }
        cout << tich << endl;
    }
    else if (a < b) {
        for (ll i = 1; i <= a; i++) {
            tich *= i;
        }
        cout << tich << endl;
    }
    else {
        for (ll i = 1; i <= a; i++) {
            tich *= i;
        }
        cout << tich << endl;
    }
}
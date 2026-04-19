
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool cphuong(ll n) {
    ll can = sqrt(n);
    return can * can == n;
}
int main() {
    ll n; cin >> n;
    if (cphuong(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
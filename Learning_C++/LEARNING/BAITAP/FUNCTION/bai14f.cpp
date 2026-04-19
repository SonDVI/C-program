
#include <iostream>
using namespace std;

using ll = long long;

ll rev(ll n) {
    ll res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    ll n; cin >> n;
    cout << rev(n) << endl;
    return 0;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

int sum_digit(ll n) {
    ll sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

int main() {
    ll n; cin >> n;
    ll x;
    for (ll i = 1; i <= n; i++) {
        cin >> x;
        cout << sum_digit(x) << " ";
    }
    return 0;
}
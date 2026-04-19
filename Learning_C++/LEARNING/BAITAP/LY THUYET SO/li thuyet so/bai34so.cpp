
#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;
using ll = long long;
ll power10(ll n) {
    ll result = 1;
    for(ll i = 0; i < n; i++) {
        result *= 10;
    }
    return result;
}
ll check(ll x, ll y, ll z, ll n) {
    ll bcnn = lcm(lcm(x, y), z);
    ll min_val = power10(n - 1);
    ll r = min_val % bcnn;
    ll max_val = power10(n);
    if(bcnn > max_val) return -1;

    ll result;
    if (r == 0) {
        result = min_val;
    }
    else {
        result = min_val + (bcnn - r);
    }
    
    if(result < max_val) {
        return result;
    }
    else {
        return -1;
    }
}
int main() {
    ll x, y, z, n; cin >> x >> y >> z >> n;
    cout << check(x, y, z, n) << endl;
    return 0;
}
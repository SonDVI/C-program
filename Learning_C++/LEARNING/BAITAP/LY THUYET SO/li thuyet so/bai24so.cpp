/*
Đếm số lượng ước của 1 số nguyên dương N
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    for (ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            sum ++;
            if(i != n / i) {
                sum ++;
            }
        }

    }
    cout << sum << endl;
    return 0;
}
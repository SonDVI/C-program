/*Cho N số nguyên, bạn hãy tính tổng các số này và chia dư tổng cho 10^9 + 7 (1000000007).*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main() {
    int n; cin >> n;
    ll x = 0;
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        sum = (sum + x) % mod;
    }
    cout << sum << endl;
    return 0;   
}
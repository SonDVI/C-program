/*Cho số nguyên dương N, bạn hãy tính tích các số nguyên tố từ 1 tới N sau đó đem tích này chia dư cho 10^9 + 7 (1000000007).*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

bool nt(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main() {
    int n; cin >> n;
    ll res= 1;

    for(int i = 1; i <= n; i++) {
        if(nt(i)) {
            res = res % mod * i % mod;
            res %= mod;
        }
    }
    cout << res << endl;
    return 0;
}
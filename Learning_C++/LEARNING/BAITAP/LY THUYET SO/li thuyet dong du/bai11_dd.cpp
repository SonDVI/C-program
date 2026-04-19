/*Cho số nguyên dương N, bạn hãy tính kết quả của biểu thức

S(n) = 1^1 + 2^2 + 3^3 + …. + n^n

Vì kết quả rất lớn nên bạn cần chia dư S(n) cho 1000000007 (10^9 + 7)*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;

const ll mod = 1e9 + 7;

ll luythua(int n, int b) {
    ll result = 1;
    while (b != 0) {
        if (b % 2 == 1) {
        result = result % mod * n % mod;
        result %= mod;
        }
    b /= 2;
    n = n % mod * n % mod;
    n %= mod;
    }
    return result;
}

int main() {
    int n; cin >> n;
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        int c = luythua(i, i);
        sum = sum % mod + c % mod;
        sum %= mod;

    }
    cout << sum << endl;
    return 0;
}
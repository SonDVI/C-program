/*Cho số nguyên dương N, bạn hãy tính kết quả của biểu thức

(1! + 2! + 3! + ... + N!) % 1000000007*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main() {
    int n; cin >> n;
    ll res= 1;
    ll sum = 0;
    for(int i = 1; i <= n; i++) {
        res = res % mod * i % mod;
        res %= mod;
        sum = sum % mod + res % mod;
        sum %= mod;
    }
    cout << sum << endl;
    return 0;
}
/*Hãy tính giai thừa các số từ 1 tới N và chia dư cho 10^9 + 7*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;


int main() {
    int n; cin >> n;
    ll result = 1;
    for(int i = 1; i <= n; i++) {
        result = result % mod * i % mod;
        result %= mod;
        cout << result << endl; 
    }
    return 0;
}
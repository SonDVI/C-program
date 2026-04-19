//Cho 2 số nguyên a và b, bạn hãy tính a^b%1000000007.
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll MOD = 1e9 +7;


int main() {
    int a, b; cin >> a >> b;
    ll tich = 1;

    for(int i = 1; i <= b; i++) {
        tich = tich % MOD * a % MOD;
        tich %= MOD;
    }
    cout << tich << endl;

}
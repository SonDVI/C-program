/*Cho 2 số nguyên a và b, bạn hãy tính a^b%1000000007.

Bài này do số mũ b rất lớn nên không thể duyệt từ 1 tới b để nhân dồn, bạn cần dùng lũy thừa nhị phân

                            Lũy thừa nhị phân
                            
*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

ll luythua(ll a, ll b) {
    ll result = 1;
    while(b != 0) {
        if(b % 2 == 1) {
            result = result % MOD * a % MOD;
            result %= MOD;
        }
        a = a % MOD * a % MOD;
        a %= MOD;
        b /= 2;
    }
    return result;
}

int main() {
    ll a, b; cin >> a >> b;
    cout << luythua(a % MOD, b) << endl;
}
/*
                LŨY THỪA NHỊ PHÂN (LŨY THỪA CHIA DƯ)


                3 trường hợp

    - a ^ b :   +) 1, b= 0.

                +) a^b/2 . a^b/2, b % 2 = 0.

                +)a^b/2 . a^b/2 . a, b % 2 != 0.

    ex: a^10 = a^5 . a^5
        a^11 = a^5 . a^5 . a


    - lũy thừa nhị phân :
        >> 5 ^ 29( hệ thập phân ) --> 5 ^ (11101) nhị phân
        tương ứng 2^4 + 2^3 + 2^2 + 2^0 = 29 
        . HAY 5^16 . 5^8 . 5^4 . 5^1 = 5^29.


    - công thức new : (a^b) % c = (a % c) ^ b % c;
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


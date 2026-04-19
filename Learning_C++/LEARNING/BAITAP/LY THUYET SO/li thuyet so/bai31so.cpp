//Đếm số lượng các số nguyên tố cùng nhau với N không vượt quá N

// BÀI NÀY CẦN DÙNG ĐẾN PHI HÀM EULER ĐỂ KHÔNG BỊ TRÀN :https://blog.28tech.com.vn/phi-ham-euler
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll phi(ll n) {
    ll res = n;
    for (ll i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            res = res - res / i;
            while(n % i == 0) {
                n /= i;
            }
        }
    }
    if (n > 1) {
        res -= res / n;
    }
    return res;
}

int main() {
    ll n; cin >> n;
    cout << phi(n) << endl;
    return 0;
}
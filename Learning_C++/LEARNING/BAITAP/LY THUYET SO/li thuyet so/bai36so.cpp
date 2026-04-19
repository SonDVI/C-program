/*
In ra tam giác pascal với chiều cao là N. Nếu các giá trị của tam giác pascal quá lớn, in ra giá trị trong tam giác này lấy dư với 1e9+7
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
ll giai_thua(int n) {
    ll result = 1;
    for(int i = 2; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}
ll luythua(ll a, ll b) {
    ll result = 1;
    a = a % MOD;          // mod a trước để tránh tràn

    while(b > 0) {
        if(b % 2 == 1)            // Nếu bit cuối = 1
            result = (result * a) % MOD;  // → nhân a vào kết quả

        a = (a * a) % MOD;        // Bình phương a (a → a² → a⁴ → a⁸...)
        b = b / 2;                // Dịch phải 1 bit (bỏ bit vừa xét)
    }
    return result;
}
ll modInverse(ll a) {
    return luythua(a, MOD - 2);  //định lý Fermat nhỏ
}

ll tohop(int n, int k) {
    ll result = giai_thua(n);
    result = (result * modInverse(giai_thua(k))) % MOD;
    result = (result * modInverse(giai_thua(n - k))) % MOD;
    return result;
}
int main() {
    int n; cin >> n;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= i; j++) {
            cout << tohop(i, j) << " ";
        }
        cout << endl;
    }
    
}
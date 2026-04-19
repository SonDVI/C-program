/*Tìm K chữ số cuối cùng của N^M, kết quả có thể không đủ K chữ số.

Ví dụ : 9^5 = 59049 và K = 3 thì bạn chỉ cần in ra 49.*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n, m, k; cin >> n >> m >> k;
    int mod = (int)pow(10, k);
    ll result = 1;
    for(int i = 1; i <= m; i++) {
        result = result % mod * n % mod;
        result %= mod;
    }
    cout << result << endl;
    return 0;
}
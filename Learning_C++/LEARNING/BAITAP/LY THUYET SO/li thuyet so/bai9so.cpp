/*Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số không vượt quá N. Ví dụ N =100, ta có các số 4.

Gợi ý : Số T-prime là số có dạng p^2, với p là số nguyên tố. Nên bài này các bạn chỉ cần tìm được các số nguyên tố <= sqrt(N) là giải quyết được bài toán.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool snt(ll n) {
    for (ll i = 2; i <= sqrt(n); i++){
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int main() {
    ll n; cin >> n;
    ll dem = 0;
    for (ll i = 2; i <= sqrt(n); i++) {
        if (snt(i)) {
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}
/*Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá N.

Ví dụ : N =100, ta có các số 4, 9, 25, 49.

Gợi ý : Số có 3 ước là số có dạng p^2 trong đó p là số nguyên tố, bây giờ bạn cần liệt kê các số p <= √N. Khi đó bạn chỉ cần liệt kê các số nguyên tố từ 1 tới √N rồi in ra dạng bình phương của nó là được.*/
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
    for (ll i = 2; i <= sqrt(n); i++) {
        if (snt(i)) {
            cout << (ll)pow(i, 2) << " ";
        }
    }
    return 0;
}
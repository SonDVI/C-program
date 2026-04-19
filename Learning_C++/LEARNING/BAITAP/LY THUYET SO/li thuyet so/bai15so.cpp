//Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. Ví dụ : N = 30 là số Sphenic vì 30 = 2×3×5. N = 60 không phải số Sphenic vì 60 = 2×2×3×5. Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool check2(ll n) {
    ll dem = 0;
    while (n % 2 == 0) {
        dem++;
        n /= 2;
        if (n % 2 == 0) return false;
    }


    for (ll i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            dem++;
            n /= i;
            if (n % i == 0) return false;
            }
    }
    if (n > 1) dem++;
    return dem == 3;
}

int main() {
    ll n; cin >> n;
    if (check2(n)) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}




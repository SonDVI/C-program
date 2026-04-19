/*
In ra số lượng chữ số 0 liên tiếp tính từ cuối của N!

Ví dụ bạn có N = 10, 10!= 3628800. Như vậy, 10! có 2 chữ số 0 liên tiếp tính từ cuối.


điều này tương đương với việc đếm số bậc số 2 và số 5 trong n!, sau đó tính số lượng 2 * 5 (=10), nếu có a cặp 2 * 5 thì số đó có a số 0 liên tiếp tương ứng.
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

ll so2(ll n) {
    ll res2 = 0;
    for (ll i = 2; i <= n; i *= 2) {
        res2 += n / i;
    }
    return res2;
}

ll so5(ll n) {
    ll res5 = 0;
    for (ll i = 5; i <= n; i *= 5) {
        res5 += n / i;
    }
    return res5;
}

int main() {
    ll n; cin >> n;
    ll a = so2(n);
    ll b = so5(n);
    ll so0 = 0;
    if (a > b) {
        so0 = b % 1000000007;
        cout << so0 << endl; // lay phan du theo yeu cau de bai
    }
    else if (a < b) {
        so0 = a % 1000000007;
        cout << so0 << endl; 
    }
    else {
        so0 = a % 1000000007;
        cout << so0 << endl;
    }
    return 0;
}
/*
Áp dụng kiến thức bài 14, bạn hãy in ra số thuận nghịch trong đoạn giữa 2 số a, b. Cách làm là bạn so sánh N với số lật ngược của nó, nếu giống nhau thì N là số thuận nghịch.

Ví dụ N = 12321, 2222, 5, 2882 là các số thuận nghịch.
*/
#include <iostream>
using namespace std;

using ll = long long;

bool rev(ll n) {
    ll res = 0;
    ll temp = n;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    if (res == temp) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int a, b; cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (rev(i)) {
                cout << i << " ";
            }
        }
    return 0;
}
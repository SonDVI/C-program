/*
Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N.

Ước số nguyên tố nhỏ nhất của 1 là 1. Ước số nguyên tố nhỏ nhất của các số chẵn là 2. Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

Gợi ý : Đối với số N duyệt từ 2 tới √N nếu gặp số mà N chia hết => Đây chính là ước nguyên tố nhỏ nhất, còn nếu không gặp thì N là số nguyên tố nên bạn return N
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int usntnn(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) return 2;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return i;
        }
    }
    return n;
}

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << usntnn(i) << endl;
    }
    return 0;
}
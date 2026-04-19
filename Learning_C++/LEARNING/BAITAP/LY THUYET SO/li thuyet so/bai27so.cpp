//Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau. Hãy in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên a, b cho trước.
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool thuannghich(int n) {
    int res = 0;
    int b = n;

    while (n != 0) {
        res = 10 * res + n % 10;
        n /= 10;
    }
    return res == b;
}


bool nguyento(int n) {
    int dem = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            dem++;
        }
    }
    if (n != 1) {
        dem++;
    }
    return dem >= 3;
}

int main() {
    int a, b; cin >> a >> b;
    bool check = false;
    for (int i = a; i <= b; i++) {
        if (thuannghich(i) && nguyento(i)) {
            cout << i << " ";
            check = true;
        }

    }
    if (!check) {
        cout << -1 << endl;
    }
    return 0;
}
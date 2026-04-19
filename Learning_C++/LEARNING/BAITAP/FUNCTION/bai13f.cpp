
#include <iostream>
using namespace std;
using ll = long long;

bool so_giam(int n) {
    while (n >= 10) {
        int digit = n % 10;
        int first_digit = n % 100 / 10;
        if (digit >= first_digit) {
            return false;
        }
        n /= 10;
    }
    return true;

}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (so_giam(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
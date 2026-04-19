#include <iostream>
using namespace std;
using ll = long long;

bool check(int n) {
    int digit = 0;
    int sochan = 0;
    int sole = 0;
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            sochan++;
        }
        else {
            sole++;
        }
        n /= 10;

    }
    return sochan == sole;
}

int main() {
    int x;
    cin >> x;
    for (int i = 1; i <= x; i++) {
        if (check(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
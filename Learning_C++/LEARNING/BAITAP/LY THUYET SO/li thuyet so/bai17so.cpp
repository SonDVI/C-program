
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int check(int n) {
    int MAXPRIME = 0;
    while (n % 2 == 0) {
        MAXPRIME = 2;
        n /= 2;

    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            MAXPRIME = i;
            n /= i;
        }
    }

    if (n > 2) {
        MAXPRIME = n;
    }
    return MAXPRIME;
}
int main() {
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n; cin >> n;
        cout << check(n) << endl;
    }
    return 0;
}
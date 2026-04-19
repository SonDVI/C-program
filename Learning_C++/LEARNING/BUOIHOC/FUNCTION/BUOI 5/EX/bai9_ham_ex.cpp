#include <iostream>
using namespace std;
using ll = long long;

bool chua6(int n) {
    int digit = 0;
    int dem6 = 0;
    while (n != 0) {
        digit = n % 10;
        if (digit == 6) {
            dem6++;
        }
        n /= 10;
    }
    return dem6 >= 1;
}

bool sumchan(int n) {
    int digit = 0;
    int sum = 0;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10; 
    }
    return sum % 2 == 0;
}

bool chanle(int n) {
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
    return sole > sochan;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (chua6(i) && sumchan(i) && chanle(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
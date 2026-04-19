
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

bool sodep(int n) {
    int digit = 0;
    int sochuso = 0;
    int sochan = 0;
    int sole = 0;
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 0) {
            sochan++;
        }
        else {
            sole++;
        }
        sochuso++;
        n /= 10;
    }
    if (sochan == sochuso || sole == sochuso) {
        return true;
        }
    else {
        return false;
        }
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sodep(i)) {
            cout << i << " ";
        }
    }
    return 0;
}

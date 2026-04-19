//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    int don_vi = n % 10;
    int chuc = (n / 10) % 10;
    if ((chuc % 2 == 0 && don_vi % 2 == 0) || (chuc % 2 != 0 && don_vi % 2 != 0)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
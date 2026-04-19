
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    if (n < 500) {
        cout << n * 3300 << endl;
    }
    else if (n < 800) {
        cout << n * 3700 + 800000 << endl;
    }
    else if (n < 1000) {
        cout << n * 3900 + 900000 << endl;

    }
    else {
        cout << n * 4500 + 1200000 << endl;
    }
    return 0;
    
}
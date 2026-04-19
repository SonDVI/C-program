
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i <= n; i += 3) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i *= 2) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = n; ; i++) {
        if (i % 17 == 0) {
            cout << i << " ";
            break;
        }
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--) {
        if (i % 7 == 0) {
            cout << i << " ";
            break;
        }
    }
    cout << endl;
    int num = 1;
    int step = 1;
    while (num <= n) {
        cout << num << " ";
        num += step;
        step++;
    }
    cout << endl;
    return 0;
}
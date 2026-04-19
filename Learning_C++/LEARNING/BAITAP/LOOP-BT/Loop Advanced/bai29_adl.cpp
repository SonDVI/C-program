
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll sum = 0;
    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 0) {
            sum += x;
        }
    }
    cout << sum << endl;
    return 0;
}
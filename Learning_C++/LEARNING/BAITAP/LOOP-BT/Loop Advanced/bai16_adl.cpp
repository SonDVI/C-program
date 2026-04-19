
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    int a = 0;
    ll dem = 0;
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    while (n != 0) {
        a = n % 10;
        dem++;
        n /= 10;
    }
    cout << dem << endl;
    return 0;
}
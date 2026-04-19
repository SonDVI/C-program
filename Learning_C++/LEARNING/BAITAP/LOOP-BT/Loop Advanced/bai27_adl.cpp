//Tính tổng S(n) = 1 + 1.2 + 1.2.3 + 1.2.3.4 + ... + 1.2.3....n
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll tich = 1;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        tich = 1;
        for (int j = 1; j <= i; j++) {
            tich *= j;
        }
        sum += tich;
    }
    cout << sum << endl;
}
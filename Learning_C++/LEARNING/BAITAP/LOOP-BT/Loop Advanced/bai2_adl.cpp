//Nhập vào giá trị của n không quá 10^6, tính tổng các số nguyên dương không vượt quá n chia hết cho 3.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
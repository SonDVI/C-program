// Bài 4: Tính tổng S = 1/2 + 1/4 + 1/6 + ... + 1/(2n)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    double sum = 0;
    for (int i = 1; i <= n * 2; i++) {
        if (i % 2 == 0) {
            sum += 1.0 / i;
        }
    }
    cout << fixed << setprecision(5) << sum << endl;
    return 0;
}
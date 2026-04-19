// Bài 3: Tính tổng S = 1 + 1/2 + 1/3 + ... + 1/n
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(3) << sum << endl;
    return 0;   
}
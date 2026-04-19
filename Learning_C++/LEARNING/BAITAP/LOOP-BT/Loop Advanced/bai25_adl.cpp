//Cho số nguyên dương N, bạn hãy tính tổng : S(N) = 1/0! + 1/1! + 1/2! + 1/3! +... + 1/(N - 1)!. Trong đó ! là kí hiệu của giai thừa
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll tich = 1;
    double sum = 0;
    for (int i = 1; i <= n - 1; i++) {
        tich = 1;
        for (int j = 1; j <= i; j++) {
            tich *= j;
        }
        sum += 1.0 / tich;

    }
    cout << fixed << setprecision(4) << sum + 1.0 << endl;
    return 0;
}
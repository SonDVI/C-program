//Tính giá trị của biểu thức e = 1 + 1 / 1! + 1 / 2! + 1 / 3! + ... + 1 / N!
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    double sum = 0;
    double tich = 1;
    for (int i = 1; i <= n; i++) {
        tich = 1;
        for (int j = 1; j <= i; j++) {
            tich *= j;
            
        }
        sum += 1.0 / tich;
    }
    cout << fixed << setprecision(2) << sum + 1 << endl;
    return 0;
}


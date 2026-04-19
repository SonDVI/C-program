//Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll dem = 0;
    ll digit = 0;
    while (n != 0) {
        digit = n % 10;
        if (digit == 2) {
            dem ++;
        }
        if (digit == 3) {
            dem ++;
        }
        if (digit == 5) {
            dem ++;
        }
        if (digit == 7) {
            dem ++;
        }

        n /= 10;
    }
    cout << dem << endl;
    return 0;
}
//Cho số nguyên không âm N bạn hãy kiểm tra xem chữ số đầu tiên của N có phải là số lớn nhất trong mọi chữ số của N hay không.

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
    ll n ; cin >> n;
    ll temp = n;
    while (n >= 10) {
        n /= 10;
    }
    ll first_diggit = n;
    ll current_diggit = 0;
    ll max_diggit = 0;

    while (temp != 0) {
        current_diggit = temp % 10;
        if (current_diggit > max_diggit) {
            max_diggit = current_diggit;
        }
        temp /= 10;
    }
    if (first_diggit == max_diggit) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
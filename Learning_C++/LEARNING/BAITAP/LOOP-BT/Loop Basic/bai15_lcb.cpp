//Cho số nguyên N, hãy kiểm tra nếu tất cả các chữ số của N là số chẵn thì in ra 28tech, ngược lại in ra 29tech.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll current_diggit = 0;
    ll dem2 = 0;
    ll demn = 0;
    while (n != 0) {
        current_diggit = n % 10;
        if (current_diggit % 2 == 0) {
            dem2++;
        }
        demn++;
        n /= 10;
    }

    if (dem2 == demn) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

}
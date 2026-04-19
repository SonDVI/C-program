//Cho số nguyên N, hãy đếm xem mỗi chữ số nguyên tố (2, 3, 5, 7) của N xuất hiện bao nhiêu lần và in ra theo thứ tự từ bé đến lớn, nếu chữ số nào không xuất hiện thì không in
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll current_diggit = 0;
    ll dem2 = 0; ll dem3 = 0; ll dem5 = 0; ll dem7 = 0;
    while (n != 0) {
        current_diggit = n % 10;
        if (current_diggit == 2) {
            dem2++;
        }
        else if (current_diggit == 3) {
            dem3++;
        }
        else if (current_diggit == 5) {
            dem5++;
        }
        else if (current_diggit == 7) {
            dem7++;
        }
        n /= 10;
    }
    if (dem2 > 0) {
        cout << "2 " << dem2 << endl;
    }
    if (dem3 > 0) {
        cout << "3 " << dem3 << endl;
    }
    if (dem5 > 0) {
        cout << "5 " << dem5 << endl;
    }
    if (dem7 > 0) {
        cout << "7 " << dem7 << endl;
    }
    
    return 0;
}

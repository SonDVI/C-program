/*
Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8.

Hãy liệt kê các số đẹp trong đoạn giữa 2 số nguyên a, b cho trước
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool thuan_nghich(int n) {
    int res = 0;
    int b = n;
    while (n != 0) {
        res = 10 * res + n % 10;
        n /= 10;
    }
    return res == b;
}

bool so(int n) {
    int dem = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == 6) {
            dem++;
        }
        n /= 10;
    }
    return dem >= 1;
}

bool tongcs_bang8(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum % 10 == 8;
}

int main() {
    int a, b; cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (thuan_nghich(i) && so(i) && tongcs_bang8(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
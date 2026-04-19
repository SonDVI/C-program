/*
Một số được coi là số đẹp nếu tổng của nó và số lật ngược của nó là một số nguyên tố, bạn hãy liệt những số đẹp như vậy trong đoạn [a, b]

Ví dụ số 116 là một số đẹp vì 116 + 611 = 727 là một số nguyên tố, số 10 cũng là 1 số đẹp vì 10 + 1 = 11 là một số nguyên tố
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool nt(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return n > 1;

}

bool tong_thuannghich(int n) {
    if (n == 0) {
        return false;
    }
    int res = 0;
    int b = n;
    while(n != 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    int sum = res + b;
    return nt(sum);
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(tong_thuannghich(i)) {
            cout << i << " ";
        }
    }
}
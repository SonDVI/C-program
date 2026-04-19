/*
Một số được coi là số siêu nguyên tố nếu nó là số nguyên tố và khi bạn lần lượt bỏ các chữ số bên phải của nó đi thì nó vẫn là 1 số nguyên tố.

Ví dụ số 317 là một số siêu nguyên tố vì 317 là số nguyên tố, 31 (bỏ 7) là số nguyên tố, 3(bỏ tiếp số 1) là số nguyên tố. Hãy liệt kê những số siêu nguyên tố trong đoạn [a, b].*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool nt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool sieu_nto(int n) {
    if (n == 0) {
        return false;
    }
    while (n != 0) {
        if(nt(n)) {
            n /= 10;
        }
        else {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b; cin >> a >> b;
    bool found = false;
    for(int i = a; i <= b; i++) {
        if(sieu_nto(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (found == false) {
        cout << "28tech" << endl;
    }
    return 0;
}
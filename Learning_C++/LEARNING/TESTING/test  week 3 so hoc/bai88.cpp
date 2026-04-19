/* Một số được coi là số đẹp nếu nó là số nguyên tố và có tổng chữ số của nó là một số thuận nghịch, bạn hãy liệt kê những số đẹp như vậy trong đoạn [a, b].

Ví dụ số 29 là số đẹp vì nó là số nguyên tố, đồng thời tổng chữ số của nó là 11 là một số thuận nghịch.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool nto(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}
bool thuannghich(int n) {
    int res = 0;
    int b = n;
    while (n != 0) {
        res = res * 10 +  n % 10;
        n /= 10;
    }
    return res == b;
}

bool tongso_bang_thuannghich(int n) {
    int sum = 0;
    while(n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return thuannghich(sum);
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(nto(i) && tongso_bang_thuannghich(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
/*Một số được coi là số đẹp nếu tổng các ước của nó là một số có tổng các chữ số có tận cùng là một số nguyên tố. Bạn hãy liệt kê những số đẹp như vậy trong đoạn giữa 2 số [a, b].

Ví dụ số 20 là một số đẹp vì nó có tổng các ước là : 1 + 2 + 4 + 5 + 10 + 20 = 42 có tận cùng là 2 là một số nguyên tố.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool so_dep(int n) {
    if (n == 0) {
        return false;
    }
    int sum = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            sum += i;
            if(i != n / i) {
                sum += n / i;
            }
        }
    }
    int so_cuoi = sum % 10;
    return so_cuoi == 2|| so_cuoi == 3|| so_cuoi == 5 || so_cuoi == 7;

}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(so_dep(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
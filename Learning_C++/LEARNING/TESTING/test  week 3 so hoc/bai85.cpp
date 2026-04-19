/*Một số được gọi là số Armstrong nếu ta tính tổng các lũy thừa với cơ số là các chữ số của nó với số mũ là số chữ số của nó ta được 1 số bằng với số ban đầu.

Ví dụ số 153 là số Armstrong ví 1^3 + 5^3 + 3^3 = 153

1634 cũng là số Armstrong vì 1^4 + 6^4 + 3^4 + 4^4 = 1634

Bạn hãy liệt kê các số Armstrong trong đoạn giữa 2 số a, b.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool armstrong_num(int n) {
    int dem = 0;
    int temp = n;
    int temp1 = n;

    while (temp != 0) {
        dem++;
        temp /= 10;
    }
    int sum = 0;
    while(temp1 != 0) {
        int digit = temp1 % 10;
        sum += (ll)pow(digit, dem);
        temp1 /= 10;
    }

    return sum == n;
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(armstrong_num(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
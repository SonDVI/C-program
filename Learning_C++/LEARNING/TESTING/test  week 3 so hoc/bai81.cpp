/*Một số tự nhiên được coi là hoàn hảo nếu các chữ số của nó tăng dần từ trái qua phải (ví dụ 123, 178, 223, 229, 137789….) và đồng thời nó cũng là một số nguyên tố. Bạn hãy liệt kê các số hoàn hảo như vậy trong đoạn giữa 2 số a, b.

Gợi ý : Khi kết hợp hàm nên gọi hàm kiểm tra số tăng trước khi gọi hàm nguyên tố*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

bool sotang(int n) {
    while(n != 0) {
        int digit = n % 10;
        if (n >= 100) {
            int digit1 = n % 100 / 10;
            if (digit < digit1) {
                return false;
            }
        }
        else {
            int digit2 = n / 10;
            if (digit < digit2) {
                return false;
            }
        }
        n /= 10;
    }
    return true;
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (sotang(i) && nt(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
//Hãy liệt kê các cặp số nguyên tố cùng nhau và có giá trị khác nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.

//2 số được coi là nguyên tố cùng nhau nếu ước chung lớn nhất là 1.
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int ucln(int a, int b) { //thuat toan Euclid tim ucln cua 2 so a va b.
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        for (int j = i + 1; j <= b; j++) {
            if (ucln(i,j) == 1) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
}
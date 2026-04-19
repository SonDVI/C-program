// Cho dãy số S(n) = 1 + 2 + 3 + …. + n Nếu kết quả của S(n) có chữ số tận cùng là 1 số nguyên tố hãy in ra 28tech, ngược lại in ra 29tech.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (long long)i;
    }
    int so_cuoi = sum % 10;
    if (so_cuoi == 2 || so_cuoi == 3 || so_cuoi == 5 || so_cuoi ==7) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
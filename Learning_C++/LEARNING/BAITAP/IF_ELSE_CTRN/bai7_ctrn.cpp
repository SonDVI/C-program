//Cho 2 số nguyên a và b. Bạn hãy tìm 2 số sau, số thứ 1 là số lớn nhất <= a mà chia hết cho b, số thứ 2 là số nhỏ nhất >=a mà chia hết cho b. Chú ý các bạn không được dùng vòng lặp.
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int k = a - (a % b);
    cout << k << endl;
    
    if (a % b == 0) {
        cout << a << endl;
    }
    else {
        cout << a + (b - a % b) << endl;
    }

    return 0;
}
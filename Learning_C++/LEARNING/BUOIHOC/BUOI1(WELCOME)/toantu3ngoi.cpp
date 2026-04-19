//TOAN TU 3 NGÔI

#include <iostream>

using namespace std;

int main() {
    int x = true ? 100 : 200; // toán tử 3 ngôi, nếu điều kiện true thì x sẽ nhận giá trị 100, ngược lại nếu false thì x sẽ nhận giá trị 200. Kết quả sẽ là x = 100.

    int y = 10 < 20 ? 1 : 0; // điều kiện 10 < 20 là true, nên y sẽ nhận giá trị 1. Kết quả sẽ là y = 1.
    cout << x << endl; // in ra giá trị của x, kết quả sẽ là 100.
    cout << y << endl; // in ra giá trị của y, kết quả sẽ là 1.
    return 0;
}
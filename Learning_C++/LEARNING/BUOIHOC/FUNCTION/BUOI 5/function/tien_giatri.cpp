#include <iostream>
using namespace std;
using ll = long long;

void thaydoi1(int x) {
    x = 1000;
}

void thaydoi2(int &x) { 
    // Tham chiếu, truyền tham chiếu, truyền địa chỉ, truyền con trỏ.
    x = 1000;
}

int main() {
    int n = 50;
    thaydoi1(n);
    cout << n << endl; // Kết quả vẫn là 50, vì hàm thaydoi1 chỉ thay đổi giá trị của biến x trong phạm vi của hàm, không ảnh hưởng đến biến n trong hàm main.

    thaydoi2(n);
    cout << n << endl; // Kết quả là 1000, vì hàm thaydoi2 thay đổi giá trị của biến x thông qua tham chiếu, nên ảnh hưởng đến biến n trong hàm main.
    return 0;

}
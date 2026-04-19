#include <iostream>
using namespace std;
//parameter: tham số
void ham1(int x, double y, char z) {
    cout << x << " " << y << " " << z << endl;
}

int main() {
    ham1(10, 28.5, '@'); //Argument: đối số

    int a = 10; float b = 20;
    char kitu = 'A';
    ham1(a, b, kitu); // hàm chỉ được truyền đúng kiểu dữ liệu đã khai báo, không truyền thừa hay thiếu tham số, truyền đúng thứ tự tham số đã khai báo.

    ham1('A', 100, 65); // Trường hợp này giá trị nhập vào sẽ bị ép về kiểu dữ liệu của hàm void. Ép chỉ ép kiểu dữ liệu từ nhỏ hơn sang lớn hơn.
    return 0;
}
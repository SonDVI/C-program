//ASCII TABLE

#include <iostream>

using namespace std;

int main() {
    char c = 'A';
    cout << c << endl;
    cout << int(c) << endl; // ép kiểu char sang int, nó sẽ trả về mã ASCII của ký tự đó. Mã ASCII của 'A' là 65, nên kết quả sẽ là 65.

    c += 32; // tăng giá trị của c lên 32, vì trong bảng ASCII, khoảng cách giữa chữ hoa và chữ thường là 32. Nên sau khi thực hiện phép toán này, c sẽ trở thành 'a'.
    cout << c << endl; // in ra giá trị của c, kết quả sẽ là 'a'.
}
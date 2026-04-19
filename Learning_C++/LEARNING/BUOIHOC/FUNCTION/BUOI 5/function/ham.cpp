/*
                    HÀM

- LỢI ÍCH :

    + Code trở nên mạnh lạc, dễ đọc.

    + Dễ debug khi gặp lỗi.

    + Dễ bảo trì khi cần thay đổi một chúc năng nhỏ.

    + Tái sử dụng lại code, tránh việc viết đi viết lại một đoạn code giống nhau nhiều lần.

    + Phân chia công việc khi làm việc nhóm, mỗi người có thể đảm nhận một chức năng riêng biệt.

- SYNTAX:


    return_type functionName (parameter1, parameter2, ...) {

    // body of the function

    return value; // nếu có giá trị trả về
    }


    - return_type: kiểu trả về của hàm (int, double, bool, void,...).
    - functionName: tên của hàm.
    - parameter1, parameter2, ...: các tham số đầu vào của hàm.
    - body of the function: Các câu lệnh trong hàm.

    *TRONG MỘT HÀM CHỈ CÓ THỂ RETURN 1 LẦN, SAU RETURN HÀM SẼ DỪNG.
*/

#include <iostream>
using namespace std;
using ll = long long;

void ham1() {
    // Hàm void là hàm không trả về giá trị, có thể có tham số hoặc không có tham số. muốn dừng hàm void thì dùng return, nhưng không có giá trị trả về sau return.
    cout << "Xin chao 28tech" << endl;
    cout << "Ham void" << endl;
    cout << "28tech.com.vn" << endl;
}

int main() { //Hàm thực thi, hàm chính xuất ra terminal.

    ham1();
    // Gọi hàm ham1 để thực thi các câu lệnh trong hàm ham1. nếu cout << ham1(); thì sẽ bị lỗi vì hàm ham1 là hàm void, không có giá trị trả về nên không thể in ra được. Với hàm khác sẽ thực hiện lệnh và return giá trị.
    return 0;
}
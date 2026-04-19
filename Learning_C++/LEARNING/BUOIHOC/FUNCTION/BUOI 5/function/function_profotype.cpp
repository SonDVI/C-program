#include <iostream>
using namespace std;
using ll = long long;
//Function prototype: khai báo trước hàm, để có thể gọi hàm trước khi định nghĩa hàm. Nếu không khai báo trước hàm thì phải định nghĩa hàm trước khi gọi hàm, nếu không sẽ bị lỗi. Khi khai báo trước hàm thì chỉ cần viết tên hàm, kiểu trả về và tham số (nếu có), không cần viết thân hàm. Khi định nghĩa hàm thì phải viết đầy đủ thân hàm.
void Z();
void K();

void X() {
    // Để X trước để compiler đọc X trước, nếu để Y trước thì sẽ bị lỗi vì compiler chưa đọc X nên không biết X là gì.
    cout << "A" << endl;
}

void Y() {
    cout << "B" << endl;
    X();
    cout << "C" << endl;
    X();
}
int main() {
    Y();
    return 0;
}
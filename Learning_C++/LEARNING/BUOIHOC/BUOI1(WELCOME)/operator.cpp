//Operator

//Toán tử: là một ký hiệu hoặc một từ khóa được sử dụng để thực hiện các phép toán trên các toán hạng (operands). Toán tử có thể là toán tử số học, toán tử so sánh, toán tử logic, v.v.

/*
 Các loại toán tử phổ biến trong C++:

1. Toán tử gán (=): dùng để gán giá trị cho biến. EX: int x = 5; (gán giá trị 5 cho biến x).

2. Toán tử số học :
+ : phép cộng, EX: 5 + 3 = 8

- : phép trừ, EX: 5 - 3 = 2

* : phép nhân, EX: 5 * 3 = 15

/ : phép chia, EX: 5 / 3 = 1 (kết quả là phần nguyên của phép chia)


% : phép chia lấy dư, EX: 5 % 3 = 2 (kết quả là phần dư của phép chia) 

3. Toan tu gan ket (+=, -=, *=, /=, %=): dùng để thực hiện phép toán và gán kết quả cho biến. EX: x += 5; (tương đương với x = x + 5;).
*/

//floor division: nguyen / nguyen = nguyen.

//ep kieu du lieu: khi thực hiện phép toán giữa hai toán hạng có kiểu dữ liệu khác nhau, C++ sẽ tự động ép kiểu dữ liệu của toán hạng có kiểu dữ liệu nhỏ hơn sang kiểu dữ liệu lớn hơn để đảm bảo tính chính xác của kết quả. EX: int + double = double, long long + int = long long, v.v.

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int x = 100, y = 30;
    double q = x / y; // 100 / 30 = 3.0
    double p = double(x) / y; // ép kiểu x sang double trước khi thực hiện phép chia, nên kết quả sẽ là 3.33333...
    cout << q << endl;
    cout << p << endl;
    return 0;
}
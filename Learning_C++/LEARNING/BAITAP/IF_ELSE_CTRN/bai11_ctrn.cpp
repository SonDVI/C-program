// /Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
//Enum : tập hợp những hằng số có tên, có thể dùng để định nghĩa kiểu dữ liệu mới. Ví dụ: enum TamGiac {DEU, CAN, VUONG, THUONG}; thì DEU sẽ có giá trị là 0, CAN sẽ có giá trị là 1, VUONG sẽ có giá trị là 2, THUONG sẽ có giá trị là 3. Khi đó chúng ta có thể sử dụng các hằng số này để kiểm tra loại tam giác mà không cần phải nhớ giá trị của chúng.

enum TriangleType {
    TAM_GIAC_DEU = 1,
    TAM_GIAC_CAN = 2,
    TAM_GIAC_VUONG = 3,
    TAM_GIAC_THUONG = 4
};  
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    TriangleType triangle;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            triangle = TAM_GIAC_DEU;
        }
        else if (a == b || a == c || c == b) {
            triangle = TAM_GIAC_CAN;
        }

        else if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2))) {
            triangle = TAM_GIAC_VUONG;
        }

        else {
            triangle = TAM_GIAC_THUONG;
        }
        cout << triangle << endl;
    }
    else {
        cout << "INVALID" << endl;
    }
    return 0;
}
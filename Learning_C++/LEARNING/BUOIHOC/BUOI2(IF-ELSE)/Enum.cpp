//ENUM

//Enum : tập hợp những hằng số có tên, có thể dùng để định nghĩa kiểu dữ liệu mới. Ví dụ: enum TamGiac {DEU, CAN, VUONG, THUONG}; thì DEU sẽ có giá trị là 0, CAN sẽ có giá trị là 1, VUONG sẽ có giá trị là 2, THUONG sẽ có giá trị là 3. Khi đó chúng ta có thể sử dụng các hằng số này để kiểm tra loại tam giác mà không cần phải nhớ giá trị của chúng. 1 simple example of class.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    enum TriangleType {
        TAM_GIAC_DEU = 1,
        TAM_GIAC_CAN = 2,
        TAM_GIAC_VUONG = 3,
        TAM_GIAC_THUONG = 4
    };
}
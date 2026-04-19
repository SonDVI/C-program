//Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?

//Gợi ý : Điều kiện để a, b, c tạo thành 3 cạnh của 1 tam giác là a, b, c đều là só dương và tổng 2 cạnh lớn hơn cạnh còn lại => Viết 6 điều kiện nhỏ và sử dụng toán tử AND để kết hợp.
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;

}
/*Cho ba số nguyên x, y, z, bạn hãy viết các câu lệnh điều kiện để kiểm tra các điều kiện dưới đây, đối với mỗi điều kiện nếu đúng thì bạn hãy in ra 28tech, sai bạn in ra 29tech.

1.x y z là ba số giống nhau

2.x và y có cùng tính chất chẵn lẻ (cùng chẵn hoặc cùng lẻ)

3.Số lớn nhất trong 3 số này chia hết cho 3

4.Tổng 2 số nhỏ hơn số còn lại

5.Tích 3 số có chữ số hàng đơn vị là 1 số nguyên tố

6.x y z là 3 số khác nhau (không tồn tại 2 hoặc 3 số giống nhau)

7.x y z là 3 số có cùng tính chất chẵn lẻ (tất cả đều là số chẵn hoặc tất cả đều là số lẻ )

8.Số lớn nhất và nhỏ nhất trong 3 số có tổng là một số chia hết cho 3 hoặc 5.

9.|x - y| = |y - z| . (Trị tuyệt đối)

10.x * y > z^2 ?*/
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    long long x, y, z; cin >> x >> y >> z;

    if (x == y && y == z) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if ((x % 2 == 0 && y % 2 == 0) || (x % 2 != 0 && y % 2 != 0)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if (max({x, y, z}) % 3 == 0) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if ((max({x, y, z}) == x && y + z < x) || (max({x, y, z}) == y && x + z < y) || (max({x, y, z}) == z && x + y < z)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if ((x * y * z) % 10 == 2 || (x * y * z) % 10 == 3 || (x * y * z) % 10 == 5 || (x * y * z) % 10 == 7) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if (x != y && y != z && x != z) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if ((x % 2 == 0 && y % 2 == 0 && z % 2 == 0) || (x % 2 != 0 && y % 2 != 0 && z % 2 != 0)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if (((max({x, y, z}) + min({x, y, z})) % 3 == 0) || ((max({x, y, z}) + min({x, y, z})) % 5 == 0)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if (abs(x - y) == abs(y - z)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    if (x * y > z * z) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
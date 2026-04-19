//Có nhiều khoảng cách giữa 2 điểm trong hệ tọa độ ví dụ như khoảng cách Manhattan, Euclid, Minkowski. Nhưng trong chương trình toán phổ thông các bạn sử dụng nhiều nhất là khoảng cách Euclid.Vì vậy bạn hãy tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    cout << fixed << setprecision(2) << d << endl;
    return 0;
}
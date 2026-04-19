//Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32. Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. In ra kết quả với 2 chữ số sau dấu phẩy thập phân

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int c;
    cin >> c;
    double f = ((double)c * 9 / 5) + 32;

    cout << fixed << setprecision(2) << f << endl;
    return 0;
}
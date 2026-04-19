//Cho bán kính R của hình tròn. Yêu cầu tính chu vi và diện tích của hình tròn đó. Lấy PI = 3.14


#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int r;
    cin >>  r;
    const double pi = 3.14;

    double p = 2 * pi * r;
    double s = pi * r * r;

    cout << fixed << setprecision(4) << p << " " << s << endl;

    return 0;

}
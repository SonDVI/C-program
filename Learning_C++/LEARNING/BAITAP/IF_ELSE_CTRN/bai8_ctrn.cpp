//Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương(lấy độ chính xác với 4 chữ số) của 2 số đó.

//Bài này có thể bị sai do 2 nguyên nhân : 1. Khi tính tích bị tràn số, 2. Độ chính xác của thương.

#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    long long sum = a + b;
    long long tru = a - b;
    long long mul = a * b;

    cout << sum << "\n" << tru << "\n" << mul << endl;

    if (b != 0) {
        double divide = (double)a / b;
        cout << fixed << setprecision(4) << divide << endl;
    }
    else {
        cout << "INVALID" << endl;
    }
}
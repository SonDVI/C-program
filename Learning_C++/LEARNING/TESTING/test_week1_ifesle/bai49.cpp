//Cho biết thu nhập của lập trình viên Tèo, bạn hãy xác định được thu nhập sau thuế và tiền thuế phải đóng của Tèo. Thuế thu nhập cá nhân được cho như sau :
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    long long thu_nhap;
    long long thue;
    if (n <= 5000000) {
        thue = n * 5 / 100;
        thu_nhap = n - thue;
    }
    else if (n <= 10000000) {
        thue = n * 10 / 100;
        thu_nhap = n - thue;
    }
    else if (n <= 18000000) {
        thue = n * 15 / 100;
        thu_nhap = n - thue;
    }
    else if (n <= 32000000) {
        thue = n * 20 / 100;
        thu_nhap = n - thue;
    }
    else if (n <= 52000000) {
        thue = n * 25 / 100;
        thu_nhap = n - thue;
    }
    else if (n <= 80000000) {
        thue = n * 30 / 100;
        thu_nhap = n - thue;
    }
    else {
        thue = n * 35 / 100;
        thu_nhap = n - thue;
    }
    cout << "Thu nhap : " << thu_nhap << " VND" << endl;
    cout << "Thue : " << thue << " VND" << endl;

}
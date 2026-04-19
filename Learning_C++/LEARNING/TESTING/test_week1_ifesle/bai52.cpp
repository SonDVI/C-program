//Cho số tự nhiên N, 28tech muốn bạn tính kết quả của phép tính : 1%28 + 2%28 + 3%28 + …. + N%28 và in kết quả ra màn hình.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    long long so_chu_ki = n / 28;
    long long so_du = n % 28;

    long long tong = so_chu_ki * 378 + (so_du * (so_du + 1)) / 2; 
    cout << tong << endl;
    return 0;
}
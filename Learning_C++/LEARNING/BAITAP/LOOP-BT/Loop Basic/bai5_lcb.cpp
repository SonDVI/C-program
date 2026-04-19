//Cho số nguyên không âm N, bạn hãy in ra chữ số đầu tiên và cuối cùng của N bằng cách sử dụng vòng lặp while.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
    ll n; cin >> n;
    ll so_cuoi = n % 10;
    while (n >= 10) {
        n /= 10;
    }
    cout << n << " " << so_cuoi << endl;
    return 0;
}
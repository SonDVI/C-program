//Cho số nguyên dương không âm N, ở mỗi thao tác bạn thực hiện tính tổng các chữ số của N sau đó gán lại cho N, thao tác này được thực hiện cho tới khi N chỉ còn 1 chữ số.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    while (n > 0) {

    int digit = n % 10;
    sum += digit;
    n /= 10;

    }
    if (sum >= 10) {
        ll sum1 = 0;
        while (sum >= 10) {
            int digit = sum % 10;
            sum1 = digit + sum / 10;
            sum = sum1;
        }
        cout << sum << endl;
    }
    else {
        cout << sum << endl;
    }
}
//Một số được gọi là lộc phát nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không.

//Nếu đúng in ra 1, sai in ra 0.
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool check(ll n) {
    while (n != 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 6 && digit != 8) {
            return false;
        }
        n /= 10;
    }
    return true;
}
int main() {
    ll n; cin >> n;
    if(check(n)) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
}
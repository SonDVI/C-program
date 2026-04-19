//Nhập vào n, tính tổng các chữ số của n, và in ra kết quả
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll sum = 0;
    ll digit = 0;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout << sum << endl;
    
    
}
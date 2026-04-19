/*
Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên không âm a và b

Gợi ý : Khi tìm BCNN nên lấy a / UCLN * b tránh lấy a * b / UCLN vì a, b tới 10^12 có thể bị tràn long long khi nhân
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
    while(b > 0) {
        ll res = a % b;
        a = b;
        b = res;
    }
    return a;
}
ll lcm(ll a, ll b) {
    ll c = gcd(a, b);
    ll bcnn = 0;

    return bcnn = a / c * b;
}
int main() {
    ll a, b; cin >> a >> b;
    cout << gcd(a, b) << " " << lcm(a, b) << endl;
}
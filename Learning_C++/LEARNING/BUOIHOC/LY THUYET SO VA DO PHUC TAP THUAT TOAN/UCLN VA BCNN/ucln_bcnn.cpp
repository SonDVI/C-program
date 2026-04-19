/*
giải thuật Euclid

        - ucln (a, b) = ucln (b, a % b) ( chia cho den khi b = 0) thi ucln la kết quả tồn tại cuối cùng.

        VD: (14, 35) = (35, 14) = (14, 7) = (7, 0) --> UCLN(14, 35) = 7
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
//O(log n)
ll gcd (ll a, ll b) {
    while (b > 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

//cach nay cham hon cach tren.
ll gcd2(ll a, ll b) {
    if (a == 0 && b == 0) return a + b;
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}


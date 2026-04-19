/*
Kiểm tra xem một số có số lượng ước số của nó là số lẻ.

Gợi ý : số có số lượng ước là số lẻ chính là số chính phương
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
bool checkcp(ll n) {
    ll can = sqrt(n);
    return can * can == n;
}
int main() {
    ll n; cin >> n;
    if (checkcp(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
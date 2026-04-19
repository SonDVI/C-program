/*Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x.

Ví dụ với N = 10, p = 3 thì x = 4 là số lớn nhất để 10! Chia hết cho 3^4.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
//O(log(n))
ll lagender(ll n, ll p) {
    ll res = 0;
    for (ll i = p; i <= n; i *= p) {
        res += n / i;
    }
    return res;
}

int main() {
    ll n, p; cin >> n >> p; 
    cout << lagender(n, p) << endl;
    return 0;
}
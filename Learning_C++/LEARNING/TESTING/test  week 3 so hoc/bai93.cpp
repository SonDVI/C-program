/*Cho 4 số nguyên không âm a, b, c, d. Hãy tìm ước chung lớn nhất của 4 số này và in ra màn hình.*/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll uoc1 = gcd(a, b);
    ll uoc2 = gcd(c, d);
    cout << gcd(uoc1, uoc2) << endl;
}
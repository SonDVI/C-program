/*
In ra các số chính phương trong đoạn từ a tới b.

Gợi ý : Số chính phương có dạng i^2 => a <= i^2 <= b => √a <= i <= √b => Bạn chỉ cần duyệt từ √a tới √b và in ra bình phương của số i, khi đó sẽ không bị quá thời gian
*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;


int main() {
    ll a, b; cin >> a >> b;

    ll start = ceil(sqrt(a));
    ll end = floor(sqrt(b));

    for (ll i = start; i <= end; i++) {
        cout << i * i << " ";
    }
    return 0;
}
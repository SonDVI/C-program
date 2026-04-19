

#include <iostream>
using ll = long long;
using namespace std;

int sum_digit(ll n) {
    ll sum = 0;
    int digit = 0;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int main() {
    ll n; cin >> n;
    cout << sum_digit(n) << endl;
}

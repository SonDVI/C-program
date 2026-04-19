/*Cho mảng A[] gồm N phần tử, bạn hãy tính tích các phần tử trong mảng và in ra sau khi chia dư với số 10^9 + 7.*/

#include <iostream>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum = 1;
    for(int i = 0; i < n; i++) {
        sum = sum % mod * a[i] % mod;
        sum %= mod;
    }
    cout << sum << endl;
    return 0;
}
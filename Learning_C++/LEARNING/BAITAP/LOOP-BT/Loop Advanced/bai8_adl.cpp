// Bài 8: liet ke so chinh phuong nho hon hoac bang n
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    
    for (ll i = 1; i <= sqrt(n); i++) {
        cout << (ll)pow(i, 2) << " ";
    }
    return 0;
}
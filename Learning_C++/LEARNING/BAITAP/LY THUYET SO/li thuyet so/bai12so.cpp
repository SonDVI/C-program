//Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
using ll = long long;

void phantich(ll n) {
    bool first = true;
    ll dem = 0;

    while (n % 2 == 0) {
        n /= 2;
        dem++;
    }
    if (dem > 0) {
        cout << 2 << "^" << dem;
        
        first = false;
    }

    for (ll i = 3; i * i <= n; i += 2) {
        dem = 0;
        while (n % i == 0) {
            n /= i;
            dem++;
        }
        if (dem > 0) {
            if (!first) cout << " * ";
            cout << i << "^" << dem;
            
            first = false;
        }
    }
    if (n > 1) {
        if (!first) cout << " * ";
        
        cout << n << "^" << 1;
    }
}
int main() {
    ll n; cin >> n;
    phantich(n);
    
    return 0;
}
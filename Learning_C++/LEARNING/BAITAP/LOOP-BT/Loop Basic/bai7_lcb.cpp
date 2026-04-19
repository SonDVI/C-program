//Cho số nguyên không âm N, bạn hãy in ra chữ số lớn nhất của N.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll max_diggit = 0;
  

    while (n != 0) {
        ll current_diggit = n % 10;
        if (current_diggit > max_diggit) {
            max_diggit = current_diggit;
        }
        n /= 10;
    }

    cout << max_diggit << endl;
    return 0;
}

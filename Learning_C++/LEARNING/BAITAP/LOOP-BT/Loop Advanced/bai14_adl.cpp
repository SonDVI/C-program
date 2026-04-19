
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (ll)pow(i, 3);
    }
    cout << sum << endl;
}
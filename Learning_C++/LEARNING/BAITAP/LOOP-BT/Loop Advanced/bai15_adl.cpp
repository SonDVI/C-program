
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll tich = 1;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    cout << tich << endl;
}
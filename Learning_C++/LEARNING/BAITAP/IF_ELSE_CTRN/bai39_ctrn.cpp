#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int k = max({a, b, c});
    int l = min({a, b, c});
    int mid = a + b + c - k - l;
    cout << l << " " << mid << " " << k << endl;

    return 0;
}
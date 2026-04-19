//Cho 4 số nguyên a, b, c, d. Hãy tìm số lớn nhất và nhỏ nhất trong 4 số này.

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max({a, b, c, d}) << endl;
    cout << min({a, b, c, d}) << endl;
    return 0;
}

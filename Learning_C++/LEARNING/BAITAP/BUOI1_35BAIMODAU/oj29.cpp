#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a = n % 10;
    long long b = n % 100 / 10;
    long long c = n % 1000 / 100;

    cout << max({a, b, c}) << endl;
    return 0;
}
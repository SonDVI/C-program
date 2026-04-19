#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    long double n;
    cin >> n;
    long double a = pow(n, 1 / 5.0);
    cout << fixed << setprecision(2) << a << endl;
    return 0;

}
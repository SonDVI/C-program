#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = n * 2;
    long long b = n * 10;
    long long c = n / 2;
    double d = (double)n / 2;
    cout << a << "\n\n" << b << "\n\n" << c << "\n\n";
    cout << fixed << setprecision(3) << d << endl;

    return 0;
}
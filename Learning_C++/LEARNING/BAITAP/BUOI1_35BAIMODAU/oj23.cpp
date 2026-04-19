#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = n / 500000;
    long long b = n % 500000;

    cout << a << endl;
    cout << b << endl;

    return 0;

}
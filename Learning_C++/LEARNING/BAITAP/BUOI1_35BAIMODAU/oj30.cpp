#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a = n % 10;
    long long b = n % 100 / 10;
    long long c = n % 1000 / 100;
    long long s = pow(10, a) + pow(5, b) + pow(3, c);
    cout << s << endl;
    return 0;
}
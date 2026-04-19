#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = n / 2 + 1;
    long long b = (n - 1) / 2 + 1;
    long long c = n / 3;
    long long d = (n - 1 - 1 + 1) / 14;   
    long long e = n / 2 + n / 7 - n / 14 + 1;
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << endl;
    
}
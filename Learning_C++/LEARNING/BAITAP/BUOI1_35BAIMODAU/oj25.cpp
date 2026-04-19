#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a = n / 3 + n / 5 - n /15;
    cout << a << endl;
    return 0;
}
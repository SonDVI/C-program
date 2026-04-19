#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    long long f =  5 * (long long)x + 2 * (long long)y + (long long)x * y;

    cout << f << endl;
    return 0;
}
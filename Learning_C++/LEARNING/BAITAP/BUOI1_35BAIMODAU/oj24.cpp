#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long double z = sqrt(pow((long double)x, 2) + pow((long double)y, 2));
    cout << fixed << setprecision(2) << z << endl;
    return 0;

    
}
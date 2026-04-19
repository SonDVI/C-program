#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int x, y;
    cin >> y >> x;

    int a = x / y;
    float b = (float)x / y;

    cout << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    return 0;
}
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    double s = sqrt(n);
    double c = cbrt(n);

    cout << fixed << setprecision(2) << s << endl;
    cout << fixed << setprecision(3) << c << endl;
}
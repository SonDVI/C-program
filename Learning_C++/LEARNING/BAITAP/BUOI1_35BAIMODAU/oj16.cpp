#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long x, y, z, t;
    cin >> x >> y >> z >> t;

    cout << x << "  " << y << "  " << z << "  " << t << "\n\n";
    cout << y << "--" << z << "--" << x << "--" << t << "\n\n";
    cout << x * 2 << "," << y * 3 << "," << z * 4 << "," << t * 5 << "\n\n";
    cout << "KET THUC !!" << endl;
    return 0;
}
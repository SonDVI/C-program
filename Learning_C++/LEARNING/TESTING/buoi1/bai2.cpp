#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int x;
    long long y;
    char c;
    float f;
    double d;
    cin >> x >> y >> c >> f >> d;
    cout << x << "\n" << y << "\n" << c << endl;
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(9) << d << endl;
    return 0;
}
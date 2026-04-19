#include <iostream>
#include <math.h>


using namespace std;

int main() {
    int x, y, z, t;
    cin >> x >> y >> z >> t;

    long long a = (long long)x + y + z + t;
    long long b = x - y + (long long)z * t;

    cout << y << "," << z << "," << x << "," << t << endl;
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}
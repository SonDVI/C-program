#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    float f;
    cin >> f;
    
    int a = (int)f;
    double b = f - a;
    
    cout << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    return 0;
}
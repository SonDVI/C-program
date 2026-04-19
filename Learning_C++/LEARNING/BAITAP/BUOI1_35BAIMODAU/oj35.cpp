#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int h, r;
    cin >> h >> r;
    double pi = 3.14;
    double volume = pi * pow((double)r, 2) * h;
    cout << fixed << setprecision(4) << volume << endl;
    
    return 0;
}
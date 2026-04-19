#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double x;
    cin >> x;
    long long tron1 = ceil(x);
    long long tron2 = floor(x);
    long long tron3 = round(x);

    cout << tron2 << "\n" << tron1 << "\n" << tron3 << endl;
    return 0;
}
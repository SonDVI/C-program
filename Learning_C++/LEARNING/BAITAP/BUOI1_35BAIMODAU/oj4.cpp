#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    long long a = pow((long long)x, y);
    cout << a << endl;

    return 0;
}
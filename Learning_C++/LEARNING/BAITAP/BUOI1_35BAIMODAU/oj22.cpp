#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a % 10;
    int y = b % 100;
    int z = c % 1000;
    int s = x + y + z;
    cout << s << endl;
    return 0;
}
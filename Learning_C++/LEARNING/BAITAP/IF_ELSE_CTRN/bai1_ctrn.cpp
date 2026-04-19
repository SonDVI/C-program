#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    long long a = (long long)pow(x, 3) + 3 * pow(x, 2) + x + 1;

    cout << a << endl;
    return 0;
}
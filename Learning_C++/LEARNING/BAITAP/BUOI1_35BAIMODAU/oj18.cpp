#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    long long s = (long long)a * 128 + 97 * (long long)b + 1000;
    

    cout << s << endl;
    return 0;
}
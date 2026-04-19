#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    long long s = (long long)a * b;
    long long p = (long long)a * 2 + (long long)b * 2;

    cout << "Chu vi HCN la : " << p << endl;
    cout << "Dien tich HCN la : " << s << endl;

    return 0;
}
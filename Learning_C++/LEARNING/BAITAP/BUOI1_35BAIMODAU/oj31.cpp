#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;
    bool check = n % 15 == 0;

    cout << boolalpha << check << endl;
    return 0;
}
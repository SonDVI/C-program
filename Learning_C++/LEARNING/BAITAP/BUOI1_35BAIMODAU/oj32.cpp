#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    bool check = n % 15 == 0 || n % 3 == 0 || n % 5 == 0 || n % 11 ==0 || n % 33 == 0 || n % 55 == 0 || n % 165 == 0;
    cout << boolalpha << check << endl;
    return 0;

}
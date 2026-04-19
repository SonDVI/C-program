#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    cout << setw(6) << setfill('0') << n << endl;
    cout << setw(6) << setfill('#') << n << endl;
    return 0;
}
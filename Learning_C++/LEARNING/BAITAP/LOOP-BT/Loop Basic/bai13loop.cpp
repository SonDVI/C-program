#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    long long sum = 0;
    if (n >= 0) {
        while (n != 0) {
            long long digit = n % 10;
            if (digit % 2 == 0) {
                sum += digit;
            }
            n /= 10;
        }
        cout << sum << endl;
    }
    else {
        cout << "NEGATIVE" << endl;
    }
    
}
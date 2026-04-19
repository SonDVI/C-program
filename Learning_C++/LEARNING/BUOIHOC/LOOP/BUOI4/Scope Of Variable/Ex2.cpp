#include <iostream>
using namespace std;

using ll = long long;

int main() {
    int n = 12345;//local scope.
    int sum = 0;// local scope.
    while (n != 0) {
        int sum = 0; // enclosing scope.
        sum += n % 10;
        n /= 10; // accessed to n in local scope.
    }
    cout << sum << " " << n << endl; // sum = 0, n = 0.
    return 0;
}
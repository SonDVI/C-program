#include <iostream>
using namespace std;

using ll = long long;

int main() {
    int n = 123456789;//local scope.
    while (n >= 9) {
        int tong = 0; // enclosing1 scope.
        while (n != 0) {
            tong += n % 10;// = 45 => next loop tong = 4 + 5 = 9.   
            n /= 10;
        }
        // after tong = 45, n = 0.
        // after loop2, tong = 9, n = 0.
        n = tong;// updated n = 45 => local scope. Next loop n = 9 => local scope.
        cout << n << endl;//Print n = 45. But 45 >= 9, so the loop will continue. and it will stand with value of 9.
    }
}
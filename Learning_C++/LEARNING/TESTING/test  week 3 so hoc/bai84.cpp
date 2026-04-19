
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
bool strong_numb(int n) {
    if (n == 0) {
        return false;
    }
    int tong = 0;
    int temp = n;
    while (n != 0) {
        int giaithua = 1;
        int digit = n % 10;
        for (int i = 1; i <= digit; i++) {
            giaithua *= i;
        }
        tong += giaithua;
        n /= 10;
    }
    return tong == temp;
}

int main() {
    int a, b; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(strong_numb(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
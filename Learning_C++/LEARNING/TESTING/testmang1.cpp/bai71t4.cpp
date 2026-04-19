/*Dãy số Tribonacci được định nghĩa như sau :

T1 = 0

T2 = 0

T3 = 1

T(n) = T(n - 1) + T(n - 2) + T(n - 3) với n >= 4

Những số Tribonacci đầu tiên : 0, 0, 1, 1, 2, 4, 7, 13, 24....

Nhiệm vụ của bạn là hãy in ra N số Tribonacci đầu tiên.*/
#include <iostream>
using namespace std;
using ll = long long;
ll T[50];

int main() {
    T[1] = 0;
    T[2] = 0;
    T[3] = 1;
    for(int i = 4; i <= 50; i++) {
        T[i] = T[i - 1] + T[i - 2] + T[i - 3];
    }

    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << T[i] << " ";
    }
    return 0;
}
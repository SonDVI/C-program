/*
Cho số nguyên dương N, hãy viết vòng lặp while để

1 : In ra các số nguyên dương chia hết cho 3 <= N (sử dụng bước nhảy = 3)

2 : In ra các số nguyên không âm chia hết cho cả 3 và 5 < N

3 : Số nhỏ nhất >= N chia hết cho 7 (sử dụng break và for khuyết điều kiện lặp)

4 : Số lớn nhất <= N chia hết cho 9 (sử dụng break)

5 : In ra dãy số : 1, 3, 5, 7, 9 .... 2N - 1
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int i = 1;

    while (i <= n) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
        i++;
    }

    cout << endl;
    i = 0;
    while (i < n) {
        if (i % 15 == 0) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
    for (int j = n; ; j++) {
        if (j % 7 == 0) {
            cout << j << " ";
            break;
        }
    }
    cout << endl;
    for (int k = n; ; k--) {
        if (k % 9 == 0) {
            cout << k << " ";
            break;
        }
    }
    cout << endl;
    for (int j = 1; j <= 2 * n - 1; j += 2) {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}
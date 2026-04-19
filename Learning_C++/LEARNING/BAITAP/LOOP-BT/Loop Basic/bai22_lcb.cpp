//Cho số nguyên N, bạn hãy tính tổng các ước của N là số chẵn


#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 == 0) {
                sum += (long long)i;
            }

        }
    }
    cout << sum << endl;
}
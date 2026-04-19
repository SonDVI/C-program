//cho số nguyên N, bạn hãy tính tổng các ước số của N
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    long long souoc = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            souoc += (long long)i;
        }
    }
    cout << souoc << endl;
    return 0;
}
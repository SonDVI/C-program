// số hoàn hảo là số có tổng các ước bằng chính nó. Ví dụ: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14. Hãy kiểm tra xem n có phải là số hoàn hảo hay không?

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0;

    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    sum -= n;

    if (sum == n) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
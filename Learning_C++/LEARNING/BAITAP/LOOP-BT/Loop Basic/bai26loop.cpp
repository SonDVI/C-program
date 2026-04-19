//Cho số nguyên N, số hoàn hảo được định nghĩa là số có tổng các ước thực sự (không tính chính nó) bằng nó. Ví dụ số 28 có các ước thực sự là 1, 2, 4, 7, 14 có tổng bằng 1 + 2 + 4 + 7 + 14 = 28 vì thế nó được coi là số hoàn hảo.Bạn hãy kiểm tra xem N có phải là số hoàn hảo hay không, nếu có hãy in 28tech, ngược lại in ra 29tech.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    long long sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
            }
        
    }
    if (sum == n) {
        cout << "28tech\n";
    }
    else {
        cout << "29tech\n";
    }
}
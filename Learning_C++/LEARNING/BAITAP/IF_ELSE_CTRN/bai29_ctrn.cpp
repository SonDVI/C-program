//Cho 4 số a, b, c, d. Hãy kiểm tra xem 4 số này có thể theo thứ tự tạo thành 1 cấp số nhân với công bội nguyên theo đúng thứ tự a, b, c, d hay không?

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * b == a * c && c * c == b * d) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
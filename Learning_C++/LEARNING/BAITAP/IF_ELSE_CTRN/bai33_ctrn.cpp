
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if ((a + b + c + n) % 3 == 0 && (a + b + c + n) / 3 >= max({a, b, c})) { //tong so xu sau chia phải chia hết cho 3 và mỗi người phải có số xu sau chia lớn hơn hoặc bằng số xu ban đầu của họ
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
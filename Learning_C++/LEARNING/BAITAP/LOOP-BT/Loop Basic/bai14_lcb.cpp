//Cho 2 số nguyên a, b (a có thể lớn hơn b), hãy liệt kê các số chia hết cho 2, 3, hoặc 5 trong đoạn a, b theo thứ tự tăng dần. Nếu trong đoạn a, b không có số nào thỏa mãn thì in ra 28tech.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    int a, b; cin >> a >> b;
    bool flag = false;
    for (int i = min({a, b}); i <= max({a, b}); i++) {
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
            cout << i << " ";
            flag = true;
        }
    }
    if (flag == false) {
        cout << "28tech" << endl;
    }
}
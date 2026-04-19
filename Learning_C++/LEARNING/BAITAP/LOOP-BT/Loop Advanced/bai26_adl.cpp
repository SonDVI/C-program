//Cho 3 số a, b, n. Nhiệm vụ của bạn là xác định xem phương trình ax + by = n có tồn tại cặp nghiệm (x, y) nguyên không âm hay không?
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int a, b, n; cin >> a >> b >> n;
    int dem = 0;

    for (int x = 0; x <= n / a; x++) {
        if ((n - a * x) % b == 0) {
            dem++;
            
        }
    }
    if (dem > 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
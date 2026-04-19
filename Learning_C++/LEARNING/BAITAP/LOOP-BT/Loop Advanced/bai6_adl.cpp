//Tính tổng ước của số nguyên dương N. Độ phức tạp mong đợi O(sqrt(N))
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;
//PHƯƠNG PHÁP TỐI ƯU TỔNG, SỐ ƯỚC CỦA N. ( tối ưu time )
int main() {
    ll n; cin >> n;
    ll sum = 0;
    for (ll i = 1; i <= sqrt(n); i++) {// Chỉ cần duyệt đến căn bậc hai của n, n = a * b. a và b là 2 ước của n, nếu a <= sqrt(n) thì b >= sqrt(n), ngược lại nếu a > sqrt(n) thì b < sqrt(n). Do đó, chỉ cần duyệt đến căn bậc hai của n để tìm tất cả các ước của n.
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
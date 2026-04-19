/*Dãy số 28Tech được định nghĩa như sau :

F[1] = 2

F[2] = 8

F[n] = 2 * F[n - 1] + 8 * F[n-2] với n >= 3

Dãy số 28Tech gồm những số đầu tiên là : 2, 8, 32, 128, 512, 2048 .....

Bạn hãy in ra số 28Tech thứ N sau khi chia dư cho 1000000007

Gợi ý : Làm tương tự như số Fibonacci, lưu dãy 28Tech vào mảng F[], tính trước mảng F tới số thứ 1000000, sau đó mỗi test nhập N thì in ra F[N], nhớ chia dư trong quá trình tính toán.*/
#include <iostream>
using namespace std;
using ll = long long;
ll F[1000001];
const ll mod = 1e9 + 7;
int main() {
    F[1] = 2;
    F[2] = 8;
    for(int i = 3; i < 1000001; i++) {
        F[i] = (2 * F[i - 1]) % mod + (8 * F[i - 2]) % mod;
        F[i] %= mod;
    }

    int t; cin >> t;
    int n = 0;
    for(int i = 1; i <= t; i++) {
        cin >> n;
        cout << F[n] << endl;
    }
    return 0;
}
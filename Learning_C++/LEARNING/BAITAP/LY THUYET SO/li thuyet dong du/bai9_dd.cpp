/*Con số mà 28Tech yêu thích là số là

X = 1782381238183812381823812381237127317237123717237123812231318231239123812831823126412412428.

Bạn hãy tìm kết quả của của X^N sau khi chia dư cho 100.
*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;


const ll mod = 100;

ll luythua(int n) {
    int x = 28;
    ll res = 1;
    while(n != 0) {
        if(n % 2 == 1) {
            res = res % mod * x % mod;
            res %= mod;
        }
        n /= 2;
        x = x % mod * x % mod;
        x %= mod;
    }
    return res;
}
int main() {
    int n; cin >> n;
    cout << luythua(n) << endl;
    return 0;
}
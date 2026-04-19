//Cho 3 số nguyên A, B, C, bạn hãy tính toán giá trị của biểu thức A^B^C % 1000000007.
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int luythua(int a, int b) {
    int res = 1;
    while(b != 0) {
        if(b % 2 == 1) {
            res = res % mod * a % mod;
            res %= mod;
        }
        b /= 2;
        a = a % mod * a % mod;
        a %= mod;
    }
    return res;
}
int main() {
    int a, b, c; cin >> a >> b >> c;
    cout << luythua(luythua(a, b), c) << endl;
}
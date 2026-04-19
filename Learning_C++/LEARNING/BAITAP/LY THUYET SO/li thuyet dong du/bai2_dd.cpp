/*Cho N số nguyên, bạn hãy tính tích các số này và chia dư tích cho 10^9 + 7 (1000000007).

*/
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

int main() {
    int n; cin >> n;
    int x = 0;
    ll tich = 1;
    for(int i = 1; i <= n; i++) {
        cin >> x;
        tich = (tich * x) % mod;
    }
    cout << tich << endl;
    return 0;
}
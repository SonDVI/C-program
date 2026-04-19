#include <iostream>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int F[1000001];
int main() {
    int n; cin >>n;
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 1000001; i++) {
        F[i] = F[i - 1] % mod + F[i - 2] % mod;
        F[i] %= mod;
    }

    cout << F[n - 1] << endl;
}
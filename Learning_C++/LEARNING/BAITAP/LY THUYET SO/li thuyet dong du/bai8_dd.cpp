
#include <iostream>
#include <numeric>
#include <cmath>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
ll F[1000001];
void dayso() {
    F[1] = 2;
    F[2] = 8;
    for (int i = 3; i < 1000001; i++) {
        F[i] = (2 * F[i - 1] + 8 * F[i - 2]) % MOD;    
    }
    
}

int main() {
    dayso();
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        cout << F[n] << endl;
    }
    return 0;

}
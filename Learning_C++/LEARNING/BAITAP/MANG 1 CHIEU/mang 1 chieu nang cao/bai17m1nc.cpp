
#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    ll a[n];
    for (int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    int q; cin >> q;
    int sum = 0;
    for (int j = 0; j < q; j++) {
        int l, r; cin >> l >> r;
        for(int i = l - 1; i <= n - r; i++) {
            sum += a[i];
        }
    }
    cout << sum << endl;
    
}
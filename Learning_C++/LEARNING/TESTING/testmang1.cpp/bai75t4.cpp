
#include <iostream>
#include <climits>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll b[n];
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    ll max_val = LLONG_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            ll min_val = min(a[i] * a[j], b[i] * b[j]);
            max_val = max(max_val, min_val);
        }
    }
    cout << max_val << endl;
}
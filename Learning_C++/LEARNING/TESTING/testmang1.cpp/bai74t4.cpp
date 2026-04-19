
#include <iostream>
#include <climits>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    for(int i = 0; i < n; i++) {
        max_val = max(max_val, a[i]);
        min_val = min(min_val, a[i]);
    }
    int d_max = max_val - min_val;
    int demmax = 0;
    int demmin = 0;
    for(int i = 0; i < n ; i++) {
        if(a[i] == max_val) {
            ++demmax;
        }
        if(a[i] == min_val) {
            ++demmin;
        }
    }
    cout << d_max << endl;
    if(min_val == max_val) {
        ll cnt = demmin;
        cout << cnt * (cnt - 1) / 2 << endl;
    }
    else {
        cout << demmin * demmax << endl;
    }
    return 0;

}
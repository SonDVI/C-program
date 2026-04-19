#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
bool bs(int a[], int l, int r, int x) {
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) return true;
        else if(a[m] > x) r = m - 1;
        else l = m + 1;
    }
    return false;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        if(bs(a, 0, n - 1, x)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
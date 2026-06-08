/*Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm giao của 2 mảng này và in theo thứ tự xuất hiện trong mảng A[]

*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, m; cin >> n >> m;
    ll a[n];
    ll b[m];
    map<int, int> mp;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < m; i++) {
        mp[b[i]] = 1;
    }
    for(int i = 0; i < n; i++) {
        if(mp[a[i]] == 1) {
            mp[a[i]] = 2;
            cout << a[i] << " ";
        }
    }
    return 0;
}
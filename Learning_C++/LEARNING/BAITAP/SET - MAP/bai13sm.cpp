/*Cho mảng A[] và B[] có N và M phần tử là các số nguyên, hãy tìm các phần tử xuất hiện trong mảng 1 mà không xuất hiện trong mảng 2.

*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n, m; cin >> n >> m;

    ll a[n];
    ll b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    map<ll, int> mp;

    for(int i = 0; i < n; i++) {
        mp[a[i]] = 1;
    }

    for(int i = 0; i < m; i++) {
        if(mp[b[i]] == 1) {
            mp[b[i]] = 2;
        }
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second == 1) {
            cout << it->first << " ";
        }
    }
    return 0;
}
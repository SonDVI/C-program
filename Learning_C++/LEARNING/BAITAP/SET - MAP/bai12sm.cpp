/*Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện ở 1 trong 2 mảng nhưng không được xuất hiện ở cả 2 mảng.*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;

    ll a[n];
    ll b[m];
    map<ll, int> mp;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        mp[a[i]] = 1;
    }
    for(int i = 0; i < m; i++) {
        if(mp[b[i]] == 1) {
            mp[b[i]] = 2;
        }
        else if(mp[b[i]] == 0) {
            mp[b[i]] = 3;
        }
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second == 1 || it->second == 3) {

            cout << it->first << " ";
        }
    }
    return 0;
}
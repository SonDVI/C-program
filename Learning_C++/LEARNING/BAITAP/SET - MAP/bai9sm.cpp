/*Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm hợp của 2 mảng này và in theo thứ tự từ lớn về nhỏ. Cú pháp duyệt ngược của set như sau :*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    int a[n];
    int b[m];
    map<int, int> mp;

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        mp[a[i]] = 1;
    }

    for(int i = 0; i < m; i++) {
        mp[b[i]] = 1;
    }
    for(auto it = mp.rbegin(); it != mp.rend(); ++it) {
        if(it->second == 1) {
            cout << it->first << " ";
        }
    }
    return 0;
}
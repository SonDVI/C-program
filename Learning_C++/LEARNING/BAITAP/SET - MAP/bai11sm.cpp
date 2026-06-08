/*Cho mảng A[] và B[] lần lượt gồm N và M số nguyên, nhiệm vụ của bạn là tìm những phần tử xuất hiện trong mảng thứ nhất nhưng không xuất hiện trong mảng thứ 2, liệt kê theo thứ tự từ bé đến lớn và liệt kê mỗi giá trị một lần.*/
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

    for(int i = 0; i < m; i++) {    
        mp[b[i]] = 1;
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(mp[a[i]] == 0) {
            mp[a[i]] = -1;
            cout << a[i] << " ";
        }
    }
    return 0;
}
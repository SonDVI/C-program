/*
            tập giao 
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {

    int n, m;

    cin >> n >> m;

    map<char, int> mp;

    for(int i = 0; i < n; i++) {
        char c; cin >> c;
        mp[c] = 1; // đánh dấu vào tập 1
    }
    for(int i = 0; i < m; i++) {
        char c; cin >> c;
        if(mp[c] == 1) { //nếu ở tập 2 cũng xuất hiện
            mp[c] == 2;// đánh dấu lần nữa --> xuất hiện ở cả hai tập
        }
    }

    for(auto x : mp) {
        if(x.second == 2) cout << x.first << " ";
    }
}
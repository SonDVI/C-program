#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int a[100005];
    map<int, int> mp;
    vector<int> order;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(mp.count(a[i]) == 0) {
            order.push_back(a[i]);
        }
        mp[a[i]]++;
    }
    for(int x : order) {
        cout << x << " " << mp[x] << endl;
    }
    return 0;
}

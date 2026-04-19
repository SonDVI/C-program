#include <bits/stdc++.h>

using namespace std;


int main() {
    int n; cin >> n;
    vector<pair<int, int>, int> v(n);
    vector<int> v1;
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second >> v[i];

    for(int i = 0; i < n; i++) {
        int sum_xyz = v[i].first + v[i].second + v[i];
        v1.push_back(sum_xyz);
    }

    for(auto k : v1) {
        cout << k << " ";                                                               
    }
}
#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
using ll = long long;

int main() {
    int n, m; cin >> n >> m;

    int a[100005];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> s; 
    for(int i = 0; i < m; i++) {
        int x; cin >> x;
        s.insert(x);
    }
    for(x : a) {
        
    }
}
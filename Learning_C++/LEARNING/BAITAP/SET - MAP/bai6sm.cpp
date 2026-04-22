#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<pair<int, int>> diff;
    while(n--) {
        pair<int, int> xy;
        cin >> xy.first >> xy.second;
        
        diff.insert(xy);
    }

    cout << diff.size() << endl;
}
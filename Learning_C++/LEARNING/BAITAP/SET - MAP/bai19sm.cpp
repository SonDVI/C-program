//chua hoc string skip-->
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cin.ignore(); // bỏ '\n' sau số n
    map<string, set<string>> mp;    
    for(int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string x, dash, y;
        ss >> x >> dash >> y;
        mp[x].insert(y);
        mp[y].insert(x);
    }

    for(auto& [team, rivals] : mp) {
        cout << team << " : ";
        bool first = true;
        for(auto& a : rivals) {
            if(!first) cout << ", ";
            cout << a;
            first = false;
        }
        cout << endl;
    }
    return 0;
}
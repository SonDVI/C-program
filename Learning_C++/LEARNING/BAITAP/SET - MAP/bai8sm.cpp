#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    multiset<int> se;
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) se.insert(v[i]);
    

    int q; cin >> q;
    
    while(q--) {
        
        int tt; cin >> tt;
        if(tt == 1) {
            int x; cin >> x;
            se.insert(x);
        }
        if(tt == 2) {
            int x; cin >> x;
            if(se.count(x) != 0) {
                se.erase(x);
            }
        }
        if(tt == 3) {
            auto min = se.begin();
            cout << *min << endl;
        }
        if(tt == 4) {
            auto max = se.rbegin();
            cout << *max << endl;
        }
    }
}


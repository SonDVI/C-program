#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    map<int, int> sapxep;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sapxep[x] = 1;
    }
    cout << sapxep.size() << endl;
    for(auto x : sapxep) {
        cout << x.first << " ";
    }
}
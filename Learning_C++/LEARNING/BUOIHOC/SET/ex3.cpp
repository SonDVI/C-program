
#include <iostream>
#include <set>
using namespace std;

using ll = long long;


int main() {
    int n; cin >> n;
    
    set<int> se;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        if(se.count(x) == 0) {
            cout << x << " ";
            se.insert(x);
        }
    }

    
}
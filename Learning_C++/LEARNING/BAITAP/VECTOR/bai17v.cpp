#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<char> convert_number(ll n) {
    vector<char> v;
    for(int i = 0; i < 64; i++) {
        if(n % 2 == 0) {
            v.push_back('0');
        }
        else {
            v.push_back('1');
        }
        n /= 2;
    }
    reverse(v.begin(), v.end());
    return v;
}
int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<char> bin = convert_number(n);
        for(auto x : bin) {
            cout << x;
        }
        cout << endl;
    }
}
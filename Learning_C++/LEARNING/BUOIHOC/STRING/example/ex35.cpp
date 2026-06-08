#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool cmp(pair<string, int> x, pair<string, int> y) {
    if(x.second != y.second) return x.second > y.second;
    return x.first < y.first;
}
int main() {
    string s;
    map<string, int> mp;
    while(getline(cin, s)) {
        
        int i = s.find("-");
        string s1 = s.substr(i + 2);
        string s2 = s.erase(i - 1);
        mp[s1]++;
        mp[s2]++;
    }
    vector<pair<string, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), cmp);

    for(auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
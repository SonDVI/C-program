/*Cho mảng pair A[] gồm N pair, sắp xếp mảng pair theo second tăng dần, nếu second bằng nhau thì sắp cho first giảm dần*/
#include <bits/stdc++.h>
using namespace std;
bool cmprs(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) return a.second < b.second;
    else return a.first > b.first;
}
int main() {
    int n; cin >> n;
    pair<int, int> a[n];

    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a, a + n, cmprs);

    for(auto x : a) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
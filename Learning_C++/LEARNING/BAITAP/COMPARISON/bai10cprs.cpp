/*Cho mảng pair A[] gồm N pair, sắp xếp mảng pair abs(first - second) tăng dần, nếu cùng abs(first - second) thì sắp theo first tăng dần, nếu first bằng nhau thì cho second giảm dần*/
#include <bits/stdc++.h>
using namespace std;
int hieu(pair<int, int> n) {
    return abs(n.first - n.second);
}
bool cmprs(pair<int, int> a, pair<int, int> b) {
    if(hieu(a) != hieu(b)) return hieu(a) < hieu(b);
    else {
        if(a.first != b.first) return a.first < b.first;
        else return a.second > b.second;
    }
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
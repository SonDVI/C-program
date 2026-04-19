/*Cho mảng A[] gồm N điểm trong hệ tọa độ Oxy, hãy sắp xếp các điểm này theo khoảng cách về gốc tọa độ tăng dần, nếu 2 điểm có cùng khoảng cách tới gốc tọa độ thì in ra theo hoành độ tăng dần, nếu tiếp tục 2 điểm này có cùng hoành độ thì in ra theo thứ tự tung độ tăng dần.*/

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int kc_o(pair<int, int> p1) {
    int kc = p1.first * p1.first + p1.second * p1.second;
    return kc;
}

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if(kc_o(p1) != kc_o(p2)) {
        return kc_o(p1) < kc_o(p2);
    }
    else if(p1.first != p2.first) {
        return p1.first < p2.first;
    }
    else {
        return p1.second < p2.second;
    }
}
int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
/*Cho các điểm trong hệ tọa độ OXYZ, nhiệm vụ của bạn là sắp xếp các điểm này theo hoành độ tăng dần, nếu có cùng hoành độ thì sắp theo tung độ tăng dần, nếu có cùng tùng độ tiếp tục sắp xếp theo cao độ tăng dần. Sử dụng pair như sau để lưu các tọa độ này :*/
#include <bits/stdc++.h>
using namespace std;
bool cmprs(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
    if(a.first != b.first) return a.first < b.first;
    else if(a.second.first != b.second.first) return a.second.first < b.second.first;
    else if(a.second.second != b.second.second) return a.second.second < b.second.second;
}
int main() {
    int n; cin >> n;
    pair<int, pair<int, int>> a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }

    sort(a, a + n, cmprs);

    for(auto x : a) {
        cout << x.first << " " << x.second.first << " " << x.second.second << endl;
    }
    return 0;
}
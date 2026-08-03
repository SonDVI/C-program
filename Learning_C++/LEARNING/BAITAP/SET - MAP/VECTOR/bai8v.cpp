/*Cho N điểm trong hệ tọa độ Oxyz, bạn hãy dùng vector pair<pair<int, int>, int>> để lưu tọa độ các điểm này.

Sau đó duyệt vector và in ra tổng của tung độ, hoành độ, cao độ.*/
#include <bits/stdc++.h>

using namespace std;


int main() {
    int n; cin >> n;
    vector<pair<pair<int, int>, int>> v(n);
    vector<int> v1;
    for(int i = 0; i < n; i++) cin >> v[i].first.first >> v[i].first.second >> v[i].second;

    for(int i = 0; i < n; i++) {
        int sum_xyz = v[i].first.first + v[i].first.second + v[i].second;
        v1.push_back(sum_xyz);
    }

    for(auto k : v1) {
        cout << k << " ";                                                               
    }
}
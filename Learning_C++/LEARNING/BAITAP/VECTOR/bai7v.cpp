
/*Cho N điểm trong hệ tọa độ Oxy, bạn hãy dùng vector<pair<int, int>> để lưu tọa độ các điểm này.

Sau đó duyệt vector và tính khoảng cách từ các điểm này về gốc tọa độ và lưu vào 1 vector sau đó in ra các phần tử trong vector khoảng cách này lấy 2 số sau dấu phẩy.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    vector<pair<int, int>> v(n);
    vector<double> v1;
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    int k = 0;
    for(int i = 0; i < n; i++) {
        double kc = sqrt(v[i].first * v[i].first + v[i].second * v[i].second);
        v1.push_back(kc);
    }

    for(auto x : v1) {
        cout << fixed << setprecision(2) << x << " ";
    }
    return 0;
}
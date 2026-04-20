/*Bạn được cung cấp 1 bảng số gồm nhiều dòng, mỗi dòng có thể có số lượng số khác nhau và bạn cần chỉ ra giá trị nằm ở cột y của dòng x trong bảng số.

Gợi ý : Bài này bạn sử dụng 1 mảng vector vector a[N]; với N là số dòng, hoặc bạn có thể dùng 1 vector các vector để lưu. Mỗi dòng sẽ dùng 1 vector để lưu.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q; cin >> n >> q;
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++) {
        int m; cin >> m;
        v[i].resize(m);
        for(int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }
    while(q--) {
        int x, y;
        cin >> x >> y;
        cout << v[x - 1][y - 1] << endl;
    }
    return 0;
}
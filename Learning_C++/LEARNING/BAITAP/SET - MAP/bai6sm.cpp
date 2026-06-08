/*Cho N điểm trong hệ tọa độ Oxy, bạn hãy xác định có bao nhiêu điểm riêng biệt trong các điểm đã cho. Gợi ý : Dùng set hoặc map lưu pair*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    set<pair<int, int>> diff;
    while(n--) {
        pair<int, int> xy;
        cin >> xy.first >> xy.second;
        
        diff.insert(xy);
    }

    cout << diff.size() << endl;
}
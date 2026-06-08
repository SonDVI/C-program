/*Cho danh sách các cầu thủ ghi bàn, bạn hãy thông kê xem mỗi người ghi bao nhiêu bàn và liệt kê danh sách các cầu thủ cùng số lần họ ghi bàn theo thứ tự từ điển tăng dần. Ngoài ra bạn cần tìm người ghi bàn nhiều nhất và ghi bàn ít nhất, nếu có nhiều người có cùng số bàn thắng nhiều nhất và ít nhất bạn cần lấy người có tên theo thứ tự từ điển nhỏ hơn*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    map<string, int> mp;
    for(string c : a) {
        mp[c]++;
    }
    for(auto k : mp) {
        cout << k.first << " " << k.second << endl;
    }
    cout << endl;
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        max_val = max(max_val, it->second);
        min_val = min(min_val, it->second);
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second == min_val) {
            cout << it->first << " " << it->second << endl;
            break;
        }
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second == max_val) {
            cout << it->first << " " << it->second << endl;
            break;
        }
    }
    return 0;

}
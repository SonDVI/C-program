/*Cho một xâu kí tự S chỉ bao gồm các kí tự từ a tới z và chữ số. Bạn được yêu cầu thực hiện các nhiệm vụ sau bằng CTDL phù hợp.

1. Tìm kí tự có tần suất xuất hiện nhiều nhất và có thứ tự từ điển nhỏ nhất.

2. Tìm kí tự có tần suất xuất hiện nhỏ nhất và có thứ tự từ điển lớn nhất.

3. Tìm số lượng kí tự khác nhau trong xâu.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    map<char, int> mp;
    for(char c : s) mp[c]++;

    int max_val = 0;

    for(auto& [c, cnt] : mp) max_val = max(max_val, cnt);

    for(auto& [c, cnt] : mp) {
        if(cnt == max_val) {
            cout << c << " " << max_val << endl;
            break;
        }
    }
    int min_val = INT_MAX;

    for(auto& [c, cnt] : mp) min_val = min(min_val, cnt);

    for(auto it = mp.rbegin(); it != mp.rend(); it++) {
        if(it->second == min_val) {
            cout << it->first << " " << min_val << endl;
            break;
        }
    }
    cout << mp.size() << endl;
    return 0;
}
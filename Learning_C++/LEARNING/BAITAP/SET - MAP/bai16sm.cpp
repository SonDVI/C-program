/*Ở trường đại học xyz, mỗi sinh viên sẽ có một mã sinh viên riêng. Mã sinh viên là một xâu kí tự không quá 8 kí tự. Bạn được yêu cầu xây dựng chương trình có thể kiểm tra một mã sinh viên nào đó có thuộc về sinh viên nào?

Đầu vào
• Dòng đầu tiên là số lượng sinh viên N.

• 2N dòng tiếp theo là các dòng tiếp theo mô tả thông tin của sinh viên trên 2 dòng, dòng đầu là mã sinh viên, dòng 2 là tên sinh viên.

• Dòng tiếp theo là số truy vấn Q.

• Q dòng tiếp theo, mỗi dòng là một mã sinh viên cần tìm kiếm, nếu mã sinh viên này thuộc về một bạn sinh viên thì in ra tên của sinh viên đó trên 1 dòng, ngược lại in ra "NOT FOUND" trên 1 dòng.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, string> mp;

    int n; cin >> n;
    while(n--) {
        string id, name; cin >> id;
        cin.ignore();
        getline(cin, name);
        mp[id] = name;
    }
    int t; cin >> t;
    while(t--) {
        string q; cin >> q;
        if(mp.count(q)) {
            cout << mp[q] << endl;
        }
        else cout << "NOT FOUND" << endl;
    }
    return 0;
}
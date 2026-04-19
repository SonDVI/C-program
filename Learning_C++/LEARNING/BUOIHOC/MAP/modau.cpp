/*
            MAPPING (ÁNH XẠ)

    - GIỐNG TRONG BỘ MÔN ĐẠI SỐ
    - ví dụ :
        key         value
        123           A
        124           B
        125           A
    map(key, value);

    - đối với iterator trong map thì để truy cập đến phần tử key và value của
    map thì ta chỉ cần.

    for(auto it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    - có thể dùng cách như trên thay cho việt giải tham chiếu it.

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    map<int, int> mp;// dung pair<int, int> de luu.
    /*map<char, bool> mp; //pair<char, bool>.

    map<ll, char> mp; // pair<ll, char>

    map<int, vector<int>> mp;// pair<int, vector<int>>.

    map<vector<int>, char> mp;// pair<vector<int>, char>.

    map<pair<int, int>, int> mp;// pair<pair<int, int>, int>.*/

    //KHONG LUU DUOC CHUNG KEY, TỰ ĐỘNG LƯU THEO THỨ TỰ TĂNG DẦN CỦA KEY
    mp.insert({3, 5});// (3, 5)
    mp.insert({3, 3});// (3, 5)
    mp.insert({2, 1});// (2, 1), (3, 5)
    mp.insert({4, 1});// (2, 1), (3, 5), (4, 1)
    mp.insert({5, 2});// (2, 1), (3, 5), (4, 1), (5, 2)
    mp.insert({2, 2});// (2, 1), (3, 5), (4, 1), (5, 2)

    cout << mp.size() << endl;// 1
    cout << mp[4] << endl;// 1

    mp[4] = 20; // (4, 20)
    mp[-5] = 3; // do -5 chưa xuất hiện trong map nên nó sẽ tự động thêm mới cặp (key, value) là (-5, 3).

    cout << mp[100] << endl; // chưa có key trong map nên sẽ in ra giá trị mặc định của kiểu dữ liệu, ở đay là 0 đối với int và thêm mới cặp (100, 0).
    for(auto x : mp) {
    cout << x.first << " " << x.second << endl;
    }

    return 0;
}
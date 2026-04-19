/*
            BÀI TOÁN ĐẾM SỐ LẦN XUẤT HIỆN
*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

//key : gia tri cua cac so kahc nhau
//value : so lan xuat hien

int main() {
    map<int, int> mp;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++; // truy xuat den value cua x neu xuat hien thi ++
    }
    for(auto x : mp) {
        cout << x.first << " " << x.second << endl;

        // có thể đếm số lần xuất hiện của kí tự, số liệu xấu , v. v
    }
}
/*
                    BÀI TOÁN SỐ LẦN XUẤT HIỆN CỦA KÍ TỰ TRONG XÂU
    - CÁCH 1 : dùng map
    - CÁCH 2 : mảng đánh dấu
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    //CÁCH 1:

    /*string s;
    getline(cin, s);
    map<char, int> mp;
    for(char x : s) mp[x]++;

    for(auto x : mp) {
        cout << x.first << " " << x.second << endl;
    }*/



    //CÁCH 2:MẢNG ĐÁNH DẤU
    string s;
    getline(cin, s);
    int cnt[256] = {0}; // tu 0 --> 255 ma ascii cua ki tu
    for(char x : s) {
        cnt[x]++;
    }

    for(int i = 0; i < 256; i++) {
        if(cnt[i]) {
            cout << (char)i << " " << cnt[i] << endl;
        }
    }
}
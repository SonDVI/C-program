/*Cho xâu S gồm các từ các nhau 1 vài dấu cách, bạn hãy đếm xem mỗi từ xuất hiện bao nhiêu lần và liệt kê theo thứ tự từ điển tăng dần ?

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    string s;
    while(cin >> s) {
        mp[s]++;
    }
    for(auto it : mp) {
        cout << it.first << " " << it.second;
        cout << endl;
    }
    return 0;
}
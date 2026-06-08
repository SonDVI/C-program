/*Cho xâu S gồm các từ các nhau 1 vài dấu cách, bạn hãy đếm xem mỗi từ xuất hiện bao nhiêu lần và liệt kê theo thứ xuất hiện trong xâu S?

*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    map<string, int> mp;
    string s;
    vector<string> v;

    while(cin >> s) {
        mp[s]++;
        if(mp[s] == 1) v.push_back(s);
    }
    for(string x : v) {
        cout << x << " " << mp[x] << endl;
    }
    return 0;
}
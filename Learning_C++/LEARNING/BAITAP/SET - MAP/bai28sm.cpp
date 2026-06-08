/*Cho mảng A[] gồm N kí tự, bạn hãy xác định xem tần suất lớn nhất của 1 kí tự xuất hiện trong mảng là bao nhiêu. Và có bao nhiêu kí tự thỏa mãn có tần suất lớn nhất đó. Ví dụ : A[] = {2, 8, t, e, c, h, t, e, c, h} thì tần suất lớn nhất của 1 kí tự lớn nhất là 2 và có 4 kí tự t, e, c, h thỏa mãn*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    map<char, int> mp;

    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
    }

    int max_val = INT_MIN;
    for(auto x : mp) {
        max_val = max(max_val, x.second);
    }
    cout << max_val << endl;
    for(auto c : mp) {
        if(c.second == max_val) cout << c.first << " ";
    }
    return 0;

}
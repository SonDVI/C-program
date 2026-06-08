/*cho mảng A[] gồm N phần tử, bạn hãy in ra các giá trị có số lần xuất hiện chẵn trong mảng.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mp;
    for(int x : a) {
        mp[x]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(it->second % 2 == 0) {
            cout << it->first << " " << it->second << endl;
        }
    }
    cout << endl;
    for(auto it = mp.rbegin(); it != mp.rend(); it++) {
        if(it->second % 2 == 0) {
            cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}
/*Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn đó là với mỗi phần tử trong mảng bạn hãy chỉ ra đó là lần thứ mấy nó xuất hiện ? Ví dụ mảng A[] = {1, 2, 3, 1, 1, 4, 2, 3} sẽ có kết quả là : 1, 1, 1, 2, 3, 1, 2, 2*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    map<int, int> mp;

    for(int i = 0; i < n; i++) {
        if(mp[a[i]] == 0) {
            mp[a[i]] = 1;
            cout << mp[a[i]] << " ";
        }
        else {
            mp[a[i]]++;
            cout << mp[a[i]] << " ";
        }
    }
    return 0;
}
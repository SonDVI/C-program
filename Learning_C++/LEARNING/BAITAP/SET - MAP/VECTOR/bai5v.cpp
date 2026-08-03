/*Cho vector V có N phần tử, nhiệm vụ của bạn là lật ngược vector V và in ra. Sau khi lật ngược toàn bộ vector, bạn tiếp tục lật ngược các phần tử từ chỉ số L tới chỉ số R sau đó in ra vector. Để lật ngược vector V :

Copy
reverse(v.begin(), v.end());
reverse(v.begin() + L, v.begin() + R + 1);*/
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    int l, r; cin >> l >> r;
    reverse(v.begin(), v.end());
    for(auto k : v) {
        cout << k << " ";
    }   
    cout << endl;
    
    reverse(v.begin() + l, v.begin() + r + 1);

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

}
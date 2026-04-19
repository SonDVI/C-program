/*Cho vector V có N phần tử, nhiệm vụ của bạn là sắp xếp các phần tử trong vector theo thứ tự tăng dần, giảm dần sau đó in ra bằng cách dùng iterator.

*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int main() {
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n ;i++) cin >> v[i];

    sort(v.begin(), v.end()); // sap xep theo thu tu tang dan

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>()); //them ham greater de dao nguoc lai

    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    return 0;
}
/*Cho mảng A[] gồm N từ. Hãy sắp xếp các từ trong mảng A[] tăng dần và giảm dần về từ điển sau đó in ra màn hình. Nếu bạn chưa học string thì đây là cách bạn lưu mảng này :*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for(auto x : v) {
        cout << x << " ";
    }

    cout << endl;

    sort(v.begin(), v.end(), greater());

    for(auto x : v) {
        cout << x << " ";
    }
    return 0;

}
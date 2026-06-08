/*Cho mảng A[] gồm N phần tử là ký tự, bạn hãy đếm xem có bao nhiêu ký tự khác nhau trong mảng.

Gợi ý : Để in theo thứ tự từ điển bạn chỉ cần duyệt set, còn in theo thứ tự ngược các bạn có thể dùng iterator ngược hoặc đưa các phần tử trong set ra vector rồi in từ cuối vector về đầu.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    char a[n];
    set<char> tang;
    set<char, greater<char>> giam;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(auto x : a) {
        tang.insert(x);
        giam.insert(x);
    }
    cout << tang.size() << endl;
    for(auto k : tang) {
        cout << k << " ";
    }
    cout << endl;
    for(auto k : giam) {
        cout << k << " ";
    }
    cout << endl;
}
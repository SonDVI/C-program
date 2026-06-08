/*Cho một mảng kí tự A[] gồm N kí tự, bạn hãy xác định có bao nhiêu kí tự là chữ cái khác nhau xuất hiện trong mảng A[] nhưng không phân biệt hoa thường. Tức là chữ cái in hoa và in thường của cùng 1 chữ cái được coi là giống nhau, ví dụ a và A được coi là giống nhau.

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    set<char> se;
    for(int i = 0; i < n; i++) {
        if(!isdigit(a[i])) {
            se.insert((char)tolower(a[i]));
        } // luôn convert về thường rồi insert
    }
    cout << se.size() << endl;
    for(auto x : se) {
        cout << x << " ";
    }
}
/*Cho mảng A[] gồm N ký tự là chữ cái in hoa, in thường hoặc chữ số. Hãy sắp xếp các ký tự trong mảng A[] tăng dần và giảm dần về từ điển sau đó in ra màn hình.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    char a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    for(char c : a) {
        cout << c << " ";
    }
    cout << endl;
    sort(a, a + n, greater());

    for(char c : a) {
        cout << c << " ";
    }

    return 0;
}
/*Cho mảng A[], B[] gồm N và M phần tử, nhiệm vụ của bạn là với mỗi phần tử trong mảng A[] bạn hãy chỉ ra có bao nhiêu phần tử trong mảng B[] lớn hơn hoặc bằng nó.

Chú ý : Bạn không thể dùng 2 for lồng nhau để code bài này.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;

    int a[n], b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    sort(b, b + m);
    for(int i = 0; i < n; i++) {
        auto it = lower_bound(b, b + m, a[i]);
        if(it == b + m) {
            cout << 0 << " ";
        }
        else {
            cout << m - 1 - (it - b) + 1 << " ";
        }
    }
}
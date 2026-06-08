/*Cho mảng A[] gồm N phần tử, có nhiều đoạn [L, R] và bạn phải trả lời trong mảng A[] có bao nhiêu phần tử thuộc đoạn [L, R].

Gợi ý : Sort mảng a 1 lần, tìm vị trí đầu tiên của phần tử >= L, tìm vị trí cuối cùng của phần tử <= R, lấy vị trí cuối - vị trí đầu + 1 là ra kết quả. Độ phức tạp O(NlogN)*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int q; cin >> q;
    while(q--) {
        int l, r; cin >> l >> r;
        auto it1 = lower_bound(a, a + n, l);
        auto it2 = upper_bound(a, a + n, r);
        --it2;
        int so_phantu = (it2 - a) - (it1 - a) + 1;
        cout << so_phantu << endl;
    }
    return 0;
}
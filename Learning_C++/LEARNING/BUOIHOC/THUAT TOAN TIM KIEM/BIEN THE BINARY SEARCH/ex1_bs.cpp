/*Cho mảng A[], B[] gồm N và M phần tử, nhiệm vụ của bạn là với mỗi phần tử trong mảng A[] bạn hãy chỉ ra có bao nhiêu phần tử trong mảng B[] nhỏ hơn nó.

Gợi ý : Sort mảng B[] rồi dùng binarysearch biến đổi hoặc lowerbound, upperbound. Khi đó bạn chỉ cần duyệt qua mảng A[], với mỗi phần tử trong mảng A[] gọi hàm tìm kiếm mất O(logM) nên toàn bộ code có độ phức tạp O(NlogM).*/

#include <bits/stdc++.h>
using namespace std;
int bs(int b[], int l, int r, int x) {
    int res = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(b[m] < x) {
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res + 1;
}
int main() {
    int n, m; cin >> n >> m;

    int a[n];
    int b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b, b + m);
    

    for(int i = 0; i < n; i++) {
        cout << bs(b, 0, m - 1, a[i]) << " " << endl;
    }

    return 0;
}
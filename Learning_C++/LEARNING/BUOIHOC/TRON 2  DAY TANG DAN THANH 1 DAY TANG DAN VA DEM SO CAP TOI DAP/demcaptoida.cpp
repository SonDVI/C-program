/*
            ĐẾM CẶP TỐI ĐA
    - Để tối ưu ta sẽ xét số thấp nhất đầu tiên của mảng đầu với mảng hai với nhau.

    - giả sử : chiều cao của nam nữ cho bảng như sau: nam nữ tạo thành 1 cặp nếu chiều cao của nam > nữ.
          i
    Nam : 1   1   4   9   12

    Nữ : 2   2   5   8   23    24
        j

- Ai <= Bj thì tăng i lên để xét đến khi nào có bạn nam chiều cao lớn hơn.
*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n, m; cin >> n >> m;

    int a[n];
    int b[m];
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0;
    //O(n) = n + m;
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            ++i;
        }
        else {
            ++cnt;
            ++j; ++i;
        }
    }
    cout << cnt << endl;
    return 0;
}
/*
        BÀI TOÁN GỘP HAI DÃY TĂNG DẦN THÀNH 1 DÃY TĂNG DẦN
    - Nếu làm ngây thơ sẽ cho hai thằng vào 1 mảng rồi sort --> Khá lâu


    - Cách làm xét hai cặp A[i] và B[j], nếu thằng nào lớn hơn thì xếp thằng còn lại trước roi tang chi so thang do len.




*/


#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int n, m; cin >> n >> m;

    int a[n];
    int b[m];

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0;
    //O(n) = n + m;
    while(i < n & j < m) {
        if(a[i] <= b[j]) {
            cout << a[i] << " "; ++i;
        }
        else {
            cout << b[j] << " "; ++j;
        }
    }
    while(i < n) {
        cout << a[i] << " "; ++i;
    }
    while(j < m) {
        cout << b[j] << " "; ++j;
    }
    return 0;
}
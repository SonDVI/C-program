/*
                    MA TRẬN VÀ CÁC PHÉP TOÁN THEO MA TRẬN

    - Ma trận vuông có số cột = số hàng.

    - có hai đường chéo: +) đường chéo chính
                         +) đường chéo phụ

    - Ma trận chuyển vị đổi cột thành hàng, hàng thành cột, ví dụ : 3x2 -> 2x3.

    - Trong vở đại số tuyến tính...

    - Nhân hai ma trận có hai cách: dots product(ở trong đại số tuyến tính), hamada products(có thể sử dụng trong machine learning).




*/

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n, m, p;
    cin >> n >> m >> p;
    int a[n][m];
    int b[m][p];
    for(int i = 0; i < n; i++) {
        for(int j =0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            cin >> b[i][j];
        }
    }
    ll c[n][p];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++){
            c[i][j] = 0;
            for(int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}
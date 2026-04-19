//Cho mảng A[], B[] gồm N và M phần tử, hãy chèn mảng B vào chỉ số P của mảng A và in ra mảng A[] sau khi chèn.
#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, p; cin >> n >> m >> p;

    int a[n + m], b[m];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    for(int i = m - 1; i >= 0; i--) { // số lần cần tăng kích thước + duyệt mảng b
        ++n;//tăng kích thước của mảng
        for(int j = n - 2; j >= p; j--) {
            a[j + 1] = a[j];// dịch sang phải 1 ô mỗi lần lặp
        }
        a[p] = b[i];
    }

    for(int k = 0; k < n; k++) {
        cout << a[k] << " ";
    }
    return 0;
}
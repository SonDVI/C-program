/*Cho mảng A[] gồm N phần tử, bạn hãy kiểm tra xem giá trị X có xuất hiện trong mảng không?

Gợi ý : Dùng mảng đánh dấu để mỗi test case chỉ mất O(1) thay vì tìm kiếm tuyến tính sẽ mất O(N)*/
#include <iostream>
#include <climits>
using namespace std;

using ll = long long;

int d[10000001];
int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int k : a) {
        d[k] = 1;
    }
    int t; cin >> t;
    int x = 0;
    for(int i = 0; i < t; i++) {
        cin >> x;
        if(d[x] == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
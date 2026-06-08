/*Cho mảng A[] gồm N phần tử ĐÃ SẮP XẾP TĂNG DẦN và số nguyên X, nhiệm vụ của bạn là :

In ra chỉ số đầu tiên của phần tử >= X trong mảng, nếu không có phần tử nào >=X thì in ra -1.

In ra chỉ số đầu tiên của phần tử > X trong mảng, nếu không có phần tử nào > X thì in ra -1.

In ra chỉ số đầu tiên của phần tử X trong mảng, nếu X không tồn tại in ra -1.

In ra chỉ số cuối cùng của phần tử X trong mảng, nếu X không tồn tại in ra -1.

Từ kết quả của 3 và 4 in ra số lần xuất hiện của X trong mảng.

Bài này các bạn nên tự code 4 hàm kia, sau khi code thành thạo có thể sử dụng luôn lowerbound và upperbound*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int x; cin >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    
    auto it = lower_bound(a, a + n, x);
    if(it == a + n) {
        cout << -1 << endl;
    }
    else {
        cout << (it - a) << endl;
    }

    auto it2 = upper_bound(a, a + n, x);
    if(it2 == a + n) {
        cout << -1 << endl;
    }
    else {
        cout << (it2 - a) << endl;
    }
    bool found1 = false;
    for(int i = 0; i < n; i++) {
        if(x == a[i]) {
            cout << i << endl;
            found1 = true;
            break;
        }
    }
    if(!found1) cout << -1 << endl;
    bool found = false;
    for(int i = n - 1; i >= 0; i--) {
        if(x == a[i]) {
            cout << i << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << -1 << endl;
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(x == a[i]) ++dem;
    }
    cout << dem << endl;

    return 0;

}
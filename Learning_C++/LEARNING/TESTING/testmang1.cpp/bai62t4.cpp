/*Cho mảng A[] gồm N phần tử và nhiều truy vấn, mỗi truy vấn yêu cầu bạn đếm số lượng phần tử trong mảng là số nguyên tố trong đoạn chỉ số [L, R]

Đầu vào
Dòng 1 là N : số phần tử trong mảng

Dòng 2 là N số viết cách nhau 1 dấu cách

Dòng thứ 3 là số truy vấn Q

Q dòng tiếp theo mỗi dòng là 2 chỉ số L, R*/
#include <iostream>
using namespace std;
using ll = long long;
bool nt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q; cin >> q;
    int l, r = 0;
    for(int i = 1; i <= q; i++) {
        cin >> l >> r;
        int dem = 0;
        for(int i = l; i <= r; i++) {
            if(nt(a[i])) {
                ++dem;
            }
        }
        cout << dem << endl;
    }
    return 0;
}
/*Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số có nhiều chữ số nguyên tố hơn sẽ đứng trước, trong trường hợp các số có cùng số lượng chữ số nguyên tố thì số nào xuất hiện trước in ra trước*/
#include <bits/stdc++.h>
using namespace std;
bool so_nt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int dem_nt(int n) {
    int dem = 0;
    while(n) {
        int digit = n % 10;
        if(so_nt(digit)) ++dem;
        n /= 10;
    }
    return dem;
}
bool cmprs(int a, int b) {
    return dem_nt(a) > dem_nt(b);
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    stable_sort(a, a + n, cmprs);
    for(int c : a) {
        cout << c << " ";
    }
    return 0;
}
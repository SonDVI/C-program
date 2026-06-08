/*Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số nào có nhiều số lẻ hơn thì đứng trước, trong trường hợp nhiều số có cùng chữ số lẻ thì số nào nhỏ hơn sẽ đứng trước*/
#include <bits/stdc++.h>
using namespace std;
int dem_le(int n) {
    int dem = 0;
    while(n) {
        int digit = n % 10;
        if(digit % 2 != 0) ++dem;
        n /= 10;
    }
    return dem;
}
bool cmprs(int a, int b) {
    if(dem_le(a) != dem_le(b)) return dem_le(a) > dem_le(b);
    else return a < b;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n, cmprs);

    for(int k : a) {
        cout << k << " ";
    }
    return 0;
}
//Cho mảng A[] gồm N phần tử. Sắp xếp sao cho số có nhiều chữ số 0, 6 hoặc 8 hơn đứng trước, nếu có cùng số lượng chữ số 0 6 8 thì số nào nhỏ hơn sẽ đứng trước
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int cs6_cs8_cs0(int n) {
    int dem6 = 0; int dem8 = 0;
    int dem0 = 0;
    while(n) {
        int digit = n % 10;
        if(digit == 6) {
            dem6++;
        }
        if(digit == 8) dem8++;
        if(digit == 0) dem0++;
        n /= 10;
    }
    int sum = dem0 + dem8 + dem6;
    return sum;
}

bool cmp(int x, int y) {
    if(cs6_cs8_cs0(x) != cs6_cs8_cs0(y)) return cs6_cs8_cs0(x) > cs6_cs8_cs0(y);
    else return x < y;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n, cmp);
    for(int x : a) {
        cout << x << " ";
    }
    return 0;
}
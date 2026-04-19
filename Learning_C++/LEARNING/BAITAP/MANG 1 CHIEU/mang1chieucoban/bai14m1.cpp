/*Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int gcd(int a, int b) {
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = gcd(res, a[i]);
    }
    cout << res << endl;
}
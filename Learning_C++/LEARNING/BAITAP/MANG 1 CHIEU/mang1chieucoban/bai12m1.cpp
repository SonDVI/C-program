/*Cho mảng số nguyên A[] gồm N phần tử, hãy tìm vị trí(bắt đầu từ 0) cuối cùng của giá trị nhỏ nhất trong mảng và vị trí đầu tiên của giá trị lớn nhất trong mảng.

Tức là nếu có nhiều số có cùng giá trị nhỏ nhất bạn phải in ra ví trí cuối cùng, và có nhiều số có cùng giá trị lớn nhất trong mảng bạn phải in ra vị trí đầu tiên lớn nhất đó.*/
#include <iostream>
#include <climits>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min_val = INT_MAX;
    int max_val = INT_MIN;

    for(int i = 0; i < n; i++) {
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] == min_val) {
            cout << i << " ";
            break;
        }
    }
     for(int i = 0; i < n; i++) {
        if(a[i] == max_val) {
            cout << i << " ";
            break;
        }
    }
}
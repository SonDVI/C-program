/*
        ĐẾM CÁC GIÁ TRỊ KHÁC NHAU TRONG MẢNG
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = true; break;
            }
        }
        if(!found) cout << a[i] << endl;
    }
}
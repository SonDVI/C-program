/*Cho mảng A[] gồm N phần tử, bạn hãy tách và đếm xem mỗi chữ số của các số trong mảng A[] xuất hiện bao nhiêu lần.

Ví dụ A[] = {3333, 222, 10001, 5} thì số 0 xuất hiện 3 lần, 1 xuất hiện 2 lần, 2 xuất hiện 3 lần, 3 xuất hiện 4 lần và 5 xuất hiện 1 lần.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int dem[10] = {0};
    ll n; cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(ll i = 0; i < n; i++) {
        ll so = a[i];
        if(so == 0) {
            dem[0]++;
            continue;
        }
        while(so > 0) {
            dem[so % 10]++;
            so /= 10;
        }
        
    }
    for (int i = 0; i <= 9; i++) {
        if(dem[i] > 0) {
            cout << i << " " << dem[i] << endl;
        }
    }
    return 0;
}
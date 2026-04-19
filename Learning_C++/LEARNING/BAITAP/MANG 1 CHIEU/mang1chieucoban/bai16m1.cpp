
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
bool nt(int x) {
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0) return false;
    }

    return x > 1;
}

bool sothuan_nghich(int x) {
    int res = 0;
    int b = x;
    while (x != 0) {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return res == b;
}

bool so_chinh_phuong(int x) {
    int can = round(sqrt(double(x)));
    return 1ll * can * can == x;

}
bool tong_nt(int x) {
    int res = 0;
    while (x != 0) {
        res = res + x % 10;
        x /= 10;
    }
    return nt(res);
}

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int demnt = 0;
    int demtn = 0;
    int demtong = 0;
    int demcp = 0;

    for(int i = 0; i < n; i++) {
        if(nt(a[i])) {
            demnt++;
        }
        if(sothuan_nghich(a[i])) {
            demtn++;
        }
        if(so_chinh_phuong(a[i])) {
            demcp++;
        }
        if(tong_nt(a[i])) {
            demtong++;
        }
    }
    cout << demnt << endl;
    cout << demtn << endl;
    cout << demcp << endl;
    cout << demtong << endl;
    return 0;
}
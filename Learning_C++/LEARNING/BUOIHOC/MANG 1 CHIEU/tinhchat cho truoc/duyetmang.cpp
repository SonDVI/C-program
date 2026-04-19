/*
        DUYỆT MẢNG TỪ SỐ I VỀ TRƯỚC VÀ VỀ SAU

-a[7]:
        1 2 3 4 5 6 7 8
    bên trái<-i-> bên phải

    - phương pháp: dùng hai vòng for lồng nhau.
*/

#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //left
    for(int i = 0; i < n; i++) {
        for(int j = i - 1; j >= 0; j--) {
            cout << a[j] << endl;
        }
    }

    //right
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            cout << a[j] << endl;
        }
    }
    return 0;

}

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
void dk1(ll n) {
    ll temp = n;
    int mang[10] = {0};
    while (n != 0) {
        int digit = n % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            mang[digit]++;// luu so luong xuat hien vao mang[]
        }
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if ((i == 2 || i == 3 || i == 5 || i == 7) && mang[i] > 0) {
            cout << i << " " << mang[i] << endl;
        }
    }

    int a[20]; // luu cac chu so
    int slg_chuso = 0; //dem so luong chu so
    while (temp != 0) {
        int digit = temp % 10;
        a[slg_chuso] = digit;
        slg_chuso++;
        temp /= 10;
    }
    cout << endl;
    for (int i = slg_chuso - 1; i >= 0; i--) {
        int digit = a[i];
        if ((digit == 2 || digit == 3 || digit == 5 || digit == 7) && mang[digit] > 0) {//phai xuat hien thi moi in
            cout << digit << " " << mang[digit] << endl;
        }
        mang[digit] = 0;// set ve 0 de tranh bi lap
    }
    
}


int main() {
    ll n; cin >> n;
    dk1(n);
    

}
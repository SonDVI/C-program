/*
                    CHUYỂN XÂU THÀNH SỐ VÀ NGƯỢC LẠI

    - Chuyển xâu thành số :
    sử dụng hàm : stoi() --> chuyển về int
                  stoll() --> chuyển về long long
                  stod() --> chuyển về double  
    - Chuyển số thành xâu :
    sử dụng  hàm : to_string()


*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    string s ="2113";
    int n = stoi(s); //phải đảm bảo string s chuyển được về int (trong range của int);
    cout << n << endl;

    string k = to_string(n);
    cout << k << endl;
}
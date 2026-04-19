/*
            Số Thuật nghịch

*/

#include <iostream>
using namespace std;
using ll = long long;
bool doi_xung(int a) {
    ll res = 0;
    ll b = a;
    while (a != 0) {
        res = res * 10 + a % 10;
        a /= 10;
    }
    return res == b;

}
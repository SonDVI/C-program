//Cho số nguyên N, hãy đếm xem mỗi chữ số nguyên tố (2, 3, 5, 7) của N xuất hiện bao nhiêu lần và in ra theo thứ tự xuất hiện trong N, nếu chữ số nào không xuất hiện thì không in.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    ll temp = n;
    ll t = n;
    ll dem2 = 0;
    ll dem3 = 0;
    ll dem5 = 0;
    ll dem7 = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == 2) {
            dem2++;
        }
        if (digit == 3) {
            dem3++;
        }
        if (digit == 5) {
            dem5++;
        }
        if (digit == 7) {
            dem7++;
        }
        n /= 10;
    
    }
    ll p = 1;
    while (temp >= 10) {
        
        temp /= 10;
        p *= 10;

    }
    int user2 = 0;
    int user3 = 0;
    int user5 = 0;
    int user7 = 0;
    while (p > 0) {
        ll digit = t / p;
        if (digit == 2 && !user2) {
            cout << 2 << " " << dem2 << endl;
            user2 = 1;
        }
        if (digit == 3 && !user3) {
            cout << 3 << " " << dem3 << endl;
            user3 = 1;
        }
        if (digit == 5 && !user5) {
            cout << 5 << " " << dem5 << endl;
            user5 = 1;
        }
        if (digit == 7 && !user7) {
            cout << 7 << " " << dem7 << endl;
            user7 = 1;
        }
        t %= p;
        p /= 10;
    }
    return 0;
    
}
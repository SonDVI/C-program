/*
Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số nguyên tố.

Cho số nguyên dương chẵn N >=4 .

Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N.
*/
#include <iostream>
#include <cmath>
using namespace std;
bool nt(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
bool lonhon(int n) {
    if (n < 4) {
        return false;
    }
    return n % 2 == 0;
}

void checkpq(int n) {
    
    for (int p = 2; p <= n / 2; p++) {
        if (nt(p)) {
            int q = n - p;
            if (nt(q)) {
                cout << p << " " << q << endl;
            }
        
        }
    }
}

int main() {
    int t; cin >> t;
    int n;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        if (lonhon(n)) {
            checkpq(n);
        }
    }
    return 0;
}

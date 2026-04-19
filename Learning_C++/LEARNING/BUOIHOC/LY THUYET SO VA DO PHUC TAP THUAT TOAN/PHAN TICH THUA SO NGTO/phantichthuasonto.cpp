// LƯU Ý : CÔNG THỨC LANGENDRY ( SEARCH GG )

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
// Thuật Toán Phân tích thừa số nguyên tố,
void pt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while(n % i == 0) {
                cout << i << " ";
                n /= i;
            }
        }
    }
    if(n != 1) {
        cout << n << endl;
    }
}
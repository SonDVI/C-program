/*
Cho số nguyên N, bạn hãy kiểm tra xem có phải số lượng chữ số lẻ của N ít hơn chữ số chẵn của N hay không? Nếu đúng thì in ra "28tech", ngược lại in ra "29tech".

Lưu ý : N có thể là số âm, số 0 và cả số dương.
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long; 
int main() {
    ll n; cin >> n;
    ll current_diggit = 0;
    ll sochan = 0;
    ll sole = 0;
    n = abs(n);
    if (n == 0) {
        cout << "28tech" << endl; 
        return 0;
    }
    while (n != 0) {
        current_diggit = n % 10;
        if (current_diggit % 2 == 0) {
            sochan++;
        }
        else {
            sole++;
        }
        n /= 10;
    }

    if (sochan > sole) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
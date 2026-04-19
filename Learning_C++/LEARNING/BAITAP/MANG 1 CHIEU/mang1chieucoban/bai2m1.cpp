
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool nt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;

}
int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];

    }
    int dem = 0;
    double trungbinhcong = 0;
    for(int i = 0; i < n; i++) {
        if (nt(a[i])) {
            trungbinhcong += (double)a[i];
            dem++;
        }
    }
    cout << fixed << setprecision(3) << trungbinhcong / (double)dem << endl;
    return 0;
}
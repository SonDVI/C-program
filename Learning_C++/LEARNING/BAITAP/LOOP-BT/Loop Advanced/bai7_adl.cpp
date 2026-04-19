// Dem so uoc va liet ke cac uoc cua n
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }
    cout << dem << endl;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;

}
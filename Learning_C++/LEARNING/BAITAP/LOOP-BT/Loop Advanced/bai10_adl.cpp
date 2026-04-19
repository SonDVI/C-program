//Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n ; cin >> n;
    int dayso;
    for (int i = 1; i <= n; i++) {
        cin >> dayso;
        if (dayso == 2022) {
            cout << "YES" << endl;
            return 0;
        } 
    }
    cout << "NO" << endl;
    return 0;
}
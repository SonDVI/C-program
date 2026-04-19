//Cho số nguyên N, hãy tìm chữ số đứng giữa của N khi N có số lượng chữ số là số lẻ, trong trường hợp N có số lượng chữ số là số chẵn thì in ra NOT FOUND.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;
    int current_diggit = 0;
    ll dem = 0;
    ll temp = n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    while (n != 0) {
        current_diggit = n % 10;
        dem++;
        n /= 10;
        
    }

    if (dem % 2 == 0) {
        cout << "NOT FOUND" << endl;
    }
    else {
        ll vitri = (dem + 1) / 2;
        for (int i = 1; i <= vitri; i++) {
            current_diggit = temp % 10;
            if (i == vitri) {
                cout << current_diggit << endl;
            }
            temp /= 10;
        }
    }
    return 0;
}
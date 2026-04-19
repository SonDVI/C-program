#include <iostream>

using namespace std;

int main() {
    int m, n, a;
    cin >> m >> n >> a;

    //so luong o can dat theo chieu ngang.
    int num_m = -1;
    if (m % a == 0) {
        num_m = m / a;
    } else {
        num_m = m / a + 1;
    }

    //so luong o can dat theo chieu doc.
    int num_n = -1;
    if (n % a == 0) {
        num_n = n / a;
    } else {
        num_n = n / a + 1;
    }

    //tong so o can dat
    long long total = (long long)num_m * num_n;
    cout << total << endl;
    return 0;
}
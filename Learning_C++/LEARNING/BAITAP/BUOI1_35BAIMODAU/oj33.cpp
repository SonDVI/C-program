#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    bool check = n % 2 == 0 && k == (long long)(log10(n) + 1); // Kiểm tra nếu n là số chẵn và k bằng số chữ số của n.
    cout << boolalpha << check << endl;
    return 0;
}
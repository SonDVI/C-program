//Cho cấp số cộng có n phần tử, cho biết phần tử đầu tiên trong dãy là u1 và công sai d. Hãy tính tổng các phần tử của cấp số cộng này.
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n, u1, d;
    cin >> n >> u1 >> d;

    long long  sn = ((long long)u1 * 2 + (long long)(n - 1) * d) * n / 2;
    cout << sn << endl;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];

    }
    int res = 1000;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int kc = abs(a[i] - a[j]);
            res = min(res, kc);
        }
    }
    cout << res << endl;
    return 0;
}
#include <iostream>
#include <climits>
using namespace std;
using ll = long long;
int thuasonguyento2(int n) {
    int dem = 0;
    while(n % 2 == 0) {
        dem++;
        n /= 2;
    }
    return dem;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        p = thuasonguyento2(a[i]);
        sum += p;
    }
    cout << sum << endl;
    return 0;
}
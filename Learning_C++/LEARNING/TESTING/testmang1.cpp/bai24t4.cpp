
#include <iostream>
#include <climits>
using namespace std;
using ll = long long;
int thuasonguyento2(int n) {
    int dem = 0;
    
    while (n % 2 == 0) {
        ++dem;
        n /= 2;
    }
    return dem;
}
int thuasonguyento5(int n) {
    int dem = 0;
    
    while (n % 5 == 0) {
        ++dem;
        n /= 5;
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
    int p2 = 0;
    int p5 = 0;
    int sum2 = 0;
    int sum5 = 0;
    for(int i = 0; i < n; i++) {
        p2 = thuasonguyento2(a[i]);
        p5 = thuasonguyento5(a[i]);

        sum2 += p2;
        sum5 += p5;
    }
    if((ll)sum2 / 2 > sum5) {
        cout << sum5 << endl;
    }
    else if((ll)sum2 / 2 < sum5) {
        cout << (ll)sum2 / 2 << endl;
    }
    else {
        cout << sum5 << endl;
    }
    return 0;
}
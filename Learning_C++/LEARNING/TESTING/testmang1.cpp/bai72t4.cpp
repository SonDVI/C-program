
#include <iostream>
#include <climits>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll mindist = LLONG_MAX;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            mindist = min(mindist, abs(a[i] - a[j]));
        }
    }
    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(abs(a[i]- a[j]) == mindist) ++cnt;
        }
    }
    cout << mindist << endl;
    cout << cnt << endl;
    return 0;
}
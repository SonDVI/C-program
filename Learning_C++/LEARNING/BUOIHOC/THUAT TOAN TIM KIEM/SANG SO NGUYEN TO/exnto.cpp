#include <bits/stdc++.h>
using namespace std;
int p[1000001];
int maxn = 1000000;

void stive() {
    for(int i = 0; i <= maxn; i++) {
        p[i] = 1;
    }
    p[1] = 0; p[0] = 0;
    for(int i = 2; i <= sqrt(maxn); i++) {
        if(p[i] == 1) {
            for(int j = i * i; j <= maxn; j += i) {
                p[j] = 0;
            }
        }
    }
}
int main() {
    stive();
    int n; cin >> n;
    for(int i = 0; i <= n; i++) {
        if(p[i] == 1) cout << i << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        bool check = false;
        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                check = true;
                break;
            }
        }
        if (!check) cout << a[i] << " ";
    }
    return 0;
}
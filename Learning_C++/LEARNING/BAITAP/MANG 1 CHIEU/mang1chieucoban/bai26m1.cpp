#include <iostream>
using namespace std;
using ll = long long;

int X[1000001];
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int k : a) {
        X[k] = 1;
    }
    int dem = 0;
    for(int i = 0; i < 1000001; i++) {
        if(X[i] == 1) {
            ++dem;
        }
    }
    cout << dem << endl;

}
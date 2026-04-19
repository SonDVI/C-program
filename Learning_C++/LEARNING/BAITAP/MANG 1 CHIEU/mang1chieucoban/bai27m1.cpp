#include <iostream>
using namespace std;
int X[1000001];
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int k : a) {
        X[k]++;
    }
    
    for(int i = 0; i < 1000001; i++) {
        if(X[i] >= 1) {
            cout << i << " " << X[i] << endl;
        }
    }
    

}
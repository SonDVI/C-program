
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];
    int dem = 0;


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_val = 10000;

    for(int i = 0; i < n; i++) {
        min_val = min(min_val, a[i]);
       
    }
    for (int i = 0; i < n; i++) {
        if(a[i] == min_val) dem++;
    }
    cout << dem << endl;
    return 0;

}
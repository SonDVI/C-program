//Cho mảng A[] gồm N phần tử, bạn hãy tính tổng của 2 số liên tiếp, 3 số liên tiếp, 4 số liên tiếp trong mảng.
#include <iostream>
#include <climits>
using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int i = 0;
    int i2 = 0;
    int i3 = 0;
    int temp1 = n;
    int temp2 = n;
    while(n != 1) {
        int res1 = 0;
        res1 = a[i] + a[i + 1];
        cout << res1 << " ";
        ++i;
        --n;
    }
    cout << endl;
    while(temp1 != 2) {
        int res1 = 0;
        res1 = a[i2] + a[i2 + 1] + a[i2 + 2];
        cout << res1 << " ";
        ++i2;
        --temp1;
    }
    cout << endl;
    while(temp2 != 3) {
        int res1 = 0;
        res1 = a[i3] + a[i3 + 1] + a[i3 + 2] + a[i3 + 3];
        cout << res1 << " ";
        ++i3;
        --temp2;
    }
    return 0;
}
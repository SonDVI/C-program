// Cho mảng A[] gồm N phần tử, bạn hãy in ra các phần tử trong mảng từ trái qua phải và từ phải qua trái.


#include <iostream>
using namespace std;

int main() {
    int n; cin >>n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}
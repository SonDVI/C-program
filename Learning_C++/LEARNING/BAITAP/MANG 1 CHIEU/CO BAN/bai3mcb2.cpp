/*Cho mảng A[] gồm N phần tử, bạn hãy đếm xem trong mảng có bao nhiêu số chẵn bao nhiêu số lẻ.*/

#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sochan = 0;
    int sole = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            ++sochan;
        }
        else {
            ++sole;
        }
    }
    cout << sochan << " " << sole << endl;
    return 0;
}
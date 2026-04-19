/*Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".

*/
#include <iostream>
using namespace std;

bool check(int a[], int i) {
    return (i % 2 == 0 && a[i] % 2 == 0);
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(check(a, i)) {
            cout << a[i] << " ";
            found = true;
        }
    }
    if(!found) {
        cout << "NONE" << endl;
    }
    return 0;
}
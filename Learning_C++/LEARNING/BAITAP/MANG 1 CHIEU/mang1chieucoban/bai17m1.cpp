//Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?
#include <iostream>
using namespace std;

bool check(int a[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(check(a, n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
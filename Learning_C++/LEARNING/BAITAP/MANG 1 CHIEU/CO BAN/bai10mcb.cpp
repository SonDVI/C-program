/*Cho mảng A[] gồm N phần tử, hãy duyệt qua mảng và đổi những số nguyên tố thành số 0, các số không phải số nguyên tố thì giữ nguyên

*/
#include <iostream>
using namespace std;
bool snt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(snt(a[i])) {
            a[i] = 0;
        }
        cout << a[i] << " ";
    }
    return 0;
}
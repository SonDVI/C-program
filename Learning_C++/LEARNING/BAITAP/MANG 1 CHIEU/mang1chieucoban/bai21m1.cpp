//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là chèn phần tử X vào vị trí K trong mảng sau đó in ra mảng. Lưu ý K bắt đầu từ 1.
#include <iostream>
using namespace std;

int main() {
    int n, x, k; cin >> n >> x >> k;

    int a[n + 1];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ++n;
    for(int i = n - 1; i >= k - 1 ; i--) {
        a[i + 1] = a[i]; //dịch các số sang vị trí bên cạnh
    }
    a[k - 1] = x;// thêm x vào ô trống

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;

}
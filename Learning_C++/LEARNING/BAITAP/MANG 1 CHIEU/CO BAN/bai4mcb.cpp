/*Cho mảng A[] gồm N phần tử, bạn hãy nhân đôi các phần tử trong mảng thông qua hàm. Bạn cần triển khai theo mã nguồn sau*/
#include <iostream>
using namespace std;

void nhap(int a[], int n){
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}


void thaydoi(int a[], int n){
    for(int i = 0; i < n; i++) {
        cout << 2 * a[i] << " ";
    }
}

int main(){
    int n, a[1000];
    cin >> n;
    nhap(a, n);
    thaydoi(a, n);
}

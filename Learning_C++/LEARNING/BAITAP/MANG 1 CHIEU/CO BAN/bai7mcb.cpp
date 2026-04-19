/*Cho mảng A[] gồm N phần tử, bạn hãy in ra các phần tử trong mảng mà lớn hớn số đứng ngay trước nó.

Phần tử đầu tiên trong mảng không có số đứng trước nên không cần xét.*/


#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 1; i < n; i++) {
        if(a[i] > a[i - 1]) {
            cout << a[i] << " ";
        }
   }
   return 0;
}
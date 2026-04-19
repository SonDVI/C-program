/*Cho mảng A[] gồm N phần tử, đối với mỗi phần tử trong mảng bạn hãy in ra 2 số, số thứ 1 là số lượng các phần tử đứng trước phần tử này và lớn hơn nó, số thứ 2 là số lượng các phần tử đứng sau phần tử này và nhỏ hơn nó.

Ví dụ A[] = {3, 2, 1, 9, 5, 4, 3, 7, 2} thì đối với phần tử 5 ta cần in 1 và 3.*/
#include <iostream>
using namespace std;
void dieukien(int a[], int n) {

    for(int i = 0; i < n; i++) {
        int dem = 0;
        int dem2 = 0;
        for(int j = i - 1; j >= 0; j--) {

            if(a[j] > a[i]) {
                dem++;
            }
        }
        for(int j = i + 1; j < n; j++) {
  
            if(a[j] < a[i]) {
                dem2++;
            }
        }
        cout << dem << " " << dem2 << endl;
    }
}

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    dieukien(a, n);


}
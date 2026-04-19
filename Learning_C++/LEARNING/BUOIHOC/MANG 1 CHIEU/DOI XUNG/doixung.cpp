/*
            ĐỐI XỨNG:
        
        - duyệt từ giữa phần tử, rồi duyệt từ bên tay trái và bên tay phải (n / 2)
        - a[i] == a[n - i - 1]

        1 2 5 3 5 2 1
        i           n - i -1



*/
#include <iostream>
#include <cmath>
using namespace std;

bool dx(int a[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(a[i] != a[n - i - 1]) {
            return false;
        }
    }
    return true;
}


void lat(int a[], int n) {
    for(int i = 0; i < n / 2; i++) {
        swap(a[i], a[n - i - 1]);
    }
}
//Cho mảng A[] gồm N phần tử, bạn hãy đếm số lượng dãy con liên tiếp mà số lượng số chẵn bằng số lượng số lẻ.


#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        int even = 0;
        int odd = 0;
        for(int j = i; j < n; j++) {
            if(a[j] % 2 == 0) ++even;
            else ++odd;

            if(odd == even) count++;
        }
    }
    cout << count << endl;
    return 0;


}
//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn : Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố
#include <iostream>
using namespace std;

bool nt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

bool tongtruoc(int a[], int n, int i) {
    int sum = 0;
    for(int j = i + 1; j < n; j++) {
        sum += a[j];
    }
    
    return nt(sum);
}

bool tongsau(int a[], int n, int i) {
    int sum = 0;
    
    for(int j = i - 1; j >= 0; j--) {
        sum += a[j];
    }
    
    return nt(sum);
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(tongtruoc(a, n, i) && tongsau(a, n, i)) {
            cout << i << endl;
        }
    }
    return 0;
}
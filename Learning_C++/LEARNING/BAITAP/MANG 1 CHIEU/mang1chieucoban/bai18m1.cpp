//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó

#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] >= 0) {
            if((i > 0 && a[i - 1] < 0) || (i < n - 1 && a[i + 1] < 0)) { //liệt kê các số dương cạnh số âm
                cout << a[i] << " ";
            }
        }
        else {
            if((i > 0 && a[i - 1] > 0) || (i < n - 1 && a[i + 1] > 0)) { // liệt kê các số âm cạnh số dương
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
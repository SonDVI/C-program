/*Cho mảng A[] gồm N phần tử, bạn hãy in ra các phần tử trong mảng mà nó lớn hơn tất cả các phần tử đứng sau nó.

Phần tử cuối cùng trong mảng được coi là một phần tử thỏa mãn*/
#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int result[n], cnt = 0;
    int max_suffix = a[n- 1];

    for(int i = n - 2; i >= 0; i--) {
        if(a[i] > max_suffix) {
            result[cnt++] = a[i];
            max_suffix = a[i];
        }
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
    cout << a[n - 1] << endl;
    return 0;

}
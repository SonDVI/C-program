/*Cho mảng A[] gồm N phần tử, bạn hãy tìm số X lớn nhất sao cho X là ước chung của ít nhất 2 phần tử trong mảng.

Ví dụ A[] = {3, 6, 9, 2, 8, 10, 27} thì số X lớn nhất chính là 9 vì nó là ước chung của 2 số 9 và 27 đồng thời có giá trị lớn nhất.*/
#include <iostream>
using namespace std;
bool check(int a[], int n, int x) {
    if(x == 0) {
        return false;
    }
    int dem = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % x == 0) {
            dem++;
        }
        if(dem >= 2) {
            return true;
        }
    }
    return false;
}

int main() {
    int n; cin >> n;
    int a[n];
    int max_val = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        max_val = max(max_val, a[i]);
    }
    int result = 1;
    for(int x = max_val; x >= 1; x--) {
        if(check(a, n, x)) {
            result = x;
            break;
        }
    }
    cout << result << endl;
    return 0;
}
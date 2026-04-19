/*
        NHẬP DÃY SỐ  KHÔNG BIẾT TRƯỚC SỐ LƯỢNG
        
        - ĐỌC RANGE CỦA NÓ
        (GIẢ SỬ SỐ LƯỢNG SỐ LÀ 50005)

*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int a[50005];
    int n = 0;
    int x;
    while(cin >> x) {
        a[n] = x;
        ++n; //chỉ số ( số lượng phân tử trong mảng)
    }// trong VS CODE, ấn ctrl + z để dùng loop.

    for(int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
}
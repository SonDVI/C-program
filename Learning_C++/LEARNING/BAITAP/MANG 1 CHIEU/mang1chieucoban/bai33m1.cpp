/*Cho mảng A[] gồm N phần tử, hãy dịch các phần tử trong mảng sang phải K vị trí, khi dịch phải thì phần tử cuối cùng của dãy sẽ quay vòng lại trở thành phần tử đầu tiên*/
#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int j= 0; j < k; j++) {
        int temp = a[n - 1];    //lưu phân tử đầu
        for(int i = n - 2; i >= 0; i--) {
            a[i + 1] = a[i];    // dịch sang phải 1 ô
        }
        a[0] = temp;    //đặt vào cuối
    }

    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
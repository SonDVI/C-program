/*Cho mảng A[] gồm N phần tử, hãy dịch các phần tử trong mảng sang trái K lần, khi dịch trái thì phần tử đầu tiên của dãy sẽ quay vòng lại trở thành phần tử cuối cùng*/
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
        int temp = a[0];    //lưu phân tử đầu
        for(int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];    // dịch sang trái 1 ô
        }
        a[n - 1] = temp;    //đặt vào cuối
    }

    for(int i = 0; i < n; i++) cout << a[i] << " ";
}
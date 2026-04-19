/*Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là đối với mỗi phần tử trong mảng A[] bạn hãy tìm phần tử đầu tiên lớn hơn nó nằm ở bên phải, đối với phần tử không có phần tử lớn hơn bên phải thì in ra -1

Ví dụ : mảng A[] là {3, 8, 9, 1, 4, 2, 5} thì kết quả sẽ là 8, 9, -1, 4, 5, 5, -1.

Gợi ý : Đối với mỗi chỉ số i sử dụng 1 vòng for từ i + 1 tới cuối dãy để tìm số đầu tiên lớn hơn A[i], tìm được thì break và in ra.*/
#include <iostream>
using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        bool check = false;
        for(int j = i + 1; j < n; j++) {
            if(a[j] > a[i]) {
                cout << a[j] << " ";
                check = true;
                break;
            }
        }
        if(!check) {
            cout << -1 << " ";
        }
    }
    return 0;   
}
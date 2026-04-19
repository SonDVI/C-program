//Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là xây dựng mảng F cũng có N phần tử trong đó F[0] = A[0] và F[i] = F[i -1] + A[i] với mọi i >= 1. Như vậy bạn thử nghĩ xem F[i] lưu giá trị gì?
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int F[n];
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    F[0] = a[0];

    for(int i = 1; i < n; i++) {
        F[i] = F[i - 1] + a[i]; // cộng dồn các phân tử của a[i];
    }
    for(int i = 0; i < n; i++) {
        cout << F[i] << " ";
    }
    return 0;
}
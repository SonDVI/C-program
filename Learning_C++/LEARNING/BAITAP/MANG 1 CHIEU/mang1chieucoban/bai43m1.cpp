//Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là tính tổng của mọi dãy con trong mảng, ví dụ mảng A[] = {1, 2, 3, 4} bạn phải tính tổng của các dãy con : {1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {2}, {2, 3}, {2, 3, 4}, {3}, {3, 4}, {4}
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j];
            cout << sum << " ";
        }
    }
    return 0;
}
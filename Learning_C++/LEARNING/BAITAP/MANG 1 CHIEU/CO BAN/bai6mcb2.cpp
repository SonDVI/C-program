/*ho mảng A[] gồm N phần tử, bạn hãy in ra N - 1 tích của 2 số đứng cạnh nhau

Ví dụ : A[] = {1, 2, 3, 4, 5} thì bạn cần in ra 2, 6, 12, 20*/
#include <iostream>
using namespace std;

int main() {
    
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if (i + 1 < n) {
            cout << a[i] * a[i + 1] << " ";
        }
    }
}
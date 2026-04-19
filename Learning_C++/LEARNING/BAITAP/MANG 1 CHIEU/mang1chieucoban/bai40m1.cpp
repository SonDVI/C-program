//Cho mảng A[] gồm N phần tử, bạn hãy tách từng chữ số của các số trong mảng A[] và đếm xem mỗi chữ số xuất hiện bao nhiêu lần. Chú ý trong mảng A[] có thể có số âm
#include <iostream>
using namespace std;
int x[10] = {0};
int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if (a[i] == 0) {
            x[a[i]]++;
        }
        while(a[i] != 0) {
            int digit = abs(a[i] % 10);
            x[digit]++;
            a[i] /= 10;
        }
    }
    for(int i = 0; i < 10; i++) {
        cout << i << " " << x[i] << endl;
    }
    return 0;
}
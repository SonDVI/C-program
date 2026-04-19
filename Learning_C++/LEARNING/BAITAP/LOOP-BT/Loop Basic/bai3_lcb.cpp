/*
Bài này các bạn sử dụng cả 2 vòng lặp for và while để code. Lượt 1 sử dụng for, lượt 2 dùng while. Cho số tự nhiên N, nhiệm vụ của bạn in ra các dãy số bằng vòng lặp trên từng dòng, mỗi số cách nhau một dấu cách.

• Dòng 1. In ra các số từ 1 tới N.

• Dòng 2 in ra các số từ N về 0.

• Dòng 3 in ra các số chẵn nhỏ hơn hoặc bằng N.

• Dòng 4 in ra các số lẻ nhỏ hơn hoặc bằng N.

• Dòng 5 in ra các bội số của 4 nhỏ hơn N

• Dòng 6 in ra N chữ cái in thường đầu tiên.

• Dòng 7 in ra N chữ cái in thường cuối cùng theo thứ tự tăng dần.

*/
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = n; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (i % 4 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << char('a' + i) << " ";

    }
    cout << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << char('z' - i) << " ";
    }
    cout << endl;
}
//Cho N kí tự được viết cách nhau bởi 1 dấu cách, nhiệm vụ của bạn là xác định xem trong N kí tự đã cho có có tồn tại ít nhất 1 chữ C và 2 dấu + hay không? Hướng dẫn cách nhập input và chú ý nếu dev C++ không chạy được bạn hãy run code trên web này luôn.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    int demc = 0;
    int demcong = 0;
    for (int i = 0; i < n; i++) {
        char kitu;
        cin >> kitu;
        if (kitu == '+') {
            demcong++;
        }
        else if (kitu == 'C') {
            demc++;
        }
    }
    if (demc >= 1 && demcong >= 2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;

}
//Bài này rất đơn giản, nhiệm vụ của bạn là kiểm tra số nhập vào là chẵn hay lẻ. Các bạn phải trả lời nhiều trường hợp. (Bài này có nhiệm vụ cho các bạn làm quen với các bài toán mà đề bài cho nhiều test case sau này)
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }
    }
    return 0;
}
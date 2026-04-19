/*Cho mảng A[] gồm N phần tử và số nguyên dương S, nhiệm vụ của bạn là chia mảng thành ít nhất các mảng con liên tiếp sao cho không có mảng con nào có tổng vượt quá S.

Ví dụ : A[] = {1, 3, 3, 2, 8, 1, 3, 4, 6, 8} và S = 10 thì bạn có thể chia mảng A[] thành ít nhất 5 mảng con là {1, 3, 3, 2}, {8, 1}, {3, 4}, {6}, {8}

Gợi ý : Dùng 1 biến sum để tính tổng các phần tử của dãy con, duyệt qua mảng A[] thì cộng A[i] vào sum, nếu sum > S => Đếm thêm 1 dãy con và reset biến sum về A[i] để xét dãy con mới bắt đầu từ A[i]. Lưu ý dãy con kết thúc bởi phần tử cuối cùng trong mảng*/
#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    ll s; cin >> s;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum = 0;
    int daycon = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i];
        if(sum > s) {
            ++daycon;
            sum = a[i];
        }
    }
    if(sum >= 0) ++daycon;
    cout << daycon << endl;

    return 0;
}
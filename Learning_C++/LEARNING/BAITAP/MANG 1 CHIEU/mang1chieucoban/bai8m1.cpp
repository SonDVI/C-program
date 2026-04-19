/*Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện, mỗi giá trị chỉ liệt kê 1 lần. Ở thời điểm hiện tại các bạn có thể duyệt trâu để giải bài này, sau này sẽ dùng cách tối ưu hơn.

Gợi ý :
Đối với mỗi chỉ số i trong mảng, dùng 1 vòng for con duyệt từ 0 tới i - 1 để kiểm tra xem có phần nào đứng trước i giống A[i] hay không, nếu không có thì in ra A[i]*/
#include <iostream>
using namespace std;


int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j <= i - 1; j++) {
            if(a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(!found) cout << a[i] << " ";
    }
    
}
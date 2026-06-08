/*
                Đệ Quy
                (recursion)
    - giống ngăn xếp, stackframe nhưng là gọi lại chính hàm trong hàm đó.
*/
#include <bits/stdc++.h>
using namespace std;

void A(int k) {
    if(k) {
        cout << k << " ";
        A(k - 1);
        cout << "ok ";
    }
    cout << "done !\n";
}
void A1(int n) {
    if(n) {
        A1(n / 10);
        cout << n << " ";
    }
    cout << "ok " << n << " ";
}

int main() {
    A(4);
    //khi gọi A(4), stackframe xếp trên A(4) là A(3) tương tự A(2) , A(1), A(0);
    /*stack
        A(0) -->xong mới thực hiện A(1)
        A(1) -->xong mới thực hiện A(2)
        A(2) -->xong mới thực hiện A(3)
        A(3) -->xong mới thực hiện A(4)
        A(4)
    */
   A1(1234);
   return 0;
}
/*
                        Upper_bound
    - cú pháp : upper_bound(first_iter, last_iter, X); -->trả về iterator

    - áp dụng được cho mảng, vector, set, map.

    - điều kiện sử dụng : mảng, vector đã được sắp xếp tăng dần

    - Nó trả về vị trí đầu tiên của phần tử lớn hơn X, nếu trong mảng, vector bạn tìm kiếm không có phẩn tử lớn hơn X thì upper_bound trả về last_iter.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {1, 2, 2, 5, 5, 5, 5, 8, 9, 10, 12, 14};
    int n = 12;

    int *p = upper_bound(a, a + n, 8); // a + 7

    cout << "Gia tri : " << *p << endl;
    cout << "Chi so : " << p - a << endl;// p - a = a + 7 - a;
}
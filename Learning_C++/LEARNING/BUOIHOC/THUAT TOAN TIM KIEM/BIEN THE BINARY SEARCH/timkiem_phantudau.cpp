/*
            TÌM KIẾM NHỊ PHÂN
    - KHÔNG PHẢI lúc nào cũng cho 1 dãy tăng dần hoặc giảm dần. chủ yếu tập trung vào vị trí đầu và cuối của dãy.


    - 1 2 5 5 5 5 8 9 10
      l= 0   m = 4     r = 8
    - x = 5;
    tìm vị trí của thằng 5 đầu ??

    a[m] = X 

    res = -1 = 4
    --> tìm bên trái tức chuyển r về trước thằng 5 vì mình đang đi tìm thằng 5 đầu tiên.


*/
#include <bits/stdc++.h>
using namespace std;
int pos1(int a[], int l, int r, int x) {
    int res = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x) {
            res = m; //nếu = thì lưu vị trí của phần tử đó vào res
            r = m - 1;// cho r = m - 1 để tìm xem bên trái có phẩn tử nào là x nữa không để set làm phần tử đầu. Đối với số tìm số có vị trí cuối thì set l = m + 1.
        }
        else if(a[m] < x) {
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
//TÌM VI TRÍ ĐẦU TIÊN, CUỐI CÙNG
// = X, > X, >= X
// = X, < X, <= X

//Tìm vị trí cuối cùng của phần tử < X trong một dãy tăng dần
int pos3(int a[], int l, int r, int x) {
    int res = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] < x) {
            res = m; // update
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}
int main() {
    int a[] = {1, 2, 2, 5, 5, 5, 5, 8, 9, 10, 12, 14};
    cout << pos1(a, 0, 11, 12) << endl;
    return 0;
}
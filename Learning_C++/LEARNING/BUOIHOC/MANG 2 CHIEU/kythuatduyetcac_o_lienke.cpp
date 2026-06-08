/*
            Kỹ thuật duyệt các ô liền kề

    - Giả sử đang ở một ô có dòng và cột là (i, j) --> cách sinh ra 8 ô xung quanh nó(cách để nắm được tọa độ của 8 ô xung quanh). Áp dụng cho xử lí ảnh, map trong game,v.v

    - Chuẩn bị các lượng để khi (i,j) cộng vào nó sinh ra các ô tương ứng :
            (-1, -1)
            (-1, 0)
            (-1, 1)
            (0, -1)
            (0, 1)
            (1, -1)
            (1, 0)
            (1, 1)
*/
#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
    int n = 10; int m = 10;
    int i = 3, j = 4;

    for(int k = 0; k < 8; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >= 0 && i1 < n && j1 >=0 && j1 < m) {
            cout << i1 << " " << j1 << endl;
        }
    }
    return 0;
}
//Lưu ý: phải check xem giá trị có hợp lệ không, vì đôi khi giá trị mình xét nằm ở biên của ma trận sẽ có những giá trị không hợp lệ.
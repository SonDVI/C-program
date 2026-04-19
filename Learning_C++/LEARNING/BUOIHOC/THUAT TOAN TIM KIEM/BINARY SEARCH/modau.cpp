/*
                BINARY SEARCH
    - độ phức tạp : OlogN rất nhanh
    - tìm kiếm trong đoạn từ left right của mảng, ở mỗi bước thuật toán tìm vị trí mid ở giữa đoạn left


    - ĐIỀU KIỆN SỬ DỤNG : PHẢI LÀ DÃY TĂNG HOẶC GIẢM



    - ex :
    1   2   3   3   5   8   8   9   10  14  20
 l = 0                m = 5                 r= 10
 X la so can tim : ???
 m = (l + n) / 2
    - TH1 : a[m] = x, dep nhat
    - TH2 : a[m] < x, sẽ tìm ở phần nhỏ hơn cắt phần lớn hơn, vậy bắt đầu tìm kiếm từ m - 1;
    - TH3 : a[m] > x, sẽ tìm ở phần lớn hơn, cắt phần nhỏ hơn, vậy bắt dầu tìm kiếm từ m + 1;

    
*/

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
//kiem tra xem  X co trong day khong
bool bs(int a[], int l, int r, int X) {
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == X) return true;
        else if(a[m] < X) r = m - 1;
        else l = m + 1;
    }
    return false;
}

int main() {
    int X; cin >> X;
    int a[] = {1, 1, 4, 5, 8, 10, 12, 24};
    if(bs(a, 0, 7, X)) {
        cout << "APPEAR" << endl;
    }
    else cout << "NO" << endl;
    //ham binaryseasrch(a, a + n, so_muon_tim) --> tra true/false (ham co san).
    //NÊN TỰ CODE VÌ SAU NÀY SẼ HỌC CÁC BIẾN THỂ.
}

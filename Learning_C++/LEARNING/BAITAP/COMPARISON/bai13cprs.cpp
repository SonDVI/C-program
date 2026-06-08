/*Cho mảng A[] gồm N phần tử được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là tìm giá trị của phần tử lớn nhất nhỏ hơn hoặc bằng X trong mảng hoặc kết luận là không xuất hiện.

Lưu ý bài này các bạn cần code bằng 2 cách : Tự cài đặt theo hướng dẫn trong slide và sử dụng hàm upper_bound. Độ phức tạp cần đạt được cho code là O(logN)*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    auto it = upper_bound(a, a + n, x);
    
    if(it == a) {
        cout << "NOT FOUND" << endl;
    }
    else {
        --it;
        cout << *it << endl;
    }
    return 0;
}
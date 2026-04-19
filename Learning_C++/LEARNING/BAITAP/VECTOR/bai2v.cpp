/*Cho vector và 2 thao tác.

Thao tác 1 : Chèn phần tử vào vị trí bất kì trong vector.

Thao tác 2 : Xóa phần tử ở vị trí bất kì trong vector.

Đối với thao tác thứ 1, giả sử vector đang có N phần tử, chỉ số chèn hợp lệ sẽ là từ 0 tới N, ngoài ra các vị trí không hợp lệ sẽ không thực hiện chèn.

Tương tự đối với thao tác thứ 2, giả sử vector đang có N phần tử thì chỉ số xóa hợp lệ sẽ là từ 0 tới N - 1, nếu vị trí xóa không hợp lệ hoặc vector sẽ không thực hiện xóa.

Nhiệm vụ của bạn là thực hiện 1 loạt các thao tác này và in ra mảng sau khi thực hiện xong mọi thao tác. Nếu vector rỗng in ra EMPTY, ngược lại in ra các phần tử trong vector trên 1 dòng.*/
#include <bits/stdc++.h>
#include <vector>

using namespace std;

using ll = long long;
int main() {
    int n; cin >> n;

    vector<int> vec(n);


    for(int i = 0; i < n; i++) cin >> vec[i];
    int m; cin >> m;
    while(m--) {
        int tt;
        cin >> tt;
        if(tt == 1) {
            int p, x; cin >> p >> x;
            if(p >= 0 && p <= (int)vec.size()) {
                vec.insert(vec.begin() + p, x);     //insert chi nhan iterator
            }
        }
        else {
            int p; cin >> p;
            if(p >= 0 && p < (int)vec.size()) {
                vec.erase(vec.begin() + p);         //erase chi nhan iterator
            }
        }
    }

    if(vec.empty()) {
        cout << "EMPTY" << endl;
    }
    else {
        for(auto k : vec) {
            cout << k << " ";
        }
    }
    return 0;


}
/*Cho mảng A[] gồm N phần tử, 28Tech rất thích mảng đối xứng nên anh ấy muốn nhờ bạn xác định xem liệu có thể thay đổi vị trí của các phần tử trong mảng sao cho mảng trở thành đối xứng hay không ?

Ví dụ : A[] = {1, 1, 1, 1, 2, 3, 3, 2} có thể thay đổi thành mảng đối xứng là {1, 2, 1, 3, 3, 1, 2, 1}

In ra 28tech nếu có thể biến đổi mảng thành đối xứng, ngược lại in ra 29tech

Thêm fast IO (đối với C++) vào để tránh TLE vì bài này đọc ghi rất nhiều số :

Copy
ios::sync_with_stdio(false);
cin.tie(NULL);*/
#include <iostream>
using namespace std;
using ll = long long;
int x[100001] = {0};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for(int k : a) {
            x[k]++;
        }
        
        int demle = 0;
        for(int i = 0; i < 100001; i++) {
            if(x[i] % 2 != 0) ++demle;
        }

        for(int k : a) x[k] = 0;

        if((n % 2 == 0 && demle == 0) || (n % 2 != 0 && demle == 1)) {
            cout << "28tech" << endl;
        }
        else {
            cout << "29tech" << endl;
        }
    }
}
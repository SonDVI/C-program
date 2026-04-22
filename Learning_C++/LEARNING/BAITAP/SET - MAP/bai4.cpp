/*Cho dãy số A[] gồm có N phần tử, có 3 thao tác như sau :

Thao tác 1 : Thêm 1 phần tử X vào mảng.

Thao tác 2 : Xóa 1 phần tử X khỏi mảng. Trong trường hợp phần tử X không xuất hiện trong mảng, sẽ không thực hiện xóa, nếu trong mảng có nhiều phần tử X thì chỉ xóa đi 1 phần tử X trong mảng.

Thao tác 3 : Truy vấn xem phần tử X có xuất hiện trong mảng hay không?

Ban đầu mảng A[] có N phần tử, với các truy vấn phần tử X trong mảng, in ra YES nếu X xuất hiện trong mảng, ngược lại in ra NO.*/
#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;
using ll = long long;

int main() {
    int n, q; cin >> n;
    vector<int> a(n);
    multiset<int> se;
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    for(int i = 0; i < n; i++) {
        se.insert(a[i]);
    }
    while(q--) {
        int tt; cin >> tt;
        int x; cin >> x;
        if(tt == 1) {
            se.insert(x);
        }
        else if(tt == 2) {
            if(se.count(x) > 0) {
                se.erase(se.find(x));
            }
        }
        else if(tt == 3) {
            if(se.count(x) == 0) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;

}
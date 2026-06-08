/*Cho 1 mảng A[] gồm N số nguyên, 28tech cung cấp cho bạn các thao tác sau :

• 1 x : Thêm phần tử x vào mảng A[]

• 2 x : Xóa phần tử x khỏi mảng A[] nếu x tồn tại trong mảng, và nếu x xuất hiện nhiều lần bạn chỉ xóa đi 1 phần tử duy nhất.

• 3 x : Chỉ ra giá trị đầu tiên của phần tử >= x trong A[] khi mảng A[] được sắp xếp tăng dần, nếu không tồn tại in ra -1

• 4 x : In ra giá trị của phần từ lớn nhất <= x trong mảng A[], nếu không tồn tại phần tử này thì in ra -1.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int t; cin >> t;
    
    while(t--) {
        int x; cin >> x;
        if(x == 1) {
            int k; cin >> k;
            a.push_back(k);
        }
        else if(x == 2) {
            int k; cin >> k;
            for(auto it = a.begin(); it != a.end(); it++) {
                if(*it == k) {
                    a.erase(it);
                    break;
                }
            }
        }
        else if(x == 3) {
            int k; cin >> k;
            sort(a.begin(), a.end());
            auto it = lower_bound(a.begin(), a.end(), k);
            if(it == a.end()) {
                cout << -1 << endl;
            }
            else {
                cout << *it << endl;
            }
        }
        else if(x == 4) {
            int k; cin >> k;
            sort(a.begin(), a.end());
            auto it = upper_bound(a.begin(), a.end(), k);
            if(it == a.begin()) { //vì đang tìm <= x, nên sau khi xong upper_bound ta phải lùi 1 đơn vị --> nếu it = a.begin() thì lùi 1 sẽ = undefined
                cout << -1 << endl;
            }
            else {
                --it;
                cout << *it << endl;
            }
        }
    }

}
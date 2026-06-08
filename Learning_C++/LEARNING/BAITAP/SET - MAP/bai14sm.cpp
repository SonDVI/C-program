/*Cho mảng A[] gồm N phần tử. Bạn được yêu cầu trả lời cho các truy vấn, mỗi truy vấn yêu cầu bạn đếm số các giá trị khác nhau từ chỉ số L tới chỉ số N - 1.

Gợi ý : Xây dựng mảng F[] trong đó F[i] lưu số giá trị khác nhau từ i tới N - 1, khi truy vấn chỉ cần in ra F[L] là được

Đầu vào
• Dòng đầu tiên là N - số lượng phần tử của mảng

• Dòng thứ 2 gồm N phần tử A[i] của mảng

• Dòng thứ 3 là số truy vấn Q

• Q dòng tiếp theo mỗi dòng là một số L.

*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    int f[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    unordered_set<int> se;
    //duyệt từ phải -> trái thì con trỏ left của mình sẽ đếm các phần tử khác nhau = size của unordered set
    for(int i = n - 1; i >= 0; i--) {
        se.insert(a[i]);
        f[i] = se.size();
    }
    
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        cout << f[x] << endl;
    }
    return 0;

}
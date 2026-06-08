/*Cho mảng A[] gồm N phần tử, gọi B[] là mảng chứa các phần tử khác nhau trong mảng A[], bạn hãy in ra :

Số lượng phần tử của mảng B[]
Giá trị lớn nhất, nhỏ nhất của mảng B[]

Giá trị lớn thứ nhỉ, nhỏ thứ nhì của mảng B[]

Dữ liệu đảm bảo B[] có ít nhất 2 phần tử.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int x : a) {
        se.insert(x);
    }
    cout << se.size() << endl;
    cout << *se.rbegin() << " " << *se.begin() << endl;
    auto it = se.begin();
    ++it;
    auto it1 = se.rbegin();
    ++it1;
    cout << *it1 << " " << *it << endl;
}
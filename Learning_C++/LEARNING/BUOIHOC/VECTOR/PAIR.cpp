/*
            KIỂU DỮ LIỆU PAIR
    - pair : là công cụ để lưu nhiều thông tin thông qua 1 biến.

    - thứ tự so sánh pair : NẾU first > first1 thì cặp đầu lớn hơn. Nếu first = first1, thì nó sẽ tiến tới so sánh second và second1.

*/

#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    pair<int, int> p1 = make_pair(3, 4);
    pair<char, int> p2 = {'@', 100}; //C++11 tro len.
    pair<double, bool> p3 = make_pair(3.4, true);

    cout << p1.first << " " << p1.second << endl;

    pair<int, int> p4 = p1;
    cout << p4.first << " " << p4.second << endl;
    //first va second khong phai ham nen khong can ().



    // cho 5 điểm trong hệ tọa độ x,y.

    int n; cin >> n;

    pair<int, int> a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    for(auto x : a) {
        cout << x.first << " " << x.second << endl;
    }
    

    pair<pair<int,double>,char> p;
    p.first.first = 100;
    p.first.second = 3.4;
    p.second = '@';
}
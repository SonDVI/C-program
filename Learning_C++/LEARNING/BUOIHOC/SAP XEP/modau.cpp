/*
            SỬ DỤNG HÀM SẮP XẾP
    - do phuc tap : OlogN
    - sort day so : sort(a, a + n)
    - sort vector : sort(v.begin(), v.end())
    - muon sort giam dan :  them tham so greater<kieu_du_lieu>() o phan thu 3.
*/

#include <bits/stdc++.h>
#include <algorithm> // thư viên để sử dụng sắp xếp
using namespace std;
int main() {
    int a[] = {3, 2, 1, 4, 9, 8, 5, 7, 6, 10};

    int n = 10;
    // lưu ý phần chỉ số cuối phải là chỉ số sau chỉ số cuối, vì hàm sắp xếp sẽ không lấy chỉ số sau chỉ số cuối.
    sort(a, a + n); // sắp xếp theo thứ tự tăng dần
    //a la con trỏ, trỏ đến vị trí đầu của dãy a
    //a + n là con trỏ, trỏ đến vị trí sau vị trí cuối của dãy a.

    sort(a, a + n, greater<int>()); // sắp xếp giảm dần

    vector<int> v = {3, 2, 1, 4, 9, 8, 5, 7, 6, 10};

    sort(v.begin(), v.end()); // sắp xếp dành cho vector, ( ở đây vị trí  = iterator);

    sort(v.begin(), v.end()); // sap xep giam dan
}
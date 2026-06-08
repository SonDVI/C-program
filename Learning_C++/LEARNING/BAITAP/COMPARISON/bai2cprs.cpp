/*Cho mảng A[] gồm N phần tử và số nguyên dương X, bạn hãy sắp xếp các phần tử trong mảng theo yêu cầu như sau : • Sắp xếp các phần tử trong mảng theo abs của hiệu của các phần tử này với X tăng dần(tính trị tuyệt đối của A[i] với X rồi sắp tăng dần). Nếu có 2 phần tử có cùng giá trị sắp xếp này thì số nào nhỏ hơn sẽ in trước.

• Sắp xếp so cho các phần tử là số chẵn đứng trước, các phần tử là số lẻ đứng sau, trong đó chẵn tăng dần, lẻ giảm dần với 1 comparator duy nhất, không tách mảng.

Gợi ý : Khai báo X toàn cục vì hàm comparison function chỉ chấp nhận 2 tham số

*/
#include <bits/stdc++.h>
using namespace std;
int x;
int hieu(int a, int x) {
    return abs(a - x);
}

bool cmprs(int a, int b) {
    if(hieu(a, x) != hieu(b, x)) {
        return hieu(a, x) < hieu(b, x);
    }
    else return a < b;

}
bool cmprs1(int a, int b) {

    if(a % 2 == 0 && b % 2 != 0) {
        return true;
    }
    if(a % 2 != 0 && b % 2 == 0) {
        return false;
    }
    if(a % 2 == 0 && b % 2 == 0) {
        return a < b;
    }
    return a > b;

}
int main() {
    int n; cin >> n;
    int a[n];
    cin >> x;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n, cmprs);

    for(int x : a) {
        cout << x << " ";
    }
    sort(a, a + n, cmprs1);
    cout << endl;
    for(int x : a) {
        cout << x << " ";
    }
}
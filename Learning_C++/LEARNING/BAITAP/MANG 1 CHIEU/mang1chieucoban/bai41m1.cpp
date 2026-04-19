//28Tech không thích số 28 vì thế anh ta yêu cầu bạn xóa hết mọi phần tử trong mảng A[] có giá trị là 28. Sau đó in ra mảng sau khi xóa, nếu mảng không còn phần tử nào thì in ra EMPTY.
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != 28) v.push_back(a[i]);
    }

    if(v.empty()) {
        cout << "EMPTY" << endl;
    }
    else {
        for(int x : v) {
            cout << x << " ";
        }
    }
}
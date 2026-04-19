#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int a = 10;
    int *ptr1 = &a; //con trỏ cấp 1 có địa chỉ cụ thể trong bộ nhớ máy tính.
    int **ptr2 = &ptr1; // con trỏ cấp 2 có địa chỉ cụ thể, cấp cao hơn để lưu địa chỉ con trỏ cấp 1.
    int ***ptr3 = &ptr2; // con trỏ cấp 3 có địa chỉ cụ thể trong máy tính, cấp cao hơn để lưu địa chỉ con trỏ cấp 2.

    cout << *ptr3 << endl; // giải tham chiếu 1 lần sẽ ra ptr2.
    cout << **ptr3 << endl; // giải tham chiếu 2 lần sẽ ra ptr1.
    cout << ***ptr3 << endl; //giải tham chiếu 3 lần sẽ ra a.
}
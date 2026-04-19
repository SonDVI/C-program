/*
    Code sau có độ phức tạp là O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int b = 200;
    int c = 300;
    int sum = a + b + c;
// CHÚ Ý : Các phép toán như +, -, *, /, % hay các phép gán, so sánh và nhập xuất như cin, cout đều được coi là O(1) = CPU Operation.
    cout << sum << endl;
}

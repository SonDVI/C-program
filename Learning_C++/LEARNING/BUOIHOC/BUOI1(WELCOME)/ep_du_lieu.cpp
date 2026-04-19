//EP KIEU DU LIEU

/*
LONG LONG - > INT
DOUBLE -> FLOAT


*/
#include <iostream>

using namespace std;

int main() {
    double n = 3.5;
    int m = int(n); // ép kiểu từ double sang int, nó sẽ làm mất phần thập phân và chỉ giữ lại phần nguyên, nên m sẽ có giá trị là 3.
    cout << m << endl; // in ra giá trị của m, kết quả sẽ là 3.

    return 0;
}
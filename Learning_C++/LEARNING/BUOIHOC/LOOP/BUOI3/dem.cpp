#include <iostream>

using namespace std;

int main() {
    int n = 12356;
    int dem = 0;
    while (n != 0) {
        n /= 10; // chia n cho 10, loại bỏ chữ số cuối cùng của n. Quá trình này sẽ tiếp tục cho đến khi n trở thành 0.
        dem++; // tăng biến đếm lên 1 mỗi lần vòng lặp thực hiện, để đếm số lượng chữ số đã bị loại bỏ.
    }
    cout << n << " " << dem << endl; 
    return 0;
}
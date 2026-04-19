//CONTINUE

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // khi i bằng 5, lệnh continue sẽ được thực thi, và vòng lặp sẽ bỏ qua phần còn lại của lần lặp hiện tại và tiếp tục với lần lặp tiếp theo. Điều này có nghĩa là khi i đạt đến 5, chương trình sẽ không in ra giá trị của i và sẽ tiếp tục với i = 6.
        }
        cout << i << endl; // in ra giá trị của i, kết quả sẽ là 1, 2, 3, 4, 6, 7, 8, 9, 10 trên các dòng riêng biệt. Khi i đạt đến 5, vòng lặp sẽ bỏ qua phần còn lại của lần lặp đó và không in ra giá trị nào nữa.
    }
    cout << "done" << endl;
    return 0;
}
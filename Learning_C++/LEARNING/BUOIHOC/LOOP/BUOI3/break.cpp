//BREAK
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // khi i bằng 5, lệnh break sẽ được thực thi, và vòng lặp sẽ kết thúc ngay lập tức, không tiếp tục thực hiện các lần lặp tiếp theo.
        }
        cout << i << endl; // in ra giá trị của i, kết quả sẽ là 1, 2, 3, 4 trên các dòng riêng biệt. Khi i đạt đến 5, vòng lặp sẽ dừng lại và không in ra giá trị nào nữa.
    }
    cout << "done" << endl;
    

    for (int j = 8273; ; j++) {
        if (j % 17 == 0) {
            cout << j << endl;
            break; // khi j chia hết cho 17, lệnh break sẽ được thực thi, và vòng lặp sẽ kết thúc ngay lập tức, không tiếp tục thực hiện các lần lặp tiếp theo. Tim so nguyen duong nho nhat chia het cho 17 va lon hon 8273
        }
    }
    return 0;
}

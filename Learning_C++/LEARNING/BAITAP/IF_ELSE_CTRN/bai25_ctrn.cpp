//28tech có rất nhiều tiền :v. Anh ta có n đô la trong ngân hàng. Vì lý do bảo mật, anh ta muốn rút tiền mặt (chúng tôi sẽ không tiết lộ lý do tại đây). Các mệnh giá cho tờ đô la là 1, 5, 10, 20, 100. Số tờ tiền tối thiểu mà 28tech có thể nhận được sau khi rút toàn bộ số dư của mình là bao nhiêu?


#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        if (n % 100 == 0) {
            cout << n / 100 << endl;
        }
        else if (n % 100 % 20 == 0) {
            cout << n / 100 + n % 100 / 20 << endl;
        }
        else if (n % 100 % 20 % 10 == 0) {
            cout << n / 100 + n % 100 / 20 + n % 100 % 20 / 10 << endl;
        }
        else if (n % 100 % 20 % 10 % 5 == 0) {
            cout << n / 100 + n % 100 / 20 + n % 100 % 20 / 10 + n % 100 % 20 % 10 / 5 << endl;
        }
        else {
            cout << n / 100 + n % 100 / 20 + n % 100 % 20 / 10 + n % 100 % 20 % 10 / 5 + n % 100 % 20 % 10 % 5 << endl;
        }
    }
    else {
        cout << "INVALID" << endl;
    }
    
    return 0;
}
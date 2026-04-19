//ELSE IF

#include <iostream>

using namespace std;

int main() {
    int k = 3;
    if (k == 1) {
        cout << "28tech.com.vn\n";
    }
    else if ( k == 2) {
        cout << "X.com\n";
    }
    else if ( k == 3) {
        cout << "zalo\n";
    }
    else if ( k == 4) {
        cout << "thread\n";
        cout << "Rust\n";
    }
    else {
        cout << "HTML\n";
        cout << "CSS\n";
    }
    cout << "done !\n";
    return 0;
    // else if: được sử dụng để kiểm tra nhiều điều kiện khác nhau. Nếu điều kiện trong if là false, thì chương trình sẽ tiếp tục kiểm tra các điều kiện trong các khối else if tiếp theo cho đến khi tìm thấy một điều kiện đúng hoặc hết tất cả các khối else if. Nếu không có điều kiện nào đúng, thì khối lệnh trong else sẽ được thực thi.
}
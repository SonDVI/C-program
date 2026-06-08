/*
            THỨ TỰ TỪ ĐIỂN:
    - String đã được nạp chồng các toán tử so sánh, vì thế các bạn có thể so sánh 2 xâu theo thứ tự từ điển với các toán tử so sánh.

    - Thứ tự từ điển của 2 xâu :
        Thứ tự từ điển của string được xác định bằng cách so sánh từng ký tự 1 của 2 xâu từ đầu đến cuối , khi gặp ký tự đầu tiên khác nhau của 2 xâu thì dựa vào ký tự đó để xét thứ tự lớn nhỏ. Trong trường hợp không tìm được ký tự khác nhau thì xâu nào dài hơn sẽ có từ điển lớn hơn, hoặc nếu dài bằng thì 2 xâu bằng nhau. Thứ tự từ điển của ký tự thì dựa vào mã ASCII.
        (dùng toán tử so sánh để so sánh 2 xâu).

        ví dụ : S : a b c d z a u v
                T : a b b z d a k
        --> vì b < c (theo thứ tự từ điển) --> S > T.


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    /*Cho 2 số nguyên lớn N và M, mỗi số có không quá 1000 chữ số.

Bạn hãy in ra 28tech nếu N > M, 29tech nếu N < M và 30tech nếu N = M.

*/
    string s, t; cin >> s >> t;
    if(s.size() > t.size()) {
        cout << "28tech" << endl;
    }
    else if(s.size() < t.size()) {
        cout << "29tech" << endl;
    }
    else {
        if(s > t) {
            cout << "28tech" << endl;
        }
        else if(s < t) {
            cout << "29tech" << endl;
        }
        else {
            cout << "30tech" << endl;
        }
    }
    return 0;
}
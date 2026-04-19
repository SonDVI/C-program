/* N có phải là số chẵn? (Kiểm tra số dư của n với 2 xem có bằng 0 hay không)
N có phải là số vừa chia hết cho 3 vừa chia hết cho 5? // Kết hợp 2 điều kiện chia hết bằng toán tử AND
N có phải là số chia hết 3 nhưng không chia hết cho 7? // Kết hợp 2 điều kiện bằng toán tử AND
N có phải là số chia hết cho 3 hoặc 7? // Dùng toán tử OR
N là số lớn hơn 30 và nhỏ hơn 50? // Dùng toán tử AND
N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5? // if(n >= 30 &&())
N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố? // Kiểm tra n nằm trong đoạn [10, 99], kiểm tra chữ số hàng đơn vị là 2, 3, 5 hoặc 7
N có phải là số không vượt quá 100 và chia hết cho 23?
N không thuộc đoạn [10, 20]?
N có chữ số tận cùng là bội số của 3?
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0) {
        if (n % 2 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        
        if (n % 15 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n % 3 == 0 && n % 7 != 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n % 3 == 0 || n % 7 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n > 30 && n < 50) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n >= 10 && n <= 99 && (n % 10 == 2 || n % 10 == 3 || n % 10 == 5 || n % 10 == 7)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n <= 100 && n % 23 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (!(n >= 10 && n <= 20)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

        if (n % 10 % 3 == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "KHONG HOP LE" << endl;
    }
    return 0;
}
//Bizon the Champion được gọi là Champion vì một lý do. Bizon the Champion gần đây đã có một món quà - một tủ kính mới với n kệ và anh quyết định đặt tất cả những món quà của mình ở đó. Tất cả các món quà có thể được chia thành hai loại: huy chương và cúp. Bizon the Champion có a1 cúp giải nhất, a2 cúp giải nhì và a3 cúp giải ba. Bên cạnh đó, anh có b1 huy chương giải nhất, b2 huy chương giải nhì và b3 huy chương giải ba.
//Đương nhiên, phần thưởng trong tủ phải sắp xếp cho thật đẹp, đó là lý do Bizon the Champion quyết định tuân theo các quy tắc: bất kỳ kệ nào cũng không thể chứa cả cúp và huy chương cùng một lúc; không có kệ có thể chứa nhiều hơn năm cúp; không có kệ có thể có hơn mười huy chương. Giúp Bizon the Champion tìm hiểu xem chúng tôi có thể đặt tất cả các phần thưởng để tất cả các điều kiện được đáp ứng hay không.

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

    int sumA = a1 + a2 + a3;
    int sumB = b1 + b2 + b3;
    int ke;
    if (sumA % 5 == 0 && sumB % 10 == 0) {
        ke = sumA / 5 + sumB / 10;
        if (ke <= n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else if (sumA % 5 == 0 && sumB % 10 != 0) {
        ke = sumA / 5 + sumB / 10 + 1;
        if (ke <= n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else if (sumA % 5 != 0 && sumB % 10 == 0) {
        ke = sumA / 5 + 1 + sumB / 10;
        if (ke <= n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        ke = sumA / 5 + 1 + sumB / 10 + 1;
        if (ke <= n) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
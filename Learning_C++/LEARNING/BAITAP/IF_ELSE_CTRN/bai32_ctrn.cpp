//Gần đây Anton tìm thấy một hộp có chữ số trong phòng của mình. Có k2 chữ số 2, k3 chữ số 3, k5 chữ số 5 và k6 chữ số 6. Số nguyên yêu thích của Anton là 32 và 256. Anh quyết định soạn số nguyên này từ các chữ số anh có. Anh ta muốn làm cho tổng của các số nguyên này càng lớn càng tốt. Giúp anh ta giải quyết nhiệm vụ này! Mỗi chữ số có thể được sử dụng không quá một lần, tức là các số nguyên tổng hợp nên chứa không quá k2 chữ số 2, k3 chữ số 3, v.v. Tất nhiên, các chữ số không sử dụng không được tính vào tổng.
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    int k256 = min({k2, k5, k6}); //chon ra so luong to tien 256 co the dung
    k2 -= k256;
    int k32 = min({k2, k3});
    cout << (long long)k256 * 256 + (long long)k32 * 32 << endl;
    return 0;
}


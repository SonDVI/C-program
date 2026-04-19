//Một ngày ở hành tinh 28Tech có 28 giờ, mỗi giờ lại có 28 phút và mỗi phút lại có 28s. Hiện tại đồng hồ tại hành tinh 28Tech đang ở h giờ và m phút, câu hỏi đặt ra là sau k phút nữa, đồng hồ sẽ là bao nhiêu giờ bao nhiêu phút. Khi in ra nếu giờ hoặc phút là số có 1 chữ số, bạn phải thêm số 0 vào đầu.
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    int h, m, k;
    cin >> h >> m >> k;

    int so_phut = (h * 28 + m + k) % 784;
    
    int sph = so_phut / 28;
    int spm = so_phut % 28;

    cout << setfill('0') << setw(2) << sph << "h:"<< setfill('0') << setw(2) << spm << "m" << endl;
   
}


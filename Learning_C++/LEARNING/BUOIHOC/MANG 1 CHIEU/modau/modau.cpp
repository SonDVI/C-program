/*
            MẢNG 1 CHIỀU (1d ARRAY)
            (1 KIỂU DỮ LIỆU)


    - MẢNG 1 CHIỀU CÓ THỂ COI LÀ CÁC Ô TRỐNG TRONG Ổ NHỚ MÁY TÍNH ĐƯỢC ĐÁNH SỐ, ĐƯỢC DÙNG ĐỂ LƯU TRỮ.   
    
        >>VD: int a[10]; với dãy a[10] có thể chứa 10 phân tử.
        
            >>[chỉ số] được đánh từ 0 --> chỉ số bạn init.



*/

#include <iostream>
using namespace std;
using ll = long long;

int main() {
    /*int a[6] = {3, 2, 1, 8, 9, 4};
    for (int i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }*/


    //  cách nhập các số vào mảng.
    int n; cin >>n;
    int a[n]; // chú ý
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
}
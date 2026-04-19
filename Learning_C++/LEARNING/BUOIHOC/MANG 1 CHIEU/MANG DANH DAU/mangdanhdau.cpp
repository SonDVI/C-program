/*

            MẢNG ĐÁNH DẤU 
    
    - Dựa vào việc tạo một mảng thật lớn để đánh dấu.

    - Cho một mảng a[i] với i vô cùng lớn (init ngoài hàm), a[i]:
    X[1000000001];
    X : 0 1 2 3 4 5 6 7 8 9 ...
        0 1 1 1 0 1 0 0 1 0 ...
    X[3] = 1; (xuất hiện của số 3 trong dãy số)

    X[6] = 0; (không xuất hiện trong dãy số)

    ÁP DỤNG CHO NHIỀU BÀI TOÀN, VÍ DỤ NHƯ ĐẾM SỐ CÁC SỐ KHÁC NHAU TRONG DÃY.
*/


#include <iostream>
using namespace std;;
using ll = long long;

int X[10000001];

int main() {
    int a[] = {3, 2, 5, 1, 5, 3, 4, 4, 6};
    for(int k : a){
        X[k] = 1;
    }
    int dem = 0;
    for(int i = 0; i <= 10000000; i++) {
        if(X[i] == 1) {
            ++dem;
        }
    }
    cout << dem << endl;
    //hạn chế : không đánh dấu được số âm, và giá trị cần đánh dấu không vượt quá giới hạn của mảng đánh dấu.
}
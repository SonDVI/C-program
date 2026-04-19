// LOOP IN LOOP

#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 3; i++) {// 3 LẦN LẶP VÒNG LẶP BÊN NGOÀI.
        cout << "A" << endl;
        for (int j = 1; j <= 4; j++) { // 4 LẦN LẶP VÒNG LẶP BÊN TRONG, MỖI LẦN LẶP CỦA VÒNG LẶP BÊN NGOÀI.
            cout << i << " " << j << endl;
        }
        cout << "B" << endl;
    }

    // TỔNG LẦN LẶP 3x4 = 12 LẦN LẶP.
    /*
    i = 1, A 11
             12
             13
             14
           B  
    i = 2, A 21
             22
             23
             24
           B  
    i = 3, A 31
             32
             33
             34
           B  

    */
    return 0;
}
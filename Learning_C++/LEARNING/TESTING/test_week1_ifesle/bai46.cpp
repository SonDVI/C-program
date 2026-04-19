/*Đã gần đến Tết Nguyên Đán 2025, vậy các bạn đã biết năm 2025 âm lịch có tên gọi là gì chưa? Để xác định tên âm lịch của 1 năm người ta dựa vào Can Chi, có 10 Thiên Can lần lượt tương ứng với các số từ 0 tới 9, 12 Chi tương ứng với 12 con Giáp

10 Can : 0 : Canh, 1 : Tân, 2 : Nhâm, 3 : Quý, 4 : Giáp, 5 : Ất, 6 : Bính, 7 : Đinh, 8 : Mậu, 9 : Kỷ

12 Chi : Tý, Sửu, Dần, Mão, Thìn, Tị, Ngọ, Mùi, Thân, Dậu, Tuất, Hợi

Vậy để xác định tên âm lịch của 1 năm họ sẽ dựa vào chữ số cuối cùng của năm đó để biết năm đó có Can là gì, ví dụ năm 2023 có tận cùng là 3 nên nó sẽ can là Qúy, năm 2023 là năm Mão vì thế 2023 có tên âm lịch là Quý Mão.

Biết năm 1980 là năm Canh Thân, vậy bạn hãy xác định năm X (1980-2100) có tên âm lịch là gì ? Khi in ra đáp án hãy dùng chữ in hoa không dấu, Chú ý : Tý và Tị và chữ i dài i ngắn trong các tên Can, Chi.*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;

    int chi = n % 12;
    int can = n % 10;
    switch (can) {
        case 0:
            cout << "CANH ";
            break;
        case 1:
            cout << "TAN ";
            break;
        case 2:
            cout << "NHAM ";
            break;
        case 3:
            cout << "QUY ";
            break; 
        case 4:
            cout << "GIAP ";
            break;
        case 5:
            cout << "AT ";
            break;
        case 6:
            cout << "BINH ";
            break;
        case 7:
            cout << "DINH ";
            break;
        case 8:
            cout << "MAU ";
            break;
        case 9:
            cout << "KY ";
            break;
    }

    switch (chi) {
        case 0:
            cout << "THAN" << endl;
            break;
        case 1:
            cout << "DAU" << endl;
            break;
        case 2:
            cout << "TUAT" << endl;
            break;
        case 3:
            cout << "HOI" << endl;
            break;
        case 4:
            cout << "TY" << endl;
            break;
        case 5:
            cout << "SUU" << endl;
            break;
        case 6:
            cout << "DAN" << endl;
            break;
        case 7:
            cout << "MAO" << endl;
            break;
        case 8:
            cout << "THIN" << endl;
            break;
        case 9:
            cout << "TI" << endl;
            break;
        case 10:
            cout << "NGO" << endl;
            break;
        case 11:
            cout << "MUI" << endl;
            break;
    }
    return 0;
}

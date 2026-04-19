//SWITCH-CASE
#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    switch (n) {//switch chi hoat dong voi cac kieu du lieu nguyen thuc nhu int, char, enum, long, short
        case 1:
            cout << "Mot" << endl;
            break;//neu khong co break thi se tiep tuc chay den cac case ben duoi
        case 2:
            cout << "Hai" << endl;
            break;
        case 3:
            cout << "Ba" << endl;
            break;
        case 4 ... 10://tu 4 den 10 deu in ra "Tu den Muoi"
            cout << "Tu den Muoi" << endl;
            break;
        case 11: case 12: case 13: { //neu co nhieu case trung nhau thi co the gom chung vao 1 case nhu nay
            cout << "Muoi Mot den Muoi Ba" << endl;
            break;
        }
        default://neu khong co case nao trung voi n thi se chay vao default giong else cua if-else.
            cout << "Khong biet" << endl;
    }
    return 0;
}
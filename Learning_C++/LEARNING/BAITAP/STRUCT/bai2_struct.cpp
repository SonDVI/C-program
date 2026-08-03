//Xây dựng cấu trúc số phức gồm phần thực, phần ảo. Tiến hành nhập 2 số phức và tính tổng, hiệu, tích của 2 số phức này và in ra màn hình.


#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


struct SO_PHUC{
    int real;
    int virt;

};
void in(SO_PHUC a) {
    cout << a.real << " " << a.virt << endl;
}
void tong(SO_PHUC a, SO_PHUC b) {
    int real1 = a.real + b.real;
    int virt1 = a.virt + b.virt;

    a.real = real1;
    a.virt = virt1;
    in(a);
}

void hieu(SO_PHUC a, SO_PHUC b) {
    int real1 = a.real - b.real;
    int virt1 = a.virt - b.virt;

    a.real = real1;
    a.virt = virt1;

    in(a);
}

void tich(SO_PHUC a, SO_PHUC b) {
    int real1 = a.real * b.real - a.virt * b.virt;
    int virt1 = a.real * b.virt + a.virt * b.real;

    a.real = real1;
    a.virt = virt1;

    in(a);
}

int main() {
    SO_PHUC a;
    cin >> a.real >> a.virt;
    SO_PHUC b;
    cin >> b.real >> b.virt;

    tong(a, b);
    hieu(a, b);
    tich(a, b);

    return 0;
}
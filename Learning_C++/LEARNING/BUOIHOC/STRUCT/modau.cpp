/*
                    STRUCT
    - danh sách các thuộc tính ở đây chính là các trường dữ liệu để lưu thông tin cho struct. Bạn phải chỉ ra kiểu dữ liệu của các trường dữ liệu.

    syntax : struct struct_name{
            danh sách các thuộc tính
        }

    vd: cấu trúc sinh viên có tên, lớp, điểm gpa :
    struct sinhvien{
        string ten;
        string lop;
        double gpa;
    };
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct product{
    string id;
    string name;
    double price;

    void show() {
        cout << id << " " << name << " " << fixed << setprecision(2) << price << endl;
    } //ham void trong struct
};


struct Order{
    string id;
    product p;
};

int main() {
    product x;
    x.id = "P101";
    x.name = "TV";
    x.price = 5000000;

    x.show();

    product *ptr = &x;
    ptr->id = "P102";
    ptr->name = "quat";
    ptr->price = 300000;
    ptr->show();

    Order z;
    z.id = "ORD101";
    z.p.id = "P101";
    z.p.name = "TV";
    z.p.price = 5000000;
    z.p.show();

}
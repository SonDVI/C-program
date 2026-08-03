
/*Xây dựng lớp Person với các thuộc tính :

Tên, ngày sinh, địa chỉ, phương thức toString để trả về thông tin.

Lớp Student kế thừa từ lớp Person và có thêm thuộc tính là mã sinh viên, GPA và lớp, ghi đè phương thức toString.

Nhập danh sách sinh viên từ bàn phím và in ra màn hình danh sách sinh viên trong đó tên được chuẩn hóa và ngày sinh đưa về đúng chuẩn dd/mm/yyyy.

Đầu vào
Dòng 1 là N : số lượng sinh viên.

Các dòng tiếp theo là thông tin sinh viên, mỗi sinh viên được mô tả bằng 5 dòng :

• Tên

• Ngày sinh

• Địa chỉ

• Lớp

• Gpa.

Giới hạn
1<=N<=1000*/
#include <bits/stdc++.h>
using namespace std;
struct Date{
    string day, month, year;
};
class Person{
protected:
    string name;
    Date DateOfBirth;
    string address;
public:
    Person(string name, Date DateOfBirth, string address) {
        this->name = name;
        this->DateOfBirth = DateOfBirth;
        this->address = address;
    }
    void chuan_hoa() {
        while(DateOfBirth.day.size() < 2) DateOfBirth.day = "0" + DateOfBirth.day;
        while(DateOfBirth.month.size() < 2) DateOfBirth.month = "0" + DateOfBirth.month;
        while(DateOfBirth.year.size() < 4) DateOfBirth.year = "0" + DateOfBirth.year;

    }
    void normalizeName() {
        stringstream ss(name);
        string temp;
        string res = "";

        while(ss >> temp) {
            res += toupper(temp[0]);
            for(int i = 1; i < temp.size(); i++) {
                res += tolower(temp[i]);
            }
            res += " ";
        }
        res.pop_back();
        name = res;
    }

    void ToString() {
        cout << name << " " << DateOfBirth.day << "/" << DateOfBirth.month << "/" << DateOfBirth.year << " " << address << " ";
    }
};

class Student : public Person{
private:
    int id;
    double gpa;
    string lop;

public:
    Student(string name, Date DateOfBirth, string address,int id, double gpa, string lop) : Person(name, DateOfBirth, address) {
        this->id = id;
        this->gpa = gpa;
        this->lop = lop;
    }
    void To_String() {
        cout << setfill('0') << setw(4) << id << " ";
        Person::ToString();
        cout << lop << " ";
        string s = to_string(gpa);
        s = s.substr(0, s.find('.') + 3);
        cout << s << " ";
    }
};

int main() {
    string name, dorth, address, lop;
    double gpa;
    int id = 0;
    int n; cin >> n;

    cin.ignore();
    while(n > 0) {
        getline(cin, name);
        getline(cin, dorth);
        getline(cin, address);
        getline(cin, lop);

        cin >> gpa;


        cin.ignore();

        Date ngaysinh;
        stringstream ss(dorth);

        getline(ss, ngaysinh.day, '/');
        getline(ss, ngaysinh.month, '/');
        getline(ss, ngaysinh.year);
        ++id;
        Student c(name, ngaysinh, address, id, gpa, lop);
        c.normalizeName();
        c.chuan_hoa();
        c.To_String();
        cout << endl;
        n--;
    }
    return 0;
}

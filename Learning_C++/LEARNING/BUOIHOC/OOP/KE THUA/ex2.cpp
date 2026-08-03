
/*Trường đại học XYZ cần quản lý các đối tượng là sinh viên và giáo viên.

Sinh viên gồm các thông tin : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa.

Giáo viên gồm các thông tin : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương.

Thực hiện đọc các thông tin danh sách sinh viên và giáo viên từ bàn phím sau đó chuẩn hóa tên, ngày sinh và in ra danh sách sinh viên sau đó là danh sách giáo viên, biết rằng sinh viên sẽ có mã bắt đầu bằng SV (ví dụ SV112), giáo viên có mã bắt đầu bằng GV (ví dụ GV222).

Đầu vào
Dòng đầu tiên là N : số lượng giáo viên và sinh viên.

Các dòng tiếp theo mô tả thông tin của giáo viên hoặc sinh viên, mỗi thông tin gồm 6 dòng, đối với sinh viên 6 dòng gồm : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa, đối với giáo viên 6 dòng gồm : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương.

Giới hạn
1<=N<=1000

Đầu ra
Đầu tiên in ra danh sách giáo viên, mỗi giáo viên in ra thông tin trên 1 dòng, các thông tin cách nhau một dấu cách.

Những dòng tiếp theo in ra danh sách sinh viên, mỗi sinh viên in thông tin trên 1 dòng, các thông tin cách nhau một dấu cách, gpa in 2 số sau dấu phẩy.*/
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
    string id;
    double gpa;
    string lop;

public:
    Student(string id, string name, Date DateOfBirth, string address, string lop, double gpa) : Person(name, DateOfBirth, address) {
        this->id = id;
        this->gpa = gpa;
        this->lop = lop;
    }
    void To_String() {
        cout << id << " ";
        Person::ToString();
        cout << lop << " ";
        string s = to_string(gpa);
        s = s.substr(0, s.find('.') + 3);
        cout << s << " ";
        cout << endl;
    }
};

class Teacher : public Person{
private:
    string id_gvien;
    string khoa;
    int luong;
public: 
    Teacher(string id_gvien, string name, Date DateOfBirth, string address, string khoa, int luong) : Person(name, DateOfBirth, address) {
        this->id_gvien = id_gvien;
        this->khoa = khoa;
        this->luong = luong;
    }

    void To_String1() {
        cout << id_gvien << " ";
        Person::ToString();
        cout << khoa << " ";
        cout << luong;
        cout << endl;
    }
};

int main() {
    int n; cin >> n;
    vector<Student> student_list;
    vector<Teacher> teacher_list;

    cin.ignore();
    while(n > 0) {
        string id;
        getline(cin, id);

        string name, dobrth, address;
        getline(cin, name);
        getline(cin, dobrth);
        getline(cin, address);
        if(id[0] == 'S' && id[1] == 'V') {
            string lop;
            getline(cin, lop);
            double gpa; cin >> gpa;
            cin.ignore();

            Date namsinh;
            stringstream ss(dobrth);

            getline(ss, namsinh.day, '/');
            getline(ss, namsinh.month, '/');
            getline(ss, namsinh.year);

            Student c(id, name, namsinh, address, lop, gpa);
            c.chuan_hoa();
            c.normalizeName();
            student_list.push_back(c);
        }
        else if(id[0] == 'G' && id[1] == 'V') {
            string khoa;
            getline(cin, khoa);
            int luong; cin >> luong;
            cin.ignore();

            Date namsinh;
            stringstream ss(dobrth);

            getline(ss, namsinh.day, '/');
            getline(ss, namsinh.month, '/');
            getline(ss, namsinh.year);

            Teacher d(id, name, namsinh, address, khoa, luong);
            d.chuan_hoa();
            d.normalizeName();
            teacher_list.push_back(d);
        }
        --n;
    }
    cout << "DANH SACH GIAO VIEN :" << endl;
    for(auto x : teacher_list) {
        x.To_String1();
    }
    cout << "DANH SACH SINH VIEN :" << endl;
    for(auto y : student_list) {
        y.To_String();
    }

    return 0;
}

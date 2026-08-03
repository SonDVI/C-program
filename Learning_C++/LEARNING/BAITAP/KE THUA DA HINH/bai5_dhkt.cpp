/*Trường đại học XYZ cần quản lý các đối tượng là sinh viên và giáo viên.

Sinh viên gồm các thông tin : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa.

Giáo viên gồm các thông tin : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương.

Thực hiện đọc các thông tin danh sách sinh viên và giáo viên từ bàn phím sau đó chuẩn hóa tên, ngày sinh và in ra danh sách sinh viên sau đó là danh sách giáo viên, biết rằng sinh viên sẽ có mã bắt đầu bằng SV (ví dụ SV112), giáo viên có mã bắt đầu bằng GV (ví dụ GV222).

Đầu tiên in ra danh sách giáo viên theo lương giảm dần, nếu 2 giáo viên có cùng lương thì in theo mã giáo viên tăng dần(từ điển), tiếp đó in ra danh sách sinh viên theo gpa giảm dần, nếu 2 sinh viên có cùng gpa thì in theo mã sinh viên tăng dần(từ điển).

Đầu vào
Dòng đầu tiên là N : số lượng giáo viên và sinh viên.

Các dòng tiếp theo mô tả thông tin của giáo viên hoặc sinh viên, mỗi thông tin gồm 6 dòng, đối với sinh viên 6 dòng gồm : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa, đối với giáo viên 6 dòng gồm : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương.

Giới hạn
1<=N<=1000

Đầu ra
Đầu tiên in ra danh sách giáo viên, mỗi giáo viên in ra thông tin trên 1 dòng, các thông tin cách nhau một dấu cách.

Những dòng tiếp theo in ra danh sách sinh viên, mỗi sinh viên in thông tin trên 1 dòng, các thông tin cách nhau một dấu cách, gpa in 2 số sau dấu phẩy.*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

struct Date{
    string day, month, year;
};

class Person{
private: 
    string id;
    string name;
    Date date;
    string address;
public: 
    Person(string id, string name, Date date, string address) {
        this->id = id;
        this->name = name;
        this->date = date;
        this->address = address;
    }
    void normalize_name() {
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

    void normalize_date() {
        while(date.day.size() < 2) date.day = '0' + date.day;
        while(date.month.size() < 2) date.month = '0' + date.month;
        while(date.year.size() < 2) date.year = '0' + date.year;
    }

    virtual void To_String() {
        cout << id << " " << name << " " << date.day << '/' << date.month << '/' << date.year << " " << address;
    }

    string get_ID() {
        return id;
    }

};

class Student : public Person {
private:
    string lop;
    double gpa;
public:
    Student(string id, string name, Date date, string address, string lop, double gpa) : Person(id, name, date, address) {
        this->gpa = gpa;
        this->lop = lop;
    }

    void To_String() {
        Person::To_String();
        cout << " " << lop << " " << fixed << setprecision(2) << gpa;
    }

    double get_GPA() {
        return gpa;
    }
};

class Teacher : public Person {
private:
    string khoa;
    int luong;
public:
    Teacher(string id, string name, Date date, string address, string khoa, int luong) : Person(id, name, date, address) {
        this->khoa = khoa;
        this->luong = luong;
    }

    void To_String() {
        Person::To_String();
        cout << " " << khoa << " " << luong;
    }

    int get_LUONG() {
        return luong;
    }
};


bool cmp_student(Student* a, Student* b) {
    if(a->get_GPA() != b->get_GPA()) return a->get_GPA() > b->get_GPA();
    return a->get_ID() < b->get_ID();
}

bool cmp_teacher(Teacher* a, Teacher* b) {
    if(a->get_LUONG() != b->get_LUONG()) return a->get_LUONG() > b->get_LUONG();
    return a->get_ID() < b->get_ID();
}

int main() {
    int n; cin >> n;

    cin.ignore();

    vector<Teacher*> v1;
    vector<Student*> v2;
    while(n) {
        string id, name, birth, address;
        getline(cin, id);
        getline(cin, name);
        getline(cin, birth);
        getline(cin, address);

        Date date;
        stringstream ss(birth);
        getline(ss, date.day, '/');
        getline(ss, date.month, '/');
        getline(ss, date.year);

        if(id[0] == 'G') {
            string khoa; getline(cin, khoa);
            int luong; cin >> luong;
            cin.ignore();

            Teacher* gv = new Teacher(id, name, date, address, khoa, luong);
            gv->normalize_date();
            gv->normalize_name();
            v1.push_back(gv);
        }
        else if(id[0] == 'S') {
            string lop; getline(cin, lop);
            double gpa; cin >> gpa;
            cin.ignore();

            Student* sv = new Student(id, name, date, address, lop, gpa);
            sv->normalize_date();
            sv->normalize_name();
            v2.push_back(sv);
        }
        --n;
    }
    sort(v1.begin(), v1.end(), cmp_teacher);
    sort(v2.begin(), v2.end(), cmp_student);
    cout << "DANH SACH GIAO VIEN : " << endl;
    for(auto it : v1) {
        it->To_String();
        cout << endl;
    }
    cout << "DANH SACH SINH VIEN : " << endl;
    for(auto it : v2) {
        it->To_String();
        cout << endl;
    }
    return 0;
}
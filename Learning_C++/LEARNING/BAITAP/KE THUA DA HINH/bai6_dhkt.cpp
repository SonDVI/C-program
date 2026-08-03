/*Trường đại học XYZ cần quản lý các đối tượng là sinh viên và giáo viên.

Sinh viên gồm các thông tin : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa.

Giáo viên gồm các thông tin : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương, lớp mà giáo viên này phụ trách.

Thực hiện đọc các thông tin danh sách sinh viên và giáo viên từ bàn phím sau đó chuẩn hóa tên, ngày sinh, biết rằng sinh viên sẽ có mã bắt đầu bằng SV (ví dụ SV112), giáo viên có mã bắt đầu bằng GV (ví dụ GV222) sau đó hiển thị giáo viên phụ trách và các sinh viên thuộc về 1 lớp theo truy vấn.

Đầu vào
Dòng đầu tiên là N : số lượng giáo viên và sinh viên.

Các dòng tiếp theo mô tả thông tin của giáo viên hoặc sinh viên, mỗi thông tin gồm 6 dòng, đối với sinh viên 6 dòng gồm : mã sinh viên, tên, ngày sinh, địa chỉ, lớp, điểm gpa, đối với giáo viên 7 dòng gồm : mã giáo viên, tên, ngày sinh, địa chỉ, khoa, lương, lớp phụ trách.

Dòng cuối cùng trong input là tên lớp cần truy vấn.

Giới hạn
1<=N<=1000

Đầu ra
Đầu tiên in ra giáo viên phụ trách lớp, mỗi giáo viên in ra thông tin trên 1 dòng, các thông tin cách nhau một dấu cách, một lớp có thể có nhiều giáo viên cùng phụ trách.

Khi đó hãy liệt kê giáo viên theo danh sách.

Những dòng tiếp theo in ra danh sách sinh viên, mỗi sinh viên in thông tin trên 1 dòng, các thông tin cách nhau một dấu cách, gpa in 2 số sau dấu phẩy theo danh sách.*/
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
    string get_LOP(){
        return lop;
    }
};

class Teacher : public Person {
private:
    string khoa;
    int luong;
    string lopdaotao;
public:
    Teacher(string id, string name, Date date, string address, string khoa, int luong, string lopdaotao) : Person(id, name, date, address) {
        this->khoa = khoa;
        this->luong = luong;
        this->lopdaotao = lopdaotao;
    }

    void To_String() {
        Person::To_String();
        cout << " " << khoa << " " << luong << " " << lopdaotao;    
    }
    string get_LOPDAOTAO() {
        return lopdaotao;
    }
};


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

            string lopdaotao;
            getline(cin, lopdaotao);

            Teacher* gv = new Teacher(id, name, date, address, khoa, luong, lopdaotao);
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

    string lop_hoc; getline(cin, lop_hoc);
    cout << "DANH SACH GIAO VIEN PHU TRACH LOP " << lop_hoc << " :" << endl;
    for(auto it : v1) {
        if(it->get_LOPDAOTAO() == lop_hoc) {
            it->To_String();
            cout << endl;
        }
    }
    cout << "DANH SACH SINH VIEN LOP " << lop_hoc << " :" << endl;
    for(auto it : v2) {
        if(it->get_LOP() == lop_hoc) {
            it->To_String();
            cout << endl;
        }
    }
    return 0;
}
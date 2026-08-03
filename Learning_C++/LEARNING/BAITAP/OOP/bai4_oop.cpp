
/*Bạn hãy liệt kê những sinh viên trong danh sách này thuộc lớp CNTT1, mỗi sinh viên được in thông tin trên 1 dòng.

Thông tin về tên và ngày sinh cần được chuẩn hóa về dạng chuẩn.*/
#include <bits/stdc++.h>
using namespace std;

struct Date{
    string day, month, year;
};

class Student{
    private :
    string id, name, className;
    Date DateOfBirth;
    double gpa;

    public :
    Student(string id, string name, Date DateOfBirth, string className, double gpa) {
        this->id = id;
        this->name = name;
        this->DateOfBirth = DateOfBirth;
        this->className = className;
        this->gpa = gpa;
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

    void normalizeDate() {
        while(DateOfBirth.day.size() < 2) DateOfBirth.day = "0" + DateOfBirth.day;
        while(DateOfBirth.month.size() < 2) DateOfBirth.month = "0" + DateOfBirth.month;
        while(DateOfBirth.year.size() < 4) DateOfBirth.year = "0" + DateOfBirth.year;
    }

    string tostring() {
        string s = to_string(gpa);
        s = s.substr(0, s.find('.') + 3);
        return id + " " + name + " " + DateOfBirth.day + "/" + DateOfBirth.month + "/" + DateOfBirth.year + " " + className + " " + s;
    }


};

int main() {
    string id, name, dobrth, classname;
    double gpa;
    int n; cin >> n;
    cin.ignore();
    while(n != 0) {
        getline(cin, id);
        getline(cin, name);
        getline(cin, dobrth);
        getline(cin, classname);

        cin >> gpa;
        cin.ignore();

        Date date;
        stringstream ss(dobrth);
        getline(ss, date.day, '/');
        getline(ss, date.month, '/');
        getline(ss, date.year);

        Student sinhvien(id, name, date, classname, gpa);
        sinhvien.normalizeDate();
        sinhvien.normalizeName();
        if(classname == "CNTT1") cout << sinhvien.tostring() << endl;
        --n;
    }
    return 0;
}


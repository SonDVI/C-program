
/*Bạn hãy sắp xếp danh sách sinh viên này theo lớp tăng dần về từ điển, các sinh viên trong cùng một lớp sẽ được sắp xếp theo tên tăng dần về từ điển.

Trong đó khi so sánh tên để sắp xếp cần xét tên trước rồi mới tới họ và đệm.

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

    double getGPA() {
        return gpa;
    }

    string getid() {
        return id;
    }
    Date getdate() {
        return DateOfBirth;
    }

    string getname() {
        return name;
    }
    string getclassname() {
        return className;
    }
};

string tach_string(string x) {
    stringstream ss(x);
    string ten, ho, dem;
    getline(ss, ho, ' ');
    getline(ss, dem, ' ');
    getline(ss, ten);
    return ten + " " + ho + " " + dem;
}

bool cmp(Student x, Student y) {
    string a = tach_string(x.getname());
    string b = tach_string(y.getname());
    stringstream ss(a);
    string ho1, ho2, ten1, ten2, dem1, dem2;
    getline(ss, ten1, ' '); getline(ss, ho1, ' '); getline(ss, dem1);
    stringstream ss1(b);
    getline(ss1, ten2, ' '); getline(ss1, ho2, ' '); getline(ss1, dem2);

    if(x.getclassname() != y.getclassname()) return x.getclassname() < y.getclassname();
    else {
        if(ten1 != ten2) return ten1 < ten2;
        else if(ho1 != ho2) return ho1 < ho2;
        else if(dem1 != dem2) return dem1 < dem2;
    }
    return false;
}
int main() {
    string id, name, dobrth, classname;
    double gpa;
    int n; cin >> n;
    cin.ignore();
    vector<Student> v;
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
        v.push_back(sinhvien);
        --n;
    }
    sort(v.begin(), v.end(), cmp);
    for(Student x : v) {
        cout << x.tostring() << endl;
    }

    return 0;
}
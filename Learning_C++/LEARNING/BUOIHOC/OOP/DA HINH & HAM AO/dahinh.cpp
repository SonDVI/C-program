/*
                                Tính Đa Hình - Hàm Ảo Của OOP


    - 2 hay nhiều vai trò có thể quản lí chỉ trong 1 vector con trỏ (mang thuộc tính của lớp cha) --> tính đa hình tùy vào trường hợp vừa có thể là a vừa có thế là b,. . . .


    - Hàm Ảo  : 
        +) Ttrong C++, chúng ta không thể ghi đè các hàm nếu chúng ta sử dụng một con trỏ của lớp cơ sở để trỏ đến một đối tượng của lớp dẫn xuất.

        +) Sử dụng các hàm ảo trong lớp cơ sở đảm bảo rằng hàm có thể được ghi đè trong những trường hợp này.
*/
#include <bits/stdc++.h>
using namespace std;
struct Date{
    string day, month, year;
};
class Person{
protected:
    string id;
    string name;
    Date DateOfBirth;
    string address;
public:
    Person(string id, string name, Date DateOfBirth, string address) {
        this->id = id;
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

    virtual void ToString() {
        cout << id << " " << name << " " << DateOfBirth.day << "/" << DateOfBirth.month << "/" << DateOfBirth.year << " " << address << " ";
    }

    string getID() {
        return id;
    }
};

class Student : public Person{
private:
    
    double gpa;
    string lop;

public:
    Student(string id, string name, Date DateOfBirth, string address, string lop, double gpa) : Person(id, name, DateOfBirth, address) {
        
        this->gpa = gpa;
        this->lop = lop;
    }
    void To_String() {
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
    string khoa;
    int luong;
public: 
    Teacher(string id, string name, Date DateOfBirth, string address, string khoa, int luong) : Person(id, name, DateOfBirth, address) {
        this->khoa = khoa;
        this->luong = luong;
    }

    void To_String1() {
        Person::ToString();
        cout << khoa << " ";
        cout << luong;
        cout << endl;
    }
};

int main() {
    int n; cin >> n;
    //vector<Student> student_list;//
    //vector<Teacher> teacher_list;//
    vector<Person*> v;
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
            //Tạo ra con trỏ để lưu địa chỉ của thành sinh viên ( vì đang quản lí = trỏ ( cấp phát động))
            Person *s = new Student(id, name, namsinh, address, lop, gpa);
            s->chuan_hoa();
            s->normalizeName();
            v.push_back(s);
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
            //Tạo ra con trỏ để lưu địa chỉ của thằng giáo viên vì mình đang quản lí bằng trỏ ( cấp phát động)
            Person *s = new Teacher(id, name, namsinh, address, khoa, luong);
            s->chuan_hoa();
            s->normalizeName();
            v.push_back(s);
        }
        --n;
    }
    cout << "DANH SACH GIAO VIEN :" << endl;
    for(Person* x : v) {
        if(x->getID()[0] == 'G') {
            x->ToString();
            cout << endl;
        }
    }
    cout << "DANH SACH SINH VIEN :" << endl;
    for(Person* x : v) {
        if(x->getID()[0] =='S') {
            x->ToString();
            cout << endl;
        }   
    }
    return 0;
}

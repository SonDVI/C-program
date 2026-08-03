#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
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
        while(date.year.size() < 4) date.year = '0' + date.year;
    }


    virtual void To_String() {
        cout << id << " " << name << " " << date.day << "/" << date.month << "/" << date.year << " " << address;
    }

    string get_id() {
        return id;
    }

    string get_address() {
        return address;
    }

    virtual ~Person(){};
};

class Student : public Person{
private:
    double gpa;
    string lop;
public: 
    Student(string id, string name, Date date, string address, string lop, double gpa) : Person(id, name, date, address) {
        this->gpa = gpa;
        this->lop = lop;
    }

    void To_String() {
        Person::To_String();
        cout << " " << lop << " " << fixed << setprecision(2) << gpa;
    }
};


class Teacher : public Person{
private:
    int luong;
    string khoa;
    string lopdaotao;
public:
    Teacher(string id, string name, Date date, string address, string khoa, int luong, string lopdaotao) : Person(id, name, date, address) {
        this->khoa = khoa;
        this->luong = luong;
        this->lopdaotao = lopdaotao;
    }

    void To_String() {
        Person::To_String();
        cout << " " << khoa << " " << luong;
    }
};

int main() {
    int n; cin >> n;
    cin.ignore();
    vector<Person*> v;
    while(n > 0) {
        string id;
        string name;
        string date;
        string address;
    
        getline(cin, id);
        getline(cin, name);
        getline(cin, date);
        getline(cin, address);

        Date birth;
        stringstream ss(date);
        getline(ss, birth.day, '/');
        getline(ss, birth.month, '/');
        getline(ss, birth.year);

        if(id[0] == 'S' && id[1] == 'V') {
            string lop; getline(cin, lop);
            double gpa; cin >> gpa;
            cin.ignore();

            Person* person = new Student(id, name, birth, address, lop, gpa);
            person->normalize_date();
            person->normalize_name();
            v.push_back(person);
        }

        else if(id[0] == 'G' && id[1] == 'V') {
            string khoa; getline(cin, khoa);
            int luong; cin >> luong;
            cin.ignore();
            string lopdaotao; getline(cin, lopdaotao);
        
            Person* person = new Teacher(id, name, birth, address, khoa, luong, lopdaotao);
            person->normalize_date();
            person->normalize_name();
            v.push_back(person);
        }

        --n;
    }

    string dia_chi; getline(cin, dia_chi);

    cout << "DANH SACH GIAO VIEN CO DIA CHI TAI " << dia_chi << " :" << endl;
    for(auto it : v) {
        if(it->get_id()[0] == 'G' && it->get_address() == dia_chi) {
            it->To_String();
            cout << endl;
        }
    }

    cout << "DANH SACH SINH VIEN CO DIA CHI TAI " << dia_chi << " :" << endl;
    for(auto it : v) {
        if(it->get_id()[0] == 'S' && it->get_address() == dia_chi) {
            it->To_String();
            cout << endl;
        }
    }

    for(auto it : v) {
        delete it;
    }

    v.clear();
    return 0;
}
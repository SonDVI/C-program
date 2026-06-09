#include <bits/stdc++.h>
using namespace std;
struct Date{
    string day, month, year;
};
class Student{
    private :
    string id;
    string name;
    Date DateOfBirth;
    string className;
    double gpa;

    public :
    Student(string id, string name, Date DateOfBirth, string className, double gpa) {
        this->id = id; this->name = name; this->DateOfBirth = DateOfBirth; this->className = className;
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

    void normalizeDateOfBirth(){
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
    string id, name, dobStr, className;
    double gpa;

    getline(cin, id);
    getline(cin, name);
    getline(cin, dobStr);
    getline(cin, className);
    cin >> gpa;

    Date dob;
    stringstream ss(dobStr);
    getline(ss, dob.day, '/');
    getline(ss, dob.month, '/');
    getline(ss, dob.year);

    Student s(id, name, dob, className, gpa);
    s.normalizeDateOfBirth();
    s.normalizeName();
    cout << s.tostring() << endl;

    return 0;
}
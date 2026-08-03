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
    int conductScore;

    public :

    Student(string id, string name, Date DateOfBirth, string className, double gpa, int conductScore) {
        this->id = id;
        this->name = name;
        this->DateOfBirth = DateOfBirth;
        this->className = className;
        this->gpa = gpa;
        this->conductScore = conductScore;

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
        string d = to_string(conductScore);
        
        return id + " " + name + " " + DateOfBirth.day + "/" + DateOfBirth.month + "/" + DateOfBirth.year + " " + className + " " + s + " " + d;
    }

    double getGPA() {
        return gpa;
    }
    int getDRL() {
        return conductScore;
    }
};

bool cmp(Student x, Student y) {
    if(x.getGPA() != y.getGPA()) return x.getGPA() > y.getGPA();
    return x.getDRL() > y.getDRL();
}

int main() {
    string id, name, dobrth, classname;
    double gpa;
    int conductScore;
    int n; cin >> n;
    cin.ignore();
    vector<Student> v;
    while(n != 0) {
        getline(cin, id);
        getline(cin, name);
        getline(cin, dobrth);
        getline(cin, classname);

        cin >> gpa;
        cin >> conductScore;
       

        cin.ignore();

        Date date;
        stringstream ss(dobrth);
        getline(ss, date.day, '/');
        getline(ss, date.month, '/');
        getline(ss, date.year);

        Student sinhvien(id, name, date, classname, gpa, conductScore);
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


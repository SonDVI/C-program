#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct DATE{
    string day, month, year;
};

class SINHVIEN{
private:
    string id, name, clas;
    DATE date;
    double gpa;
public:
    SINHVIEN();
    SINHVIEN(string, string, DATE, string, double);
    void normalize();
    void show();
};
SINHVIEN::SINHVIEN(string id, string name, DATE date, string clas, double gpa) {
    this->id = id;
    this->name = name;
    this->date = date;
    this->clas = clas;
    this->gpa = gpa;
}
void SINHVIEN::normalize() {
    while(date.day.size() < 2) date.day = '0' + date.day;
    while(date.month.size() < 2) date.month = '0' + date.month;
    while(date.year.size() < 4) date.year = '0' + date.year;
}

void SINHVIEN::show() {
    cout << id << " " << name << " " << clas << " " << date.day << "/" << date.month << "/" << date.year << " " << fixed << setprecision(1) << gpa << endl;
}
int main() {
    string id, name, clas, birth;
    id = "SV001";
    DATE date;
    double gpa;
    getline(cin, name);
    getline(cin, clas);
    getline(cin, birth);
    stringstream ss(birth);

    getline(ss, date.day, '/');
    getline(ss, date.month, '/');
    getline(ss, date.year);

    cin >> gpa;
    SINHVIEN a(id, name, date, clas, gpa);
    a.normalize();
    a.show();

    return 0;
}
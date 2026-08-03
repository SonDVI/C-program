#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;


struct DATE{
    string day, month, year;
};
class NHANVIEN{
private:
    string id, name, sex, address, tax_id;
    
    DATE date, date_tax;
public: 
    NHANVIEN();
    NHANVIEN(string, string, string, DATE, string, string, DATE);
    void normalize();
    void normalize2();
    void show();
};

NHANVIEN::NHANVIEN(string id, string name, string sex, DATE date, string address, string tax_id, DATE date_tax) {
    this->id = id;
    this->name = name;
    this->sex = sex;
    this->date = date;
    this->address = address;
    this->tax_id = tax_id;
    this->date_tax = date_tax;
}

void NHANVIEN::normalize() {
    while(date.day.size() < 2) date.day = '0' + date.day;
    while(date.month.size() < 2) date.month = '0' + date.month;
    while(date.year.size() < 4) date.year = '0' + date.year;
}
void NHANVIEN::normalize2() {
    while(date_tax.day.size() < 2) date_tax.day = '0' + date_tax.day;
    while(date_tax.month.size() < 2) date_tax.month = '0' + date_tax.month;
    while(date_tax.year.size() < 4) date_tax.year = '0' + date_tax.year;
}

void NHANVIEN::show() {
    cout << id << " " << name << " " << sex << " " << date.day << '/' << date.month << '/' << date.year << " " << address << " " << tax_id << " " << date_tax.day << '/' << date_tax.month << '/' << date_tax.year << endl;
}

int main() {
    string id = "00001";
    string name, sex, birth, address, birth_tax, tax_id;
    getline(cin, name);
    getline(cin, sex);
    getline(cin, birth);
    getline(cin, address);
    getline(cin, tax_id);
    getline(cin, birth_tax);

    DATE date, date_tax;
    stringstream ss(birth);
    getline(ss, date.day, '/');
    getline(ss, date.month, '/');
    getline(ss, date.year);

    stringstream ss1(birth_tax);
    getline(ss1, date_tax.day, '/');
    getline(ss1, date_tax.month, '/');
    getline(ss1, date_tax.year);

    NHANVIEN a(id, name, sex, date, address, tax_id, date_tax);
    a.normalize2();
    a.normalize();
    a.show();
    return 0;
}
//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Bạn hãy liệt kê các sinh viên sinh vào tháng 4.


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Date{
    string day, month, year;
};

struct SINHVIEN{
    string name;
    Date date;
    string address;
    double gpa;
};

void PRINT(SINHVIEN a) {
    cout << a.name << " " << a.date.day << '/' << a.date.month << '/' << a.date.year << " " << a.address << " " << fixed << setprecision(2) << a.gpa;
}

int main() {
    int n; cin >> n;
    cin.ignore();
    vector<SINHVIEN> v;
    while(n) {
        SINHVIEN a;

        getline(cin, a.name);
        string birth;
        getline(cin, birth);
        stringstream ss(birth);
        getline(ss, a.date.day, '/');
        getline(ss, a.date.month, '/');
        getline(ss, a.date.year);

        getline(cin, a.address);
        cin >> a.gpa;

        cin.ignore();
        v.push_back(a);
        --n;
    }
    for(auto it : v) {
        if(it.date.month == "4") {
            PRINT(it);
            cout << endl;
        }
    }
    return 0;
}

//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Lọc ra những sinh viên quê ở Nam Định có GPA >= 2.5






#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <vector>

using namespace std;



struct SINHVIEN {
    string name;
    string date;
    string address;
    double gpa;
};

void PRINT(SINHVIEN a){
    cout << a.name << " " << a.date << " " << a.address << " " << fixed << setprecision(2) << a.gpa;
}


int main() {
    int n; cin >> n;
    cin.ignore();
    vector<SINHVIEN> v;
    while(n) {
        SINHVIEN a;
        getline(cin, a.name);
        getline(cin, a.date);
        getline(cin, a.address);
        cin >> a.gpa;

        cin.ignore();

        v.push_back(a);
        --n;
    }

    
    for(auto x : v) {
        if(x.gpa >= 2.5 && x.address == "Nam Dinh") {
            PRINT(x);
            cout << endl;
        }
    }
    return 0;
}
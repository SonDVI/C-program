
//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Dựa vào kết quả GPA những sinh viên nào có điểm gpa < 1.0 sẽ bị đuổi học, nhiệm vụ của bạn là xóa những sinh viên có gpa < 1.0 sau đó in ra danh sách sinh viên còn lại.








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

        if(a.gpa >= 1.0) v.push_back(a);
        --n;
    }
    for(auto x : v) {
        PRINT(x);
        cout << endl;
    }
    

    return 0;
}
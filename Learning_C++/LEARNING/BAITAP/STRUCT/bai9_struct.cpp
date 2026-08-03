//Đại học 28Univerisy quản lý 1 danh sách sinh viên gồm thông tin về tên, ngày sinh, địa chỉ và GPA. Thực hiện sắp xếp sinh viên theo địa chỉ tăng dần về thứ tự từ điển, nếu 2 sinh viên cùng địa chỉ thì sinh viên nào có gpa cao hơn sẽ xếp trước.


#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <map>
#include <climits>
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
    map<string, int> mp;
    vector<SINHVIEN> v;
    while(n) {
        SINHVIEN a;
        getline(cin, a.name);
        getline(cin, a.date);
        getline(cin, a.address);
        mp[a.address]++;
        cin >> a.gpa;

        cin.ignore();

        v.push_back(a);
        --n;
    }
    int max_int = INT_MIN;
    for(auto it = mp.begin(); it != mp.end(); it++) {
        max_int = max(it->second, max_int);
    }

    for(auto it = mp.begin(); it != mp.end(); it++) {
        if(max_int == it->second) {
            cout << it->first << endl;
        }
    }

    return 0;
}
//Đại học 28Univerisy nhận được 1 danh sách học sinh gồm thông tin về tên, ngày sinh, địa chỉ, điểm thi đại học của 3 môn Toán, Lý, Hóa. Nhiệm vụ của bạn dựa trên điểm trúng tuyển của ngành CNTT là 24 để xác định bạn nào trượt, bạn nào đỗ. Ngoài ra bạn còn phải tìm ra thủ khoa ngành CNTT năm nay.


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <climits>

using namespace std;

struct SINHVIEN {
    string name;
    string date;
    string address;
    int toan, ly, hoa;
    int tong;
};

int tongdiem(SINHVIEN &a) {
    return a.tong = a.toan + a.ly + a.hoa;
}

void in(SINHVIEN a) {
    cout << a.name << " " << a.date << " " << a.address << " " << a.tong;
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
        cin >> a.toan >> a.ly >> a.hoa;
        cin.ignore();

        tongdiem(a);
        v.push_back(a);
        --n;
    }

    cout << "DANH SACH THU KHOA :" << endl;
    
    int thu_khoa = INT_MIN;
    for(auto it : v) {
        thu_khoa = max(it.tong, thu_khoa);
    }

    for(auto it : v) {
        if(thu_khoa == it.tong) {
            in(it);
            cout << endl;
        }
    }


    cout << "KET QUA XET TUYEN:" << endl; 
    for(auto it : v) {
        if(it.tong >= 24){ 
            
        in(it); 
        cout << " " << "DO" << endl;
        }
        else { 
            in(it); cout << " " << "TRUOT" << endl;
        }
    }
}
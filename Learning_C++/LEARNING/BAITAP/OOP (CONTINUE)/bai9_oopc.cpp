/*Trường phổ thông XYZ tính lương giáo viên theo quy tắc sau:

Mỗi giáo viên có mã ngạch gồm 4 ký tự trong đó. 2 ký tự đầu là chức vụ (HT: Giáo viên kiêm nhiệm Hiệu trưởng, HP: Giáo viên kiêm nhiệm Hiệu phó, GV: Giáo viên thường).

2 ký tự số cuối cùng cho biết hệ số bậc lương (không quá 20).

Lương cơ bản của mỗi giáo viên cũng có thể khác nhau. Phụ cấp quy định như sau. HT: 2.000.000. HP: 900.000. GV: 500.000.

Thu nhập được tính bằng lương cơ bản nhân với hệ số bậc lương cộng thêm phụ cấp. Hãy tính lương cho 1 giáo viên theo quy tắc trên.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
using namespace std;

class PERSON{
private:
    string id, name;
public:
    PERSON();
    PERSON(string, string);
    void show();
    int getRANK();
};

PERSON::PERSON(string id, string name) {
    this->id = id;
    this->name = name;
}
int PERSON::getRANK() {
    if(id[2] == '0') {
        return stoi(id.substr(3)); 
    }
    else if(id[2] != '0') {
        return stoi(id.substr(2));
    }
    return 1;
}
void PERSON::show() {
    int rank = getRANK();
    cout << id << " " << name << " " << rank << " ";
}

class HIEUTRUONG : public PERSON {
private:
    int luong_coban;
    int luong_phucap = 2000000;
public:
    HIEUTRUONG();
    HIEUTRUONG(string, string, int);
    void show();
};

HIEUTRUONG::HIEUTRUONG(string id, string name, int luong_coban) : PERSON(id, name) {
    this->luong_coban = luong_coban;
}
void HIEUTRUONG::show(){
    int rank = PERSON::getRANK();
    PERSON::show();

    cout << luong_coban * rank + luong_phucap << endl;
}


class HIEUPHO : public PERSON {
private:
    int luong_coban;
    int luong_phucap = 900000;
public:
    HIEUPHO();
    HIEUPHO(string, string, int);
    void show();
};

HIEUPHO :: HIEUPHO(string id, string name, int luong_coban) : PERSON(id, name) {
    this->luong_coban = luong_coban;
}
void HIEUPHO::show(){
    int rank = PERSON::getRANK();
    PERSON::show();

    cout << luong_coban * rank + luong_phucap << endl;
}


class GIAOVIEN : public PERSON {
private:
    int luong_coban;
    int luong_phucap = 500000;
public:
    GIAOVIEN();
    GIAOVIEN(string, string, int);
    void show();
};

GIAOVIEN::GIAOVIEN(string id, string name, int luong_coban) : PERSON(id, name) {
    this->luong_coban = luong_coban;
}
void GIAOVIEN::show(){
    int rank = PERSON::getRANK();
    PERSON::show();

    cout << luong_coban * rank + luong_phucap << endl;
}


int main() {
    string id;          getline(cin, id);
    string name;        getline(cin, name);
    int luong_coban;    cin >> luong_coban;
    cin.ignore();
    if(id[0] == 'H' && id[1] == 'T') {
        HIEUTRUONG a(id, name, luong_coban);
        a.show();
    }
    else if(id[0] == 'H' && id[1] == 'P') {
        HIEUPHO a(id, name, luong_coban);
        a.show();
    }
    else if(id[0] == 'G' && id[1] == 'V') {
        GIAOVIEN a(id, name, luong_coban);
        a.show();
    }

    return 0;
}
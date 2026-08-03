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
protected:
    string id;
    string name;
    int ngay_cong;
    int luong_coban;
    double thuong;
public:
    PERSON();
    PERSON(string, string, int, int, double);
    void check();
    void show();
};
PERSON::PERSON(string id, string name, int ngay_cong, int luong_coban, double thuong) {
    this->id = id;
    this->name = name;
    this->ngay_cong = ngay_cong;
    this->luong_coban = luong_coban;
    this->thuong = thuong;
}
void PERSON::show() {
    cout << id << " " << name << " " << luong_coban * ngay_cong << " " << thuong * luong_coban * ngay_cong << " ";
}

class GD : public PERSON {
private:
    int phu_cap;
public:
    GD();
    GD(string, string, int, int, double, int);
    void show();
};
GD::GD(string id, string name, int ngay_cong, int luong_coban, double thuong, int phu_cap) : PERSON(id, name, ngay_cong, luong_coban, thuong) {
    this->phu_cap = phu_cap;
}
void GD::show() {
    PERSON::show();

    cout << phu_cap << " " << int(luong_coban * ngay_cong + (luong_coban * thuong * ngay_cong) + phu_cap) << endl;
}



class PGD : public PERSON {
private:
    int phu_cap;
public:
    PGD();
    PGD(string, string, int, int, double, int);
    void show();
};
PGD::PGD(string id, string name, int ngay_cong, int luong_coban, double thuong, int phu_cap) : PERSON(id, name, ngay_cong, luong_coban, thuong) {
    this->phu_cap = phu_cap;
}
void PGD::show() {
    PERSON::show();


    cout << phu_cap << " " << int(luong_coban * ngay_cong + (luong_coban * thuong * ngay_cong) + phu_cap) << endl;
}

class TP : public PERSON {
private:
    int phu_cap;
public:
    TP();
    TP(string, string, int, int, double, int);
    void show();
};
TP::TP(string id, string name, int ngay_cong, int luong_coban, double thuong, int phu_cap) : PERSON(id, name, ngay_cong, luong_coban, thuong) {
    this->phu_cap = phu_cap;
}
void TP::show() {
    PERSON::show();


    cout << phu_cap << " " << int(luong_coban * ngay_cong + (luong_coban * thuong * ngay_cong) + phu_cap) << endl;
}

class NV : public PERSON {
private:
    int phu_cap;
public:
    NV();
    NV(string, string, int, int, double, int);
    void show();
};
NV::NV(string id, string name, int ngay_cong, int luong_coban, double thuong, int phu_cap) : PERSON(id, name, ngay_cong, luong_coban, thuong) {
    this->phu_cap = phu_cap;
}
void NV::show() {
    PERSON::show();


    cout << phu_cap << " " << int(luong_coban * ngay_cong + (luong_coban * thuong * ngay_cong) + phu_cap) << endl;
}

int main() {
    string id = "NV01";
    string name; getline(cin, name);
    int ngay_cong, luong_coban, phu_cap;
    double thuong;
    
    cin >> luong_coban >> ngay_cong;
    cin.ignore();
    string rank;
    getline(cin, rank);
    if(ngay_cong >= 25) thuong = 0.2;
    else if(22 <= ngay_cong && ngay_cong < 25) thuong = 0.1;
    else thuong = 0;
    if(rank[0] == 'G' && rank[1] == 'D') {
        phu_cap = 250000;
        GD a(id, name, ngay_cong, luong_coban, thuong, phu_cap);
        
        a.show();
    }
    else if(rank[0] == 'P' && rank[1] == 'G') {
        phu_cap = 200000;
        PGD a(id, name, ngay_cong, luong_coban, thuong, phu_cap);
        
        a.show();
    }
    else if(rank[0] == 'T' && rank[1] == 'P') {
        phu_cap = 180000;
        TP a(id, name, ngay_cong, luong_coban, thuong, phu_cap);
        a.show();
    }
    else if(rank[0] == 'N' && rank[1] == 'V') {
        phu_cap = 150000;
        NV a(id, name, ngay_cong, luong_coban, thuong, phu_cap);
        a.show();
    }
    return 0;
}
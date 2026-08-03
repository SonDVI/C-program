#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
using namespace std;

class HinhChuNhat{
private:
    int rong, cao;
    string mausac;
public:
    HinhChuNhat();
    HinhChuNhat(int, int, string);
    int dienTich();
    int chuVi();
    void inThongTin();
    void normalize();

};
HinhChuNhat::HinhChuNhat(int rong, int cao, string mausac) {
    this->rong = rong;
    this->cao = cao;
    this->mausac = mausac;
}

int HinhChuNhat::dienTich() {
    int dientich;
    return dientich = rong * cao;
}

int HinhChuNhat::chuVi() {
    int chuvi;
    return chuvi = 2 * (rong + cao);
}

void HinhChuNhat::inThongTin() {
    int p = dienTich();
    int s = chuVi();
    cout << s << " " << p << " " << mausac << endl;
}

void HinhChuNhat::normalize() {
    string s;
    string temp = "";
    stringstream ss(mausac);
    while(ss >> s) {
        temp += toupper(s[0]);
        for(int i = 1; i < s.size(); i++) {
            temp += tolower(s[i]);
        }
        temp += " ";
    }
    temp.pop_back();
    mausac = temp;
}


int main() {
    int rong, cao; cin >> rong >> cao;
    cin.ignore();
    string mausac; getline(cin, mausac);
    if(rong > 0 && cao > 0) {
        HinhChuNhat a(rong, cao, mausac);
        a.normalize();
        a.inThongTin();
    }
    else {
        cout << "INVALID" << endl;
    }
    return 0;
}

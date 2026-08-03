#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>
using namespace std;

class HOCSINH{
private:
    string name, ngaysinh;
    double toan, ly, hoa;


public: 
    HOCSINH();
    HOCSINH(string, string, double, double, double);
    void hienthi();
};

HOCSINH::HOCSINH(string name, string ngaysinh, double toan, double ly, double hoa) {
    this->name = name;
    this->ngaysinh = ngaysinh;
    this->toan = toan;
    this->ly = ly;
    this->hoa = hoa;
};

void HOCSINH::hienthi() {
    cout << name << " " << ngaysinh << " " << fixed << setprecision(1) << toan + ly + hoa;
}

int main() {
    string s; getline(cin, s);
    string ngaysinh; getline(cin, ngaysinh);
    double toan, ly, hoa;
    cin >> toan >> ly >> hoa;
    HOCSINH a(s, ngaysinh, toan, ly, hoa);
    a.hienthi();
    return 0;
}
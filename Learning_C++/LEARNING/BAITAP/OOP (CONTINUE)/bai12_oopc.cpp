#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
using namespace std;

class HOCSINH{
private:
    string id_area;
    string name;
    double toan, ly, hoa;
    double diem_kv;
public:
    HOCSINH();
    HOCSINH(string, string, double, double, double, double);
    void show();
    char getkhuvuc();
};
HOCSINH::HOCSINH(string id_area, string name, double toan, double ly, double hoa, double diem_kv) {
    this->id_area = id_area;
    this->name = name;
    this->toan = toan;
    this->ly = ly;
    this->hoa = hoa;
    this->diem_kv = diem_kv;
}

void HOCSINH::show() {

    cout << id_area << " " << name << " " << id_area[2] << " " << toan + ly + hoa + diem_kv << " ";
}

int main() {
    string id_area; 
    string name;
    double toan, ly, hoa, diem_kv;
    getline(cin, id_area);
    getline(cin, name);
    cin >> toan >> ly >> hoa;
    
    cin.ignore();
    if(id_area[2] == '1') {
        diem_kv = 0.5;
        double sum = toan + ly + hoa + diem_kv;
        HOCSINH a(id_area, name, toan, ly, hoa, diem_kv);
        if(sum < 24) {
            a.show();
            cout << "TRUOT" << endl;
        }
        else {
            a.show();
            cout << "TRUNG TUYEN" << endl;
        }
    }
    else if(id_area[2] == '2') {
        diem_kv = 1;
        double sum = toan + ly + hoa + diem_kv;
        HOCSINH a(id_area, name, toan, ly, hoa, diem_kv);
        if(sum < 24) {
            a.show();
            cout << "TRUOT" << endl;
        }
        else {
            a.show();
            cout << "TRUNG TUYEN" << endl;
        }
    }
    else if(id_area[2] == '3') {
        diem_kv = 2.5;
        double sum = toan + ly + hoa + diem_kv;
        HOCSINH a(id_area, name, toan, ly, hoa, diem_kv);
        if(sum < 24) {
            a.show();
            cout << "TRUOT" << endl;
        }
        else {
            a.show();
            cout << "TRUNG TUYEN" << endl;
        }
    }
    return 0;

}





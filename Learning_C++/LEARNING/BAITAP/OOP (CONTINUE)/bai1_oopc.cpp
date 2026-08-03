#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <climits>
#include <numeric>
using namespace std;

class PHANSO{
private: 
    long long tu, mau;
public: 
    PHANSO();
    PHANSO(long long , long long );
    void toi_gian();
    void hien_thi();
};

PHANSO::PHANSO(long long tu, long long mau) {
    this->tu = tu;
    this->mau = mau;
}

void PHANSO::toi_gian() {
    long long a = gcd(tu, mau);
    tu /= a;
    mau /= a;
    if(mau < 0) {
        tu = -tu;
        mau = -mau;
    }
}

void PHANSO::hien_thi() {
    cout << tu << '/' << mau;
}
int main() {
    long long tu, mau;
    cin >> tu;
    cin >> mau;
    PHANSO a(tu, mau);
    a.toi_gian();
    a.hien_thi();
    return 0;
}

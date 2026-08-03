#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
using namespace std;

class POINT{
private:
    double x, y;
public:
    POINT();
    double getX();
    double getY();
    POINT(double, double);
};
POINT::POINT(double x, double y) {
    this->x = x;
    this->y = y;
}
POINT::POINT() {
    this->x = 0;
    this->y = 0;
}
double POINT::getX() {
    return x;
}
double POINT::getY() {
    return y;
}

class TRIANGLE : public POINT{
private:
    POINT a, b, c;
public:
    TRIANGLE(POINT, POINT, POINT);
    double ab(POINT, POINT);
    double bc(POINT, POINT);
    double ac(POINT, POINT);
    bool check(POINT, POINT, POINT);
    double chuvi(POINT, POINT, POINT);
    double dientich(POINT, POINT, POINT);
};

TRIANGLE::TRIANGLE(POINT a, POINT b, POINT c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

double TRIANGLE::ab(POINT a, POINT b) {
    double dx = a.getX() - b.getX();
    double dy = a.getY() - b.getY();
    return sqrt(dx * dx + dy * dy);
}
double TRIANGLE::bc(POINT b, POINT c) {
    double dx = b.getX() - c.getX();
    double dy = b.getY() - c.getY();
    return sqrt(dx * dx + dy * dy);
}
double TRIANGLE::ac(POINT a, POINT c) {
    double dx = a.getX() - c.getX();
    double dy = a.getY() - c.getY();
    return sqrt(dx * dx + dy * dy);
}
bool TRIANGLE::check(POINT a, POINT b, POINT c) {
    double a_b = ab(a, b);
    double a_c = ac(a, c);
    double b_c = bc(b, c);
    if(a_b + a_c > b_c && a_b + b_c > a_c && a_c + b_c > a_b) return true;
    return false;
}

double TRIANGLE::chuvi(POINT a, POINT b, POINT c) {
    double a_b = ab(a, b);
    double a_c = ac(a, c);
    double b_c = bc(b, c);
    return a_b + a_c + b_c;
}
double TRIANGLE::dientich(POINT a, POINT b, POINT c) {
    double a_b = ab(a, b);
    double a_c = ac(a, c);
    double b_c = bc(b, c);
    double p = chuvi(a, b, c) / 2;
    return sqrt(p * (p - a_b) * (p - a_c) * (p - b_c));
}


int main() {
    int n; cin >> n;
    while(n) {
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        POINT a(x1, y1);
        POINT b(x2, y2);
        POINT c(x3, y3);
        TRIANGLE abc(a, b, c);
        if(abc.check(a, b, c)) {
            cout << fixed << setprecision(3) << abc.chuvi(a, b, c) << " " << fixed << setprecision(3) << abc.dientich(a, b, c) << endl;
        }
        else {
            cout << "INVALID" << endl;
        }
        --n;
    }
    return 0;
}
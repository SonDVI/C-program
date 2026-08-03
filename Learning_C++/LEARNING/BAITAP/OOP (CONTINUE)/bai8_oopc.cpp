#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <climits>
#include <cmath>
using namespace std;

class Point{
private:
    double x, y;
public:
    Point();
    Point(double, double);
    double chuvi(Point, Point);
    double dientich(Point, Point);
    double a_b(Point);
    double b_c(Point, Point);
    double a_c(Point);
    bool check(Point, Point);
    void show(Point, Point);
};

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::a_b(Point b) {
    double dx_ab = x - b.x;
    double dy_ab = y - b.y;
    return sqrt(dx_ab * dx_ab + dy_ab * dy_ab);
}



double Point::b_c(Point b, Point c) {
    double dx_bc = b.x - c.x;
    double dy_bc = b.y - c.y;
    return sqrt(dx_bc * dx_bc + dy_bc * dy_bc);
}

double Point::a_c(Point c) {
    double dx_ac = x - c.x;
    double dy_ac = y - c.y;
    return sqrt(dx_ac * dx_ac + dy_ac * dy_ac);
}
double Point::chuvi(Point b, Point c) {
    double ab = a_c(b);
    double bc = b_c(b, c);
    double ac = a_c(c);

    return ab + bc + ac;
}

double Point::dientich(Point b, Point c) {
    double ab = a_c(b);
    double bc = b_c(b, c);
    double ac = a_c(c);
    double p = chuvi(b, c) / 2;
    return sqrt(p * (p - ab) * (p - bc) * (p - ac));
}

bool Point::check(Point b, Point c) {
    double ab = a_c(b);
    double bc = b_c(b, c);
    double ac = a_c(c);
    if(ab + bc > ac && ab + ac > bc && bc + ac > ab) {
        return true;
    }
    return false;
}
void Point::show(Point b, Point c) {
    cout << fixed << setprecision(3) << chuvi(b, c) << " " << fixed << setprecision(3) << dientich(b, c) << endl;
}

int main() {
    int n; cin >> n;
    while(n) {
        double x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        Point a(x1, y1);
        Point b(x2, y2);
        Point c(x3, y3);
        if(a.check(b, c)) {
            a.show(b, c);
        }
        else {
            cout << "INVALID" << endl;
        }
        --n;
    }
    return 0;
}


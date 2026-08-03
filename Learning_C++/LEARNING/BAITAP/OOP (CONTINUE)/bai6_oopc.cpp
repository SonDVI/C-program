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
    double x,y;
public:
    Point();
    Point(double, double);
    double getDistance(Point);
};

Point::Point(double x, double y) {
    this->x = x;
    this->y = y;
}

double Point::getDistance(Point b) {
    double dx = x - b.x;
    double dy = y - b.y;
    double distance;
    return distance = sqrt(dx * dx + dy * dy);
}

int main() {
    int n; cin >> n;
    while(n) {
        double x1, y1; cin >> x1 >> y1;
        double x2, y2; cin >> x2 >> y2;
        Point a(x1, y1);
        Point b(x2, y2);

        cout << fixed << setprecision(4) << a.getDistance(b) << endl;
        --n;
    }
    return 0;
}
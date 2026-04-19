#include <iostream>

using namespace std;

int main() {
    double a, b, c ,d;
    cin >> a >> b >> c >> d;
    double delta = (a + b + c * 2 + d * 3) / (1 + 1 + 2 + 3);
    if (delta >= 8.0) {
        cout << "GIOI\n";
    }
    else if (delta >= 6.5) {
        cout << "KHA\n";
    }
    else if (delta >= 5.0) {
        cout << "TRUNG BINH\n";
    }
    else if (delta >= 0 && delta < 5.0) {
        cout << "YEU\n";
    }
    else {
        cout << "Diem khong hop le\n";
    }
    return 0;
}
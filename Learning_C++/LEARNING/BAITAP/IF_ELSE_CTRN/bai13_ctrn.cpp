//Cho trước N ngày, hãy đổi N thành số năm, số tuần và số ngày. Biết rằng một năm có 365 ngày.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int years = n / 365;
    int week = (n % 365) / 7;
    int day = (n % 365) % 7;

    if (n >= 0) {
        if (n % 365 == 0) {
            
            cout << years << endl;
            cout << 0 << endl;
            cout << 0 << endl;
        }
        else if (n % 365 != 0 && (n % 365) % 7 == 0) {
            cout << years << endl;
            cout << week << endl;
            cout << 0 << endl;
        }
        else {
            cout << years << endl;
            cout << week << endl;
            cout << day << endl;
        }
    }
    else {
        cout << "INVALID" << endl;
    }
    return 0;
}
    
    

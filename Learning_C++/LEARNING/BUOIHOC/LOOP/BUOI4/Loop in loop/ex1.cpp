//      EX!

#include <iostream>
using namespace std;

int main() {
    int dem = 0;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j <= i; j++) {
            dem++;
        }
    }
    cout << dem << endl; // dem = 10
    return 0;
}
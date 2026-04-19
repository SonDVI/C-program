// Created by Admin on 6/17/2024.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char n;
    cin >> n;
    if ( n >= 'A' && n < 'Z') {
        n += 33;
        cout << n << endl;
    }
    else if ( n >= 'a' && n < 'z') {
        n += 1;
        cout << n << endl;
    }
    else if ( n == 'Z') {
        cout << 'a' << endl;
    }
    else if ( n == 'z') {
        cout << 'a' << endl;
    }
    else {

        cout << "INVALID" << endl;
    }
    return 0;
}
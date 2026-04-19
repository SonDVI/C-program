#include <iostream>
using namespace std;
using ll = long long;

void thaydoi(int *x) {
    *x = 1000;
}

int main() {
    int a = 10;
    thaydoi(&a);
    cout << a << endl;
}

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
using ll = long long;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b; cin >> a >> b;
    swap(a, b);
    cout << a << " " << b << endl;
}
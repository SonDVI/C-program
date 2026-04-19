
#include <iostream>
using namespace std;

void change_value(long long &n) {
    n = n * 28;
}

int main() {
    long long n; cin >> n;
    change_value(n);
    cout << n << endl;
}
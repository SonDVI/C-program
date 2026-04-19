#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long range = b - a + 1; // Tính độ dài của khoảng [a, b]
    cout << range << endl; // In ra độ dài của khoảng [a, b]
    return 0;

}
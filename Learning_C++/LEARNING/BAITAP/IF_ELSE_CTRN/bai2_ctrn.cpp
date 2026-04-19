//Cho ba số nguyên a , b và c, hãy tính S = a(b+c)+b(a+c).


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >>c;

    long long s = a * (b + c) + b * (a + c);

    cout << s << endl;
    return 0;
}
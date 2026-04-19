//Cho một số thực a, hãy tìm số nguyên gần a nhất. Trong trường hợp phần thực của a = 0.5 thì làm tròn lên

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    double a;
    cin >> a;
    double k = a - (long long)a;
    if (k != 0.5) {
        cout << round(a) << endl;
    }
    else {
        cout << (long long)a + 1 << endl;
    }
    return 0;
}
//Nhiệm vụ của bài toán này rất đơn giản, bạn hãy đổi giây sang giờ, phút, giây. Ví dụ 67s = 0 giờ, 1 phút, 7 giây.


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << n / 3600 << "h :" << " " << n % 3600 / 60 << "m :" << " " << n % 3600 % 60 << "s" << endl;
    return 0;
}
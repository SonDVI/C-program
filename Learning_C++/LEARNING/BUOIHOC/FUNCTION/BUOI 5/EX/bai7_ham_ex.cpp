#include <iostream>
using namespace std;
using ll = long long;

bool check(long long n) {
    long long sum = 0;
    int digit = 0;
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    if (sum % 10 == 8) {
        return true;
    }
    else {
        return false;
    }
    //return sum % 10 == 8; // có thể viết gọn như này, nhưng sẽ khó đọc hơn, vì vậy nên viết đầy đủ như trên để dễ đọc hơn.
}

int main() {
    ll a; cin >> a;
    if (check(a)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
//O(sqrt(n))
bool nt(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}
//O(1) + O(log(n)).
bool tongcsnt(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    for (int i = 2; i <= sqrt(sum); i++) {
        if (sum % i == 0) {
            return false;
        }
    }
    return sum > 1;
}
//O(log(n))
bool cnst(int n) {
    while (n > 0) {
        int cs = n % 10;
        if (cs != 2 && cs != 3 && cs != 5 && cs != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int a, b; cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++) {
        if (cnst(i) && tongcsnt(i) && nt(i)) {// tranh tran.
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}
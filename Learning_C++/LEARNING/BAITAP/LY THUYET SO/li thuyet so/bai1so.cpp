//Kiểm tra một số nguyên không âm N có phải là số nguyên tố hay không?

//Số nguyên tố là số nguyên dương chỉ có 2 ước là 1 và chính nó. Số 0, 1 không phải là số nguyên tố
#include <iostream>
#include <cmath>

using namespace std;

bool nt(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; cin >> n;
    if (nt(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
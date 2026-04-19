//Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N.
#include <iostream>
#include <cmath>
using ll = long long;
using namespace std;

int tongso(int n) {
    int digit = 0;
    int sum = 0;
    while (n > 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

bool snt(int n) {
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int thuasont(int n) {
    int dem = 0;
    int sum = 0;
    while (n % 2 == 0) {
        sum += 2;
        n /= 2;
    }


    for (int i = 3; i * i <= n; i += 2) {
        int demle = 0;
        while (n % i == 0) {
            sum += tongso(i);
            n /= i;
        }
    }

    if (n > 1) {
        sum += tongso(n);
    }
    return sum;
}


int main() {
    int n; cin >> n;
    if (thuasont(n) == tongso(n) && !(snt(n))) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
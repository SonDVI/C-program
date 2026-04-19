/*Cho số tự nhiên N, bạn hãy xác định xem N có phải là một lũy thừa với cơ số 7 hay không ?

Ví dụ số 49 là lũy thừa cơ số 7 với số mũ 2.*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool luythuacoso7(ll n) {

    while(n % 7 == 0) {
        n /= 7;
    }
    return n == 1;
}

int main() {
    ll n; cin >> n;
    if (luythuacoso7(n)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }
    return 0;
}
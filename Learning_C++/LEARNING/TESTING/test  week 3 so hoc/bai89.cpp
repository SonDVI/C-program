/*Cho số nguyên dương N, nhiệm vụ của bạn là hãy tính tích các số nguyên tố từ 1 tới N sau đó chia dư kết quả cho số 10^9 + 7 (1000000007).*/
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
bool nto(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}
int main() {
    int n; cin >> n;
    ll tich = 1;
    for (int i = 1; i <= n; i++) {
        if(nto(i)) {
            tich = (tich * i) % 1000000007;
        }
    }
    cout << tich << endl;
    return 0;
}
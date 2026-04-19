/*Cho dãy số Tribonacci được định nghĩa :

F[1] = 0

F[2] = 1

F[3] = 1

F[n] = F[n - 1] + F[n - 2] + F[n - 3] với n >= 4

Một số đầu tiên trong dãy : 0 1 1 2 4 7 13...

Nhiệm vụ của bạn là hãy in ra số thứ n trong dãy số Tribonacci sau khi chia dư cho 1000000007 (10^9 + 7)

Đầu vào
Dòng 1 là số bộ test T

T dòng tiếp theo mỗi dòng là 1 số nguyên dương n*/
#include <iostream>
using namespace std;
using ll = long long;
ll F[1000001];
const ll mod = 1e9 + 7;
int main() {
    int t; cin >> t;
    F[1] = 0;
    F[2] = 1;
    F[3] = 1;

    for(int i = 4; i < 1000001; i++) {
        F[i] = F[i- 1] % mod + F[i- 2] % mod + F[i- 3] % mod;
        F[i] %= mod;
    }
    int n = 0;
    for(int i = 1; i <= t; i++) {
        cin >> n;
        cout << F[n] << endl;
    }
    
}
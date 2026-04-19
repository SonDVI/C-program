//Cho số nguyên dương N, bạn hãy tính tích N số nguyên tố đầu tiên, sau đó đem tích này chia dư cho 10^9 + 7 (1000000007).
#include <iostream>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; (ll)i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int N;
    cin >> N;

    ll result = 1;
    int count = 0;
    int num = 2;

    while (count < N) {
        if (isPrime(num)) {
            result = result * num % MOD;
            count++;
        }
        num++;
    }

    cout << result << endl;
}
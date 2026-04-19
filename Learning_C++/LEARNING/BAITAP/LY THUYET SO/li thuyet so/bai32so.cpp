//Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. Ví dụ n = 28, k = 3 ta có kết quả là 7 vì 28 = 2x2x7.
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n, k; cin >> n >> k;
    
    ll count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while(n % i == 0) {
                count++;
                if(k == count) {
                    cout << i << endl;
                    return 0;
                }
                n /= i;
            }
        }
    }
    if (n > 1) count++;
    if (k > count) {
        cout << -1 << endl;
    }
    else if (k == count) {
        cout << n << endl;
    }

    
    return 0;
}
/*     ÁP DỤNG SÀNG SỐ NGUYÊN TỐ     (THUẬT TOÁN ERATOSTHENES)
    (https://blog.28tech.com.vn/sang-so-nguyen-to)
    
    
            MẢNG DÁNH DẤU
    (https://blog.28tech.com.vn/c-mang-danh-dau)
    
    
    
    */
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int prime[10000001];

void sang() {
    for (int i = 0; i <= 10000000; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++) {
        if(prime[i]) {
            for(int j = i * i; j <= 10000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}
bool max(int n) {
    int last_digit = n % 10;
    int res = n;
    while(res != 0) {
        int digit = res % 10;
        if (digit > last_digit) {
            return false;
        }
        res /= 10;
    }
    return true;
}

int main() {
    int n; cin >> n;
    sang();
    int dem = 0;
    for (int i = 0; i <= n; i++) {
        if (max(i) && prime[i]) {
            cout << i << " ";
            dem++;
        }
    }
    cout << endl;
    cout << dem << endl;
    return 0;

}

/*
        ĐẾM SỐ ƯỚC CỦA N
    - THÔNG THƯỜNG NẾU CODE :


        int n; cin >> n;
        int dem = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                dem++;
                }
            }
        }

    - Độ phức tạp của thuật toán sẽ là O(n), nên nếu n > 10^8 thì thuật toán sẽ mất nhiều thời gian để thực thi.

    --> Vì vậy ta sẽ cải tiến thuật toán có độ phức tạp O(n) --> O(sqrt(n)) như sau:

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n; cin >> n;
    int dem = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { 
            // Xét các ước i <= sqrt(n)
            dem++;
            if (i != n / i) {
                // Khi đó n / i sẽ ra số ước còn lại > sqrt(n) vì bản chất n cấu tạo từ tích các ước của nó.
                dem++;
            }
        }
    }
    cout << dem;
// n = a * b --> a <= sqrt(n) và b >= sqrt(n) hoặc a >= sqrt(n) và b <= sqrt(n). Vì vậy ta chỉ cần xét các ước a <= sqrt(n) là đủ để đếm được số lượng ước của n. Nếu a > sqrt(n) và b >  sqrt(n) thì a * b > n ( vô lí ) -> đpcm.


//tonguoc
    cout << endl;
    int res = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) { 
            // Xét các ước i <= sqrt(n)
            res += i;
            if (i != n / i) {
                // Khi đó n / i sẽ ra số ước còn lại > sqrt(n) vì bản chất n cấu tạo từ tích các ước của nó.
                res += n / i;
            }
        }
    }
    cout << res;
}
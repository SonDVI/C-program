/*Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. Cho một số nguyên dương N, kiểm tra xem n có phải là số hoàn hảo hay không.*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

/*
        CÁCH NÀY CHỈ DÙNG CHO N TỪ 1 -> 10^9. CÒN VỚI N ĐẾN TẬN 10^18 HAY TO HƠN TA CÙNG EUCLID- EULER. 
        (https://blog.28tech.com.vn/c-so-hoan-hao)
- Để kiểm tra số hoàn hảo bạn có thể sử dụng code ở mục 1, tuy nhiên nó chỉ phù hợp khi số N bạn cần kiểm tra ≤ 1012. Trong trường hợp cần kiểm tra số N lên tới 1018 thì code trên chạy rất lâu mới ra kết quả. 

    >>Bạn thử viết hàm kiểm tra số hoàn hảo như mục 1 với số long long và thử chạy với  N = 1018 để kiểm tra.

    >>Phương pháp tối ưu hơn để kiểm tra số hoàn hảo đó là sử dụng định lý Euclid - Euler. Định lý này phát biểu như sau

    >>Nếu p là số nguyên tố và 2p - 1 cũng là số nguyên tố thì : 2p-1 * (2p - 1) sẽ là một số hoàn hảo.

    >>Nhận thấy tích 2p-1 * (2p - 1) ~ 2^2p sẽ phải lên tới 9.1018 ~ 2^63 => 2p ~ 63 nên bạn chỉ cần duyệt p tới 32, 33 là đủ rồi.

int main() {
    ll n; cin >> n;
    ll sum = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }


    if (sum - n == n) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO"  << endl;
    }
}*/

bool check(ll n) {
    for (ll i = 2; i * i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int is_perfect (ll n) {
    for (int p = 1; p <= 33; p++) {
        if(check(p)) {
            ll temp1 = pow(2, p) - 1;
            if (check(temp1)) {
                ll temp2 = pow(2, p - 1);
                if (temp1 * temp2 == n) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main() {
    ll n; cin >> n;
    if (is_perfect(n)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
//Tèo yêu thích thu gọn các chữ số của 1 số, ban đầu Tèo cộng tổng tất cả các chữ số của N lại, sau đó nếu tổng này vẫn có từ 2 chữ số trở lên, Tèo sẽ tiếp tục thực hiện công việc này cho tới khi nó còn 1 chữ số. Nhiệm vụ của bạn là tìm số có 1 chữ số đó. Ví dụ N = 123456 => 21 => 3
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    long long sum = 0;
    long long new_sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    while (sum >= 10) {
        new_sum = 0;
        while (sum != 0) {
            new_sum += sum % 10;
            sum /= 10;
        }
        sum = new_sum;
    }
    cout << sum << endl;
}

//digital root : tổng các chữ số của một số nguyên dương, sau đó tiếp tục cộng các chữ số của kết quả cho đến khi chỉ còn một chữ số duy nhất. CT : n % 9;
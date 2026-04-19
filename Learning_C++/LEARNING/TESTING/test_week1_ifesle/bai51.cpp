//Ở bài trước chắc bạn cũng đã search google được công thức tổng tự nhiên liên tiếp từ 1 tới N, bây giờ bạn hãy dùng kiến thức đó để giải quyết bài toán sau : Cho số nguyên không âm N, hãy tính tổng các bội số của 28 mà nhỏ hơn hoặc bằng N.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    long long sum_28 = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 28 == 0) {
            sum_28 += (long long)i;
        }
        
    }
    cout << sum_28 << endl;
    return 0;
}

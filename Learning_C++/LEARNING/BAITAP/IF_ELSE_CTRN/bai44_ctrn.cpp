/*Cho N hãy tìm đáp án của những câu hỏi sau :

1.Tổng các số từ 1 đến N
2.Tổng bình phương các số từ 1 đến N
3.Số lượng các số chia hết cho 3 từ 1 đến N
4.Tổng các số chia hết cho 3 từ 1 đến N*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    long long sum = 0;
    long long sum2 = 0;
    long long sum3 = 0;
    long long dem3 = 0;
    for (int i = 1; i <= n; i++) {
        sum += (long long)i;
        sum2 += (long long)i * i;
        if (i % 3 == 0) {
            dem3++;
            sum3 += (long long)i;
        }
    }
    cout << sum << endl;
    cout << sum2 << endl;
    cout << dem3 << endl;
    cout << sum3 << endl;
    return 0;

}
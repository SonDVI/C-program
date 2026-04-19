/*
Cho một số nguyên dương n, hãy biểu diễn n dưới dạng tổng của các số nguyên tố sao cho số lượng số hạng trong tổng là lớn nhất có thể.

Gợi ý : N chẵn => biểu diễn dưới toàn số 2, N lẻ thì biểu diễn dưới các số 2 thêm vào 1 số 3 ở cuối. Vì 2 và 3 là 2 số nguyên tố nhỏ nhất
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int dem = 0;
    int temp = 0;
    if (n == 0 || n == 1) {
        cout << -1 << endl;
        return 0;
    }
    if (n == 3) {
        cout << 1 << endl;
        cout << 3 << " ";
        return 0;
    }
    
    if (n % 2 == 0) {
        while (n != temp ) {
            temp += 2;
            dem ++;
        }
        cout << dem << endl;
        for (int i = 1; i <= dem; i++) {
            cout << 2 << " ";
        }

    }
    else {
        temp += 3;
        while (n != temp) {
            temp += 2;
            dem ++;
        }
        cout << dem + 1 << endl;
        for (int i = 1; i <= dem; i++) {
            cout << 2 << " ";
        }
         cout << 3 << endl;
        
    }
    return 0;
}
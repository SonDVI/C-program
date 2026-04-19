//Năm nhuận là năm chia hết cho 400 hoặc (chia hết cho 4 và không chia hết cho 100). Nhập vào N là một năm và kiểm tra xem N có phải là năm nhuận hay không?
// 1 <= N <= 5000
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if (N % 400 == 0 || (N % 4 == 0 && N % 100 !=0)) {
        cout << "YES\n";
    
    }
    else {
        cout << "NO\n";

    }
    return 0;
}
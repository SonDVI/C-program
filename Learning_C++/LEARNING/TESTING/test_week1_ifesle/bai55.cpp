//Cho bạn biểu thức dạng AXB trong đó A, B là 2 số nguyên không âm và X là một ký tự tương ứng với toán tử +, -, *, / và %. Bạn hãy in ra kết quả của biểu thức trên, nếu là phép chia thì bạn chỉ cần in ra kết quả của phép chia nguyên.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long a, b;
    char x;
    cin >> a >> x >> b;
    if (a >= 0 && b >= 0) {
        switch(x) {
            case '+' :
                cout << a + b << endl;
                break;
            case '-' :
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            case '%':
                cout << a % b << endl;
                break;  
        }
    }
   return 0;
}
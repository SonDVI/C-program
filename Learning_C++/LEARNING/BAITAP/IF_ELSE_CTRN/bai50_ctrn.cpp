/*Trong tiếng Anh có tất cả 5 nguyên âm là : u, e, o, a, i

28Tech cung cấp cho bạn 1 ký tự, nếu ký tự đó là nguyên âm (in hoa hoặc in thường) thì bạn hãy in ra dạng in hoa của ký tự đó còn nếu nó không phải là nguyên âm thì bạn hãy in ra mã ASCII của nó.*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    char n; cin >> n;

    if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u' || n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U') {
        cout << (char)toupper(n) << endl;
    }
    else {
        cout << (int)n << endl;
    }
    return 0;
}
//Cho kí tự c, nếu kí tự c là chữ cái in thường thì chuyển nó thành chữ cái in hoa tương ứng và ngược lại nếu c là chữ cái in hoa thì chuyển nó thành chữ cái in thường tương ứng. Trường hợp kí tự nhập vào không phải là chữ cái thì không thay đổi nó.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char n;
    cin >> n;
    if (isalpha(n)) {
        if (isupper(n)) {
            cout << (char)tolower(n) << endl;
        }
        else if (islower(n)) {
            cout << (char)toupper(n) << endl;
        }
    }
    else {
        cout << n << endl;
    }
    return 0;
    
}
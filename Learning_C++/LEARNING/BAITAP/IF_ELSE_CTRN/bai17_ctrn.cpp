//Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào là chữ cái in hoa, in thường, chữ số hay kí tự đặc biệt (các kí tự không phải là chữ cái và chữ số)
//Nếu c là chữ cái in hoa in ra "UPPER". Nếu c là chữ cái in thường in ra "LOWER". Nếu c là chữ số in ra "DIGIT". Nếu c là kí tự đặc biệt in ra "SPECIAL".
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char n;
    cin >> n;

    if (n >= 'A' && n <= 'Z') {
        cout << "UPPER" << endl;
    }
    
    else if (n >= 'a' && n <= 'z') {
        cout << "LOWER" << endl;
    }

    else if (n >= '0' && n <= '9') {
        cout << "DIGIT" << endl;
    }

    else if ((n >= 33 && n <= 47) || (n >= 58 && n <= 64) || (n >= 91 && n <= 96) || (n >= 123 && n <= 126)) {
        cout << "SPECIAL" << endl;
    }

    else {
        cout << "INVALID" << endl;
    }

    return 0;
}
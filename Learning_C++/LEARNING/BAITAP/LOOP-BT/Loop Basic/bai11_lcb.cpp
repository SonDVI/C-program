//Cho N kí tự được nhập từ bàn phím, bạn hãy đếm xem trong dãy ký tự đã nhập có bao nhiêu ký tự in thường, in hoa, chữ số và ký tự đặc biệt(ko phải là chữ và số).


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int demlower = 0;
    int demupper = 0;
    int demdigit = 0;
    int demother = 0;
    for (int i = 1; i <= n; i++) {
        char c; cin >> c;
        if (islower(c)) {
            demlower++;
        }
        else if (isupper(c)) {
            demupper++;
        }
        else if (isdigit(c)) {
            demdigit++;
        }
        else {
            demother++;
        }

    }
    cout << demlower << " " << demupper << " " << demdigit << " " << demother << endl;
    
}
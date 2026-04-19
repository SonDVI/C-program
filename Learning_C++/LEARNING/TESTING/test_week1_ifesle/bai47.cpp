//Cho số tự nhiên N, 28tech coi số N là số đẹp nếu chữ số hàng đơn vị và chữ số hàng chục của nó có cùng tính chất chẵn lẻ, tức là cũng chẵn hoặc cùng lẻ. Bạn hãy xác định xem số N có phải là số đẹp hay không, nếu có in 28tech, ngược lại in 29tech.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    int don_vi = n % 10;
    int chuc = (n / 10) % 10;
    if ((chuc % 2 == 0 && don_vi % 2 == 0) || (chuc % 2 != 0 && don_vi % 2 != 0)) {
        cout << "28tech" << endl;
    }
    else {
        cout << "29tech" << endl;
    }

    return 0;
}
//Viết chương trình đếm xem trong đoạn giữa 2 số a và b có bao nhiêu số là số nguyên tố và tất cả các chữ số của nó cũng là số nguyên tố.


#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
//O(logn)
bool csnt(int n) {
    int dem = 0;
    int demn = 0;
    while (n != 0) {
        int diggit = n % 10;
        demn++;
        if (diggit == 2 || diggit == 3 || diggit == 5 || diggit == 7) {
            dem++;
        }
        n /= 10;

    }
    return dem == demn;
}
//O(sqrt(n))
bool sont(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n > 1;
}

int main() {
    int a, b; cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++) {
        if (csnt(i) && sont(i)) { // Phải đẩy hàm nào có tỉ lệ sai cao hơn để tối ưu thời gian. Vì khi hàm if check csnt(i) ( tỉ lệ sai nhiều hơn ) nếu sai thì sẽ không cần check sont(i) nữa. Nếu check sont(i) trước thì sẽ phải (tỉ lệ đúng cao hơn nhiều )check csnt(i) dù nó có thể sai.
            dem++;
        }
    }
    cout << dem << endl;

    return 0;
}
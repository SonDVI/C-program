/*
Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó.

Hãy liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương a, b cho .

Gợi ý : Có 1 thừa số nguyên tố có số mũ >= 2 là thỏa mãn

*/
#include <iostream> 
#include <cmath>
using namespace std;
using ll = long long;

bool check(int n) {
    int dem2  = 0;
    while (n % 2 == 0) {
        dem2++;
        n /= 2;
        if (dem2 >= 2) {
            return true;
        }
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        int demle = 0;
        while (n % i == 0) {
            demle++;
            n /= i;
            if (demle >= 2) {
                return true;
            }
        } 
    }
    return false;
}

int main() {
    int a, b; cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (check(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
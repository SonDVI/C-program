/*
Một số được coi là số đẹp khi nếu nó chia hết cho một số nguyên tố nào đó thì cũng phải chia hết cho bình phương của số nguyên tố đó. Hãy liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

Gợi ý : Bài này thì số thỏa mãn phải đảm bảo tất cả các thừa số nguyên tố có số mũ >= 2

*/

#include <iostream> 
#include <cmath>
using namespace std;
using ll = long long;

bool check(int n) {
    
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int dem = 0;
            while(n % i == 0) {
                dem++;
                n /= i;  
            }
            if (dem < 2) {
                return false;
            }
        }
    }
    if (n != 1) {
        return false;
    }

    return true;
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

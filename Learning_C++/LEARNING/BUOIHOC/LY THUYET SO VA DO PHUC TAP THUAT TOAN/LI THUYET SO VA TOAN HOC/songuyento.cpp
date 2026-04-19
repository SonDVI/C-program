/*
        Số nguyên tố là số nguyên dương có đúng 2 ước là 1 và chính nó  (trừ 0 và 1). Ví dụ: 2, 3, 5, 7, 11, 13, ...
*/

//O(canN)
#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool nt2(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        // vì n chỉ có 2 ước 1 và chính nó.
        if (n % i == 0) {
            //nếu có thêm ước nào nữa thì sẽ return false luôn.
            return false;
        }
    }
    return true; //return n > 1;
}
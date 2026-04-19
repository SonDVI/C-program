/*
        Số chính phương là số khai căn ra thì nó là số nguyên. Ví dụ: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, ...
    - Cách 1: Ta có thể sử dụng hàm sqrt() số n, sau đó gán int vào sqrt(n) lấy phần nguyên, sau đó bình phương phần nguyên đó xem nó có bằng n hay không. Nếu bằng thì n là số chính phương, ngược lại thì n không phải là số chính phương.
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

bool cp(ll n) {
    int can = sqrt(n);
    return 1ll * can * can == n;
}
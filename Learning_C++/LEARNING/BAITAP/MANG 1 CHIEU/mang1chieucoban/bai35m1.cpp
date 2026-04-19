/*Cho mảng A[] gồm N phần tử là các số nguyên, bạn hãy thực hiện phép tính cộng hoặc trừ N số nguyên này theo hướng dẫn. Bạn được cấp 1 mảng B[] gồm N - 1 phần tử đại diện cho N - 1 phép toán giữa N phần tử ban đầu trong mảng, trong đó 1 tương ứng với phép cộng và 2 tương ứng với phép trừ.

Ví dụ : A[] = {1, 2, 3, 4, 5} và B[] = {1, 1, 2, 1} ta sẽ tính giá trị của mảng A[] = 1 + 2 + 3 - 4 + 5*/
#include <iostream>
using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 1;
    int x;
    int res = a[0];
    while(cin >> x) {
        if(x == 1) {
            res += a[i];
            ++i;
        }
        else {
            res -= a[i];
            ++i;
        }
    }
    cout << res << endl;
    return 0;
}
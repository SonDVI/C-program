/*Vector cũng như một kiểu dữ liệu bình thường, vì thế bạn có thể viết 1 hàm có tham số là vector hay 1 hàm trả về vector. Cho một vector chứa N số nguyên, bạn hãy viết hàm trả về 1 vector chứa các số nguyên tố trong dãy số đó. Bạn phải code tuân theo khuôn mẫu sau*/
#include <bits/stdc++.h>
using namespace std;

bool so_nt(int n) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return n > 1;
}

vector<int> prime_list(vector<int> v) {
    vector<int> prime;
    for(int i = 0; i < v.size(); i++) {
        if(so_nt(v[i])) {
            prime.push_back(v[i]);
        }
    }
    return prime;
}

int main() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> res = prime_list(v);

    for(auto x : res) {
        cout << x << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;

int F(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return F(n - 1) + F(n - 2);
}
int F1(int n) {
    if(n == 0) return 1;
    if(n == 1) return 2;
    if(n == 2) return 3;
    return F1(n - 1) + 2 * F1(n - 2) + F1(n - 3);
}
int cnt = 0;
int C(int n, int k) {
    ++cnt;
    if(k == 0 || n == k) {
        return 1;
    }
    return C(n - 1, k - 1) + C(n - 1, k);

}


int main() {
    F(5);
    F1(5);//13 lời gọi đệ quy
    cout << C(5, 3) << endl; //=10
    cout << cnt << endl;// =19
}
//Nếu rơi vào trường hợp đệ quy phức tạp hơn sẽ khó quan sát bộ nhớ stack. Khi sử dụng đệ quy có thể dùng cây đệ quy để mô tả.  
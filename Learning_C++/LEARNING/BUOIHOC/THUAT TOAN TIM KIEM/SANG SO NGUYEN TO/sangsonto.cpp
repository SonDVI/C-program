/*
                            SÀNG SỐ NGUYÊN TỐ
    - dùng để tối ưu bài toán liên quan đến số nguyên tố O(Nsqrt(n)) --> O(NloglogN);
    - dựa vào mảnh đánh dấu
*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int p[1000001];
int maxn = 1000000; // sàng tới 1M

//B1 : coi tat ca cac phan tu deu la so nguyen to
void sieve() {
    for(int i = 0; i <= maxn; i++) {
        p[i] = 1;
    }
    //B2 : sang
    /*Nếu 1 số là bội của 1 số nguyên tố khác thì nó không phải là số nguyên tố*/
    p[0] = 0; p[1] = 0;

    for(int i = 2; i <= sqrt(maxn); i++) { // một số tự nhiên n luôn được viết bởi hai số a * b -> a < căn n --> đi loại các hợp số.
        if(p[i] == 1) {
            //sinh ra tất cả các bội của i <= maxn;
            for(int j = i * i; j <= maxn; j += i) { //lí do tại sao lại là bắt đầu từ i^2 : bởi các số nguyên tố trước đó đã loại các bội của i < i^2 --> tránh nhiều vòng lặp hơn.
                p[j] = 0;
            }
        }
    }
}




int main() {
    sieve();
    for(int i = 0; i <= 1000; i++) {
        if(p[i] == 1) cout << i << " ";
    }
    return 0;
}
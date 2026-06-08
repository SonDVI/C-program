/*Cho mảng A[] gồm N phần tử và số nguyên K, bạn hãy đếm xem trong mảng có bao nhiêu cặp phần tử A[i], A[j] với i khác j mà có độ chênh lệnh giữa chúng bằng K.

Gợi ý : Sort mảng A[], duyệt qua từng chỉ số i trong mảng, với mỗi chỉ số i tìm vị trí đầu tiên và vị trí cuối cùng của A[i] + K để đếm số cặp phần tử có thể kết hợp với A[i] để tạo thành cặp có chênh lệnh bằng K.

Chú ý : Trường hợp k = 0 bạn có thể đếm 1 cặp nhiều lần nếu tìm kiếm từ đầu dãy.*/
#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main() {
    int n, k; cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    if(k != 0) {
        ll dem = 0;
        for(int i = 0; i < n; i++) {
            auto it = lower_bound(a, a + n, a[i] + k);
            auto it2 = upper_bound(a, a + n, a[i] + k);
            if(it != a + n && it2 != a) {
                --it2;
                dem += (it2 - a) - (it - a) + 1;
            }
        }
        cout << dem << endl;
    }
    else {
        ll dem = 0;
        int i = 0;
        while(i < n){
            // Tìm vị trí cuối cùng của nhóm a[i]
            int j = (int)(upper_bound(a, a + n, a[i]) - a); 
            long long group = j - i; // số phần tử trong nhóm
            dem += group * (group - 1) / 2;
            i = j; // nhảy sang nhóm tiếp theo
        }
        cout << dem << endl;
    }
    return 0;
}
/*Cho N kiện hàng được đánh số từ 1 tới N, kiện hàng thứ i có khối lượng là A[i], mỗi thùng container có thể chứa được những kiện hàng với khối lượng tối đa là S.

Bạn sẽ lần lượt nhặt các kiện hàng từ 1 tới N và đưa và các thùng container, hãy cho biết số lượng thùng container tối thiểu cần sử dụng để đựng được hết N kiện hàng.

Ví dụ các kiện hàng lần lượt là [3, 2, 1, 5, 8, 4, 2, 8] và S = 10 thì sẽ cần tối thiểu 5 container, các container lần lượt chứa [3, 2, 1], [5], [8], [4, 2], [8].

Gợi ý : Áp dụng giải thuật tham lam : Khai báo biến tong = 0, sau đó duyệt mảng và cộng dồn A[i] vào tong, nếu tong > S thì tăng số thùng container lên và reset biến tong = A[i] để xét container mới chứa bắt đầu chứa A[i]*/
#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    ll s; cin >> s;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int tong = 0;
    int container = 0;
    for(int i = 0; i < n; i++) {
        tong += a[i];
        if(tong > s) {
            ++container;
            tong = a[i];
        }
    }
    if(tong > 0) ++container;
    cout << container << endl;
}
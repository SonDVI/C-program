/*

            BÀI TOÁN SẮP XẾP CÔNG VIỆC SAO CHO KHÔNG GIAO NHAU VỀ MẶT THỜI GIAN 

    - CÔNG VIỆC NÀO CÓ THỜI GIAN KẾT THÚC SỚM --> THÌ LÀM TRƯỚC --> sắp xếp thời gian kết thức theo thự tự tăng dần, rồi lưu biến kết thúc của thời gian kết thúc công việc đầu tiền, đem so sánh với thời gian bắt đầu công việc thứ 2:

        +)nếu kt1 > batdau2 thì bỏ công việc 2.
        +)nếu kt1 <batdau2 thì ta sẽ làm.







-Ca sĩ nổi tiếng Lệ Rơi vừa nhận được các lời mời lưu diễn của n đoàn ca nhạc. Đoàn thứ i mời lưu diễn từ ngày a[i] đến ngày b[i] (a[i], b[i] là các số nguyên, a[i] ≤ b[i]). Tuy nhiên tại một thời điểm, Lệ Rơi chỉ có thể tham gia hát cho một đoàn duy nhất mà thôi. Với mong muốn đem lời ca tiếng hát của mình đến nhiều khán giả nhất, Lệ Rơi quyết định sẽ chọn tham gia nhiều đoàn nhất có thể. Bạn hãy tính thử xem Lệ Rơi nên chọn tham gia những đoàn nào để số lượng đoàn là nhiều nhất mà không bị trùng nhau về mặt thời gian.
*/
#include <bits/stdc++.h>
using namespace std;
bool cmprt(pair<int, int> x, pair<int, int> y) {
    return x.second < y.second;
}
int main() {
    int n; cin >> n;
    pair<int, int> a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n, cmprt);

    int cnt = 1;
    int kt= a[0].second;
    for(int i = 1; i < n; i++) {
        if(a[i].first > kt) {
            ++cnt;
            kt = a[i].second;
        }
    }
    cout << cnt << endl;
    return 0;
}
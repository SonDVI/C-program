/*      
        tìm max, min trong mảng;

    PHƯƠNG PHÁP:
        - MAX = GIÁ TRỊ ĐẦU;
        - a[i] > max --> max = a[i];


        - MIN = GIÁ TRỊ ĐẦU;
        - a[i] < min --> min = a[i];
*/

#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_val = INT_MIN; //int_min : số int nhỏ nhất : ~ -2 tỷ; khởi tạo int_min để duyệt được thằng a[0].
    int min_val = INT_MAX;//int_max : số int lớn nhất : ~ 2 tỷ; khởi tạo int_max để duyệt được thằng a[0].

    //KHÔNG phải lúc nào cũng khởi tạo như trên, tùy theo range Ai của đề bài.
    for(int i = 0; i < n; i++) {
        max_val = max(max_val, a[i]);
        min_val = min(min_val, a[i]);
    }

    cout << max_val << " " << min_val << endl;
}

//28Tech cho bạn 1 mảng toàn số 0 và 1, bạn hãy in ra độ dài của các dãy con toàn số 0 liên tiếp và toàn số 1 liên tiếp.

//Ví dụ : mảng A[] = {1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0} thì có 3 dãy con số 1 liên tiếp có độ dài là 3, 1, 2 và 3 dãy con số 0 liên tiếp có độ dài là 2 1 2
#include <iostream>
#include <climits>
using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int run1[10001]; int run0[10001];
    int i = 0;
    int cnt0 = 0;
    int cnt1 = 0;
    while(i < n) {
        int val = a[i];
        int len = 0;
        while(i < n && a[i] == val) { //check xem nếu hai số gần nhau bằng nhau thì ++len
            len++;
            i++; //nếu thỏa mãn tiếp tục cộng.
        }
        if(val == 0) run0[cnt0++] = len; //trong trường hợp value = 0 thì run0 sẽ lưu độ dài của đoạn liên tiếp 00 sau đó tự cộng thêm ô để lưu 1 length khác.
        else run1[cnt1++] = len;
    }

    for(int j = 0; j < cnt1; j++) {
        cout << run1[j] << " ";
    }
    cout << endl;
    for(int j = 0; j < cnt0; j++) {
        cout << run0[j] << " ";
    }
    return 0;
}
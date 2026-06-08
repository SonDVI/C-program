/*Bitcoin là đồng tiền mã hóa lớn nhất từng tồn tại, trong mạng lưới của bitcoin bạn có thể gửi đồng tiền bitcoin của mình tới người khác thông qua địa chỉ ví của họ. Địa chỉ ví là một chuỗi ký tự tương tự như email hay số tài khoản ngân hàng của bạn. Khi biết địa chỉ của một người bạn có thể gửi bitcoin cho họ mà không ai có thể ngăn cản được. Bây giờ bạn được cung cấp thông tin về địa chỉ ví bitcoin và tên người sở hữu nó, sau đó là các giao dịch gửi tiền bitcoin giữa các địa chỉ này. Tuy nhiên việc in ra địa chỉ ví này gửi bitcoin cho địa chỉ ví khác quá khó truy vết nên bạn cần hiển thị tên người gửi thay vì hiển thị địa chỉ.

Ví dụ : địa chỉ ví của Satoshi Nakamoto là 1A1zP1eP5QGefi2DMPTfTL5SLmv7DivfNa còn địa chỉ ví của 28Tech là 3E97AjYaCq9QYnfFMtBCYiCEsN956Rvpj2 thì khi giao dịch từ địa chỉ 1A1zP1eP5QGefi2DMPTfTL5SLmv7DivfNa gửi 3 bitcoin đến địa chỉ 3E97AjYaCq9QYnfFMtBCYiCEsN956Rvpj2 bạn cần hiển thị thành Satoshi Nakamoto send 3 bitcoin to 28Tech

Lưu ý rằng 1 người có thể sử hữu nhiều địa chỉ ví bitcoin khác nhau.

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    map<string, string> mp;
    map<string, int> mp2;
    while(n--) {
        string name, wallet;
        getline(cin, name);
        getline(cin, wallet);
        mp[wallet] = name;
        mp2[wallet] = 1;
    }
    int t; cin >> t;
    while(t--) {
        string x, y; cin >> x >> y;
        int amount; cin >> amount;
        string name1;
        string name2;

        if(mp2[x] == 1) {
            name1 = mp[x];
        }
        else {
            name1 = "Unknown wallet";
        }
        if(mp2[y] == 1) {
            name2 = mp[y];
        }
        else {
            name2 = "Unknown wallet";
        }
        cout << name1 << " send " << amount << " bitcoin to " << name2 << endl;
    }
    return 0;
}
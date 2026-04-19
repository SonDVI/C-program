//Cho 1 dãy gồm N kí tự, hãy đếm số lượng chữ cái xuất hiện trong N kí tự này, ngoài ra nếu bạn gặp các kí tự số, bạn có nhiệm vụ cộng các chữ số này vào với nhau và in ra tổng. Chú ý, '0', '1', '2'.... '9' có mã ASCII từ 48,49,50,..57, vậy nếu bạn gặp kí tự '2' làm sao bạn có thể cộng vào tổng số 2 mà ko dùng tới if else? Hướng dẫn các nhập input :


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    int demalpha = 0;
    int tongso = 0;
    for (int i = 0; i < n; i++) {
        char kitu;
        cin >> kitu;
        if (isalpha(kitu)) {
            demalpha ++;

        }
        else if (isdigit(kitu)) {
            tongso += (int)(kitu - '0');
        }

    }
    cout << demalpha << "\n" << tongso << endl;
    return 0;
}
/*
            Độ phức tạp của logarit:

    - Độ phức tạp của logarit thường rất nhỏ vì nếu ta có logarit cơ số a của n = b thì b ^n = a. Điều này có nghĩa là logarit tăng rất chậm khi n tăng lên, vì vậy thuật toán có độ phức tạp logarit thường rất hiệu quả cho các bài toán lớn.



    - Khi tính toán độ phức tạp của thuật toán
    có độ phức tạp là O(log n), ta không quan tâm đến cơ số vì chênh lệnh của chúng không đáng kể ( giữ giá trị đại diện là log n).

*/

#include <iostream>
using namespace std;

int main() {
    //Độ phức tạp : O(log n)
    int n = 1e9;
    for (int i = 1; i <= n; i *= 2) {
        cout << i << endl;
    }
    
    //Độ phức tạp : O(log n)
    n = 123456789;
    int dem = 0;
    while(n > 0) {
        dem++;
        n /= 10;
    }
}
//          Typedef
//typedef là một từ khóa trong C++ được sử dụng để tạo ra một tên mới cho một kiểu dữ liệu đã tồn tại. Điều này giúp làm cho mã nguồn trở nên dễ đọc hơn và có thể giúp giảm sự phức tạp của các kiểu dữ liệu phức tạp.
//USING : cho lập trình thi đấu và thuật toán.
#include <iostream>
using namespace std;    

typedef long long ll; // tạo một tên mới ll để đại diện cho kiểu dữ liệu long long. Bây giờ, bạn có thể sử dụng ll thay vì long long trong phần còn lại của mã nguồn.
typedef int songuyen;

int main() {
    ll a = 2;
    cout << a << endl;
}
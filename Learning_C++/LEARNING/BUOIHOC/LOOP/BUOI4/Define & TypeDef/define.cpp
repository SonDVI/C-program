//           Define
// Define : tương tự typedef cũng có thể sử dụng để định nghĩa tên mới cho kiểu dữ liệu, ngoài ra nó còn định nghĩa được cho cả những giá trị hoặc cú pháp.
//USING : cho lập trình thi đấu và thuật toán.
#include <iostream>
using namespace std;

#define ll long long // tạo một tên mới ll để đại diện cho kiểu dữ liệu long long. Bây giờ, bạn có thể sử dụng ll thay vì long long trong phần còn lại của mã nguồn.
#define MAX 10000000000
#define MOD 1000000007
#define PI 3.14159265358979323846
#define GOOD "28tech.com.vn"
#define OK cout << "OK" << endl
#define FOR(i, a, b) for (int i = a; i <= b; i++)
int main() {
    ll a = 2;
    cout << a << endl;
    cout << MAX << endl;
    cout << MOD << endl;
    cout << PI << endl;
    cout << GOOD << endl;
    OK;
    FOR(i, 1, 100) {
        cout << i << " ";
    }

}
#include <iostream>
#include <iomanip> // Thư viện này cung cấp các hàm và đối tượng để định dạng đầu ra, bao gồm setprecision để thiết lập số chữ số thập phân hiển thị.
using namespace std;

int main() {
    cout << "HOC LAP TRINH C++" << endl; // endl: end line, dùng để xuống dòng và làm mới bộ đệm xuất. Nó tương đương với việc sử dụng "\n" để xuống dòng, nhưng endl còn có tác dụng làm mới bộ đệm xuất, đảm bảo rằng tất cả dữ liệu đã được gửi đến thiết bị đầu ra ngay lập tức. Trong khi "\n" chỉ đơn thuần là ký tự xuống dòng mà không làm mới bộ đệm.

    int a = 200, b = 300, c = 400;
    cout << a << " " << b << " " << c << endl;

    char d = '@';
    cout << d << endl;

    bool check = true;
    cout << check << endl;

    
    double n = 1239.12345678;
    cout << fixed << setprecision(2) << n << endl; // fixed: hiển thị số thập phân theo định dạng cố định, setprecision(2): chỉ hiển thị 2 chữ số sau dấu thập phân.
    

    return 0;
}
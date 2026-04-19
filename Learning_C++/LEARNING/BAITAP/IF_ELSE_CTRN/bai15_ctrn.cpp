//28tech muốn nấu một món súp. Để làm điều đó, anh ta cần mua chính xác n lít nước. Chỉ có hai loại chai nước trong cửa hàng gần đó - chai 1 lít và chai 2 lít. Có vô số chai của hai loại này trong cửa hàng. Chai loại thứ nhất có gía a burles và chai loại thứ hai có giá tương ứng b burles. 28tech muốn chi càng ít tiền càng tốt. Nhiệm vụ của bạn là tìm ra số tiền tối thiểu (bằng burles) 28tech cần mua chính xác n lít nước ở cửa hàng gần đó nếu chai loại thứ nhất có giá a burles và chai loại thứ hai có giá b burles.
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    if (a * 2 > b) {
        cout << n / 2 * b + ( n % 2) * a << endl;
    }
    else {
        cout << n * a << endl;
    }

    return 0;
    
}
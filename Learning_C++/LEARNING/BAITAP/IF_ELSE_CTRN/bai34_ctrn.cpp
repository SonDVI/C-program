//Có năm người chơi một trò chơi gọi là "Sự hào phóng". Mỗi người đưa ra một số lượng tiền xu khác không b như một lần đặt cược ban đầu. Sau khi tất cả người chơi đặt cược tiền xu của họ, thao tác sau được lặp lại nhiều lần: một đồng xu được chuyển từ người chơi này sang người chơi khác. Nhiệm vụ của bạn là viết một chương trình có thể, với số lượng xu mà mỗi người chơi có vào cuối trò chơi, xác định kích thước b của lần đặt cược ban đầu hoặc chỉ ra rằng kết quả của trò chơi không thể đạt được.

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int c1, c2 ,c3 ,c4 ,c5;
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    int b = c1 + c2 + c3 + c4 + c5;

    if (b % 5 == 0 && b > 0) {
        cout << b / 5 << endl;
    }
    else {
        cout << -1 << endl;
    }
    return 0;
}
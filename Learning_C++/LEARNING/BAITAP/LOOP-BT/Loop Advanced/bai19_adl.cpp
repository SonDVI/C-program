/*
28techland là vùng đất mà cư dân cực kì thích uống bia, vì thế để tăng số lượng bia bán ra các cửa hàng bia ở đây đưa ra khuyến mại như sau : Cứ 3 vỏ chai bia sẽ được đổi một chai bia mới. Biết rằng ở 28techland, mỗi chai bia có giá 28 xu, nhiệm vụ của bạn là xác định với N xu cho trước, bạn có thể mua được tối đa bao nhiêu chai bia tính cả việc đổi thưởng bằng vỏ chai?

Bạn phải trả lời được câu hỏi này rồi hãy bắt tay vào code : Nếu có 7 vỏ chai thì đổi được bao nhiêu chai bia tất cả, nếu câu trả lời là 2 thì xem lại.

Gợi ý : Đầu tiên bạn tính số chai bia mua bằng tiền (N/28), sau đó dùng vòng lặp while lặp đi lặp lại chừng nào số vỏ bia còn >= 3
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n;
    int so_chai = n / 28;
    int vo_chai = so_chai;

    while (vo_chai >= 3) {
        so_chai += vo_chai / 3;
        vo_chai = vo_chai / 3 + vo_chai % 3;
    }
    cout << so_chai << endl;
    return 0;
}
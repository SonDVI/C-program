//Bạn có số lượng xu không giới hạn với các giá trị 1,2,3,……n (từ 1 tới n). Bạn muốn chọn một số bộ tiền có tổng giá trị S. Nó được phép có nhiều đồng tiền có cùng giá trị trong tập hợp. Số lượng đồng xu tối thiểu cần thiết để có được tổng S là bao nhiêu?
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, s;

    cin >> n >> s;

    if (s % n == 0) {
        cout << s / n << endl; // vi S chia cho số lớn nhất có giá trị n là tối ưu nhất nên ta chia cho n.
    
    }
    else {
        cout << s / n + 1 << endl;// nếu sau khi chia S cho N mà còn dư, ta suy luận vì giá trị của xu chạy từ 1 -> N nên phần dư của S / N sẽ chắc chắn luôn nằm trong khoảng từ 1 -> N - 1 => ta cần thêm 1 đồng xu nữa để đạt được tổng S.
    }
    return 0;
}
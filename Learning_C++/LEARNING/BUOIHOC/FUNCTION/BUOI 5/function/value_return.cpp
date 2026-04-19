//GIÁ TRỊ TRẢ VỀ CỦA HÀM

#include <iostream>
using namespace std;
// parameter: tham số
int func1() {
    return 500; // Giá trị trả về của hàm, có thể là một hằng số, một biến, một biểu thức, hoặc một hàm khác.
}

int func2(int x) { // Hàm kiểu gì thì trả về kiểu giá trị đó.
    return 1000 + x;
}

int main() {
    cout << func2(50) << endl;
     // Hàm có thể được sử dụng trong các biểu thức, hoặc gán cho một biến, hoặc được sử dụng làm đối số cho một hàm khác. cout << hàm trả về giá trị của hàm đó, sau đó in ra màn hình. Còn nếu gọi hàm sẽ không in ra giá trị trả về.
     func2(50);
    int k = func2(500);//
    cout << k << endl;
    return 0;
}
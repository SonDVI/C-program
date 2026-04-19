#include <iostream>
using namespace std;

using ll = long long;

int main() {

    int n = 1000;
    cout << &n << endl; // địa chỉ của n, trong interger chứa 4 byte thi byte đầu dành cho địa chỉ của nó, &n để cho mình biết địa chỉ của nó.

    //int dc= &n; bị lỗi vì dc là interger còn &n là 1 địa chỉ

    /*
    &n : kiểu con trỏ, int*
    dc : int*;
    */

    int *dc = &n; // biến dc trỏ đến n; lưu địa chỉ của n vào bộ nhớ máy tính.

    cout << dc << endl; // địa chỉ
    cout << *dc << endl; // toán tử giải tham chiếu đến giá trị n;

    *dc = 500; // n = 500;
    cout << n << endl;

    int *ptr = NULL; //nullptr(> C++11), là con trỏ không chứa địa chỉ nào
    

}
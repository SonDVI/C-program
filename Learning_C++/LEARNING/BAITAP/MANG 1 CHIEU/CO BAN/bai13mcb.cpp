/*Cho 1 loạt các số nguyên không biết trước số lượng phần tử, bạn hãy in ra các số trong input theo thứ tự ngược lại.

Hướng dẫn cách nhập các số không biết trước số lượng phần tử

Copy
int x;
while(cin >> x){
    //xử lý x nhập được
}
Bài này các bạn cần tạo 1 cái mảng, sau đó trong vòng while mỗi lần nhập được 1 số thì lưu nó vào a[n] sau đó tăng n lên, với n được khởi tạo ban đầu bằng 0. Vậy thì sau vòng while n sẽ là số lượng phần tử trong mảng luôn.

*/
#include <iostream>
using namespace std;
int a[50001];
int main() {
    int n = 0;
    int x; 
    while(cin >> x) {
        a[n] = x;
        n++;
    }

    for(int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}
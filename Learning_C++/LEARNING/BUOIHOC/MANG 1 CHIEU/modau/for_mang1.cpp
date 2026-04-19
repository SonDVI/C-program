#include <iostream>
using namespace std;
using ll = long long;
int main() {
    int a[50] = {3, 2, 5, 8, 1, 4};
    for(int x : a) {
        cout << x << " "; // gán giá trị của a sang x; Sẽ in tất cả các giá trị của mảng a ( kể cả ô rỗng = 0).
    }
    for(int &x : a) {
        x = 100;
        cout << x << " "; // gán giá trị của a sang x; Muốn gán ngược lại từ x sang a thì phải tham chiếu.
    }
    
}
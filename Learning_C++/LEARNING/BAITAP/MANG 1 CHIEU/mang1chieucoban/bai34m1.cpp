//Cho mảng A[] gồm N phần tử, nhiệm vụ của bạn là xóa các phần tử trong mảng sao cho không có 2 phần tử liền kề có giá trị giống nhau.

//Ví dụ : mảng A[] = {1, 1, 2, 2, 2, 3, 3, 2, 1, 4} sau khi xóa sẽ được A[] = {1, 2, 3, 2, 1, 4}
#include <iostream>
using namespace std;
using ll = long long;
int a[1001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] != a[i + 1]) cout << a[i] << " ";

    }
    return 0;


    
}
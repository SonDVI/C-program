/*Cho mảng A[] gồm N phần tử, , bạn hãy in

Dòng 1 : số đầu tiên và số cuối cùng trong mảng

Dòng 2 : số thứ 2 và số thứ 2 từ cuối về trong mảng

Dòng 3 : In ra phần tử đứng giữa trong mảng nếu số lượng phần tử trong mảng là số lẻ, nếu số lượng phần tử trong mảng là số chẵn thì in ra 28tech.*/

#include <iostream>
using namespace std;
using ll = long long;


int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << a[0] << " " << a[n - 1] << endl;
    cout << a[1] << " " << a[n - 2] << endl;
    
    if(n % 2 == 0) {
        cout << "28tech" << endl;
    }
    else {
        cout << a[n / 2] << endl;
    }
    return 0;
}
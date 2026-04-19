/*Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, nhiệm vụ của bạn là tìm kiếm xem X có xuất hiện trong mảng hay không, nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, ngược lại in ra "NOT FOUND" nếu X không xuất hiện.*/
#include <iostream>
using namespace std;

int main() {
    int n, x; cin >> n >> x;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            for(int j = i; j < n - 1; j++) {
                a[j] = a[j + 1]; //lùi các số phía sau số xóa về 1 đơn vị ( nghĩa là số tiếp của số bị xóa sẽ bị số sau nó đè vào) --> xóa.
                
                
            }
            found = true;
            break; // break sau khi xóa số x đầu tiên xuất hiện trong mảng.
        }
    }

    if(found) {
        --n;
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    else {
        cout << "NOT FOUND" << endl;
    }


    
    return 0;

}
#include <iostream>
using namespace std;

using ll = long long;


/*các phép di chuyển con trỏ : ++,--,+=,-=*/
int main() {
    int a[] = {3, 2, 5, 1, 4, 9, 6, 8, 10};// nếu là long long thì cách đều nhau 8 bytes
    cout << a << endl; //in ra địa chỉ của thằng đâu tiên
    for(int i = 0; i < 9; i++) {
        //cout << &a[i] << endl;

        cout << (a + i) << endl;
        //vì là mảng interger nên nó sẽ cách nhau bytes
    }
    //a + i <=> &a[i]
    //*(a + i) <=> a[i]


    /* a + i là con trỏ trỏ tới a[i]*/


    int *b = a + 5; // trỏ đến a5.

    cout << *b << endl; // 9
    *b = 1000;
    ++b; // di chuyển con trỏ b sang số 6
    cout << *b << endl;
    --b;
    b += 3; // dich trỏ 3 ô, nhảy sang trái 3 ô, trỏ vào thằng  10
    cout << *b << endl;
    for(int x : a) {
        cout << x << " ";
    }
}
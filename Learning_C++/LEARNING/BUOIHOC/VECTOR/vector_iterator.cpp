/*
            VECTOR ITERATOR ( GẦN GIỐNG VỚI CON TRỎ TRONG MẢNG 1 CHIỀU)

    -   1 2 3 4 5   


        -> begin() : iterator trỏ đến thằng đầu tiên trong vector
        -> end(): iterator trỏ dến phần tử đầu tiên đằng sau phân tử cuối cùng.

        +) REVERSE :
        ->  rend() : iterator trỏ đến phần tử đầu tiên đằng trước phân tử đầu.
        -> rbegin() : iterator trỏ đến phần tử cuối cùng trong vector.

*/
// v.begin() + i là iterator trỏ đến v[i].
//có thể sử dụng các phép dịch chuyển  ++,--,+=, -= như ở bên trỏ.
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    vector<int> v = {3, 1, 2, 5, 4, 7, 10, 9, 8, 6};

    vector<int>::iterator it = v.end();
    vector<int>::iterator it1 = v.begin() + 4;
    cout << *it << endl; //giá trị rác vì là giá trị đằng sau phần tử cuối.

    cout << *it1 << endl;// trỏ đến thằng số 4.

    for(vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++) {
        cout << *it2 << " "; //chay từ đầu đến cuối.
    }

    for(vector<int>::reverse_iterator it3 = v.rbegin(); it3 != v.rend(); it3++) {
        cout << *it3 << " "; // duyệt ngược từ cuối đến đầu.
    }
}   
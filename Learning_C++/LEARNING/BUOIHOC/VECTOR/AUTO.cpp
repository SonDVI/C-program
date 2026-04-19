/*
            Kiểu dữ Liệu AUTO:
    - auto : tự suy luận ra kiểu dữ liệu phù hợp cho x, y, z, t; tùy vào giá trị mình gán vào nó để nó suy ngược lại. KHẢ NĂNG THÍCH ỨNG.
*/

#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main(){
    vector<int> v = {3, 2, 5, 1, 4, 9, 10, 3, 7};
    auto x = 10;
    auto y = '@';
    auto z = true;
    auto t = 100.5;
    auto it = v.begin(); // => it : vector<int>::iterator;

    //ÁP DỤNG ĐỂ SỬ DỤNG CHO CÁC KIỂU DỮ LIỆU DÀI NHƯ VECTOR ITERATOR.

    //nếu khai báo auto x; mà không có biến gán sẽ bị lỗi
}
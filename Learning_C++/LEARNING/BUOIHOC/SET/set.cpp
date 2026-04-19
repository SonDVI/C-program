/*
            CẤU TRÚC DỮ LIỆU SET
    - SET là một container cực kì mạnh mẽ trong thư viện STL của ngôn ngữ lập trình c++, sử dung thành thạo set là một kỹ năng cơ bản mà bạn cần đạt được . Set sẽ giúp code của các bạn trở nên tối ưu và ngắn gọn hơn rất nhiều:

        +) SET là một container mà mỗi phần tử trong đó là duy nhất, tức là sẽ không có 2 phân tử có giá trị giống nhau tồn tại trong set.

        +)Các phần tử trong SET được sắp xếp theo thứ tự tâng dần về giá trị số và tăng dần về thứ tự từ điển nếu là xâu kí tự hoặc ký tự.
        
    
*/

#include <iostream>
#include <set>
using namespace std;
using ll = long long;

//insert(x) : O(logN) : thêm phân tử vào trong set.
//set<int, greater<kieudulieu> thamso :  giảm dần
//có hàm clear() và empty().
//find(x) : O(logN) => iterator : tìm kiếm
//count(x) : O(logN) : đếm, có thì trả về 1, không có thì trả về 0;
//erase(x) : O(logN) : xóa số trong set.
int main() {
    set<int> se;
    se.insert(3); //3 
    se.insert(2);// 2 3
    se.insert(1);// 1 2 3
    se.insert(5);// 1 2 3 5
    se.insert(5);// 1 2 3 5
    se.insert(3);// 1 2 3 5
    se.insert(2);// 1 2 3 5
//set không có chỉ số như mảng hay vector.
    cout << se.size() << endl;

    for(int x : se) {
        cout << x << " ";
    }
    return 0;

    for(set<int>::iterator it = se.begin(); it != se.end(); it++) {
        cout << *it << " ";
    }// iterator chỉ có cộng cộng, và trừ trừ

    auto it = se.find(5);
    if(it == se.end()) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

}
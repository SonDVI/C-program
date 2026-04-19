/*
                VECTOR
    - Là một cấu trúc dữ liệu có thể tự do điểu chỉnh kích thước, dễ chỉnh sửa hơn.
    - đây là một lớp có sẵn phục vụ cho việc coding trở nên dễ dàng

*/
#include <iostream>
#include <vector>
using namespace std;
// push_back(x) : them so vao cuoi vector, 0(1)
/*- pop_back() : xóa phần tử ở cuối vector
    v : rỗng => segmentation fault.
*/

//empty() : kiểm tra vector có rỗng hay không, trả về true nếu rỗng, false nếu không rỗng

//size() : trả về số lượng phần tử trong vector

//clear() : xóa tất cả phần tử trong vector, vector trở về trạng thái rỗng

//insert(p, x) : chèn phần tử x vào vị trí p, các phần tử sau p sẽ được dịch sang phải, độ phức tạp O(n) --> insert chi nhan iterator o phan vi tri.

//erase(vị trí) : xóa phần tử ở vị trí trong vector, độ phức tạp O(n) --> vi tri o day phai la 1 iterator.


//Với vector V bạn có thể dùng hàm max element để tìm phần tử lớn nhất, min element để tìm phần tử nhỏ nhất, accumulate để tính tổng. Cú pháp (Đối với mảng các bạn dùng (a, a + n)) :


/*                  cout << *max_element(v.begin(), v.end());
                    cout << *min_element(v.begin(), v.end());
                    cout << accumulate(v.begin(), v.end(), 0); (0 o cuoi la kieu du lieu cho cac so ouput and input)
*/
void invector(vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}

void invector(vector<int> &v) {
    for(int i = 0; i < v.size(); i++) {
        v[i] *= 2; 
    }
}
// phải có tham chiếu để thay đổi trong trường hợp vector ở hàm.

vector<int> getVector() {
    vector<int> res = {1, 2, 3, 4};
    return res;
}// hàm trả về vector.
int main() {
    vector<int> v; // rỗng, vector thì lưu ở stack còn số lượng phần tử, phần tử được lưu ở heap.
    v.push_back(3);// 3
    v.push_back(4);// 3 4
    v.push_back(1);// 3 4 1
    v.push_back(5);// 3 4 1 5
    v.push_back(2);// 3 4 1 5 2
    cout << v.size() << endl; // so luong phan tu trong vector.
    for(int i = 0; i < (int)v.size(); i++) { // ép size về int vì size là số không âm, khi so sánh với i(interger) một số có thể âm, compiler sẽ cảnh báo.
        cout << v[i] << " "; // cách lưu trữ dữ liệu giống mảng ( có chỉ số bắt đầu từ 0 đến n - 1)
    }
    cout << endl;
    for(int x : v) {
        cout << x << " ";
    } // sài cái này để duyệt vector v cũng được.
}
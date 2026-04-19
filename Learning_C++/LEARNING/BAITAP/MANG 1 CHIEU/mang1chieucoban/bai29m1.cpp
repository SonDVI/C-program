//Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;
int danhdau[1000001] = {0};


int main() {
    int n; cin >> n;
    int a[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int k : a) {
        danhdau[k]++;
    }
    int kq = -1;
    for(int i = 0; i < 1000001; i++) {
        if(danhdau[i] > danhdau[kq]) { //chỉ cập nhật khi lớn hơn, vậy với trương hợp tần số đề bài bảo bằng nhau phải lấy min kq, thì code kia đã xử lí vì nó chạy từ lớn đến bé. Nên nếu giả sử danhdau[10] = danhdau [11] thì bài toán sẽ tự động lấy min tức là lấy thằng 10 vì "=" không thoải điều kiện để 11 lưu làm kq.
            kq = i;
        }
    }
    cout << kq << " " << danhdau[kq] << endl;

}
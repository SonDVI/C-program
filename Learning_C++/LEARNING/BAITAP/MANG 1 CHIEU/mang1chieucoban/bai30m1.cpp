//Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng
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
    for(int i = 0; i < n; i++) {
        if(danhdau[a[i]] > danhdau[kq]) { //se duyet theo thu tu cua a[n], khong can lo truong hop bang nhau ve mat so lan xuat hien.
            kq = a[i];
        }
    }

    cout << kq << " " << danhdau[kq] << endl;
    return 0;

}

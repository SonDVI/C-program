/*Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng kèm theo tần suất tương ứng, mỗi giá trị chỉ liệt kê một lần theo thứ tự xuất hiện*/
#include <iostream>
using namespace std;
int X[1001] ={0};
int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        X[a[i]]++;
    }


    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(!found) cout << a[i] << " " << X[a[i]] << endl;
    }
    return 0;
}
//Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần.
#include <iostream>
using namespace std;
int danhdau[1000001] ={0};

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int k : a) {
        danhdau[k]++;
    }

    for(int i = 0; i < n; i++) {
        bool found = false;
        for(int j = i - 1; j >= 0; j--) {
            if(a[i] == a[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            cout << a[i] << " " << danhdau[a[i]] << endl;
        }

    }
    return 0;
}
//Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. Chú ý 2 giá trị này có thể giống nhau


#include <iostream>
#include <climits>
using namespace std;
using ll = long long;

int main() {
    int n; cin >> n; 
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++) {
        max_val = max(max_val, a[i]);
    }
    int dem = 0;
    int max_val2 = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] - max_val == 0) {
            dem++;
        }
        else if (a[i] != max_val) {
            max_val2 = max(max_val2, a[i]);
        }
    }

    if(dem == 1) {
        cout << max_val << " " << max_val2 << endl;
    }
    else if(dem >= 2) {
        cout << max_val << " " << max_val << endl;
    }
    return 0;


}
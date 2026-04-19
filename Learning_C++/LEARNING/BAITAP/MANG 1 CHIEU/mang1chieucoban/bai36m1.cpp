//cho mảng số nguyên A[] gồm N phần tử, bạn hãy tìm giá trị nhỏ nhất trong mảng và giá trị lớn nhất trong mảng cũng như các vị trí xuất hiện của chúng
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

    int min_val = INT_MAX;
    int max_val = INT_MIN;
    for(int i = 0; i < n; i++) {
        min_val = min(min_val, a[i]);
        max_val = max(max_val, a[i]);
    }
    cout << min_val << endl;
    for(int i = 0; i < n; i++) {
        if(min_val == a[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << max_val << endl;
    for(int i = n - 1; i >= 0; i--) {
        if(max_val == a[i]) {
            cout << i << " ";
        }
    }
    return 0;
}
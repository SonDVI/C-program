//Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.
#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = INT_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++) {
            res = min(res, abs(a[i] - a[j]));
        }
    }
    cout << res << endl;
    return 0;
}
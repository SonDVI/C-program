//Cho mảng số nguyên A[] gồm N phần tử và số nguyên K, nhiệm vụ của bạn là tìm tổng của mọi dãy con liên tiếp cỡ K của mảng A[]
#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i <= n - k; i++) {
        int sum = 0;
        for(int j = i; j < k + i; j++) {
            sum += a[j];
        }
        cout << sum << " ";
    }
    return 0;
}
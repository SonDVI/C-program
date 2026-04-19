#include <bits/stdc++.h>
using namespace std;

bool nt(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n; cin >> n;
    int a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];

    // Prefix sum
    int prefix[1005] = {0};
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i-1] + a[i-1];

    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int sum = prefix[j+1] - prefix[i];
            if (nt(sum)) count++;
        }

    cout << count;
    return 0;
}                                                                                                                                           
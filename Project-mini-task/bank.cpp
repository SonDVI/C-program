#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int main() {
    long long n, m;
    cin >> n >> m;
    long long count = 0;
    for (long long i = n; i <= m; i++) {
        for (long long j = 1; j * j <= m; j++) {
            if (j * j == i) {
                count++;
            }
        }
    }
    long long to_hop = count * (count - 1) / 2;
    cout << to_hop << endl;

}
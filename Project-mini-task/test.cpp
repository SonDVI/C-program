#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  long long n;
  cin >> n;
  for (long long i = 1; i <= n; i++) {
    for (long long j = 1; j <= n; j++) {
      if ((i + j) % 2 == 0) {
        cout << "W";
      }
      else if ((i + j) % 2 == 1) {
        cout << "B";
      }
      else {
        cout << "error";

     }
    }
    cout << "\n";
  }
}
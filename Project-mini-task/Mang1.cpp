#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int count = 0;
  for (long long i = n; i <= m; i++) {
    for (long long j = 2; j * j <= m; j++) {
        if (j % i == 0) {
            count++;
        }
    }
  }
  
  if (count >= 3) {
    long long to_hop = count * (count - 1) * (count - 2) / 6;
    cout << to_hop << endl;
  }
  else {
    cout << "0\n";
  }
    
}
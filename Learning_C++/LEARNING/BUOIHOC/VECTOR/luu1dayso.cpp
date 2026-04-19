#include <iostream>
#include <vector>

using ll = long long;
using namespace std;

int main() {

    int n; cin >> n;
    vector<int> v;
    //vector<int> v(n); // int a[n];
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }


    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    for(int x : v) {
        cout << x << " ";
    }
}
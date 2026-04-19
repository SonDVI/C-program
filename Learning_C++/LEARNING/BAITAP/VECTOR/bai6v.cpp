#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
    
    cout << accumulate(v.begin(), v.end(), 0) << endl; //0 o cuoi la kieu du lieu cho cac so ouput and input

    return 0;
}
/*Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần và giảm dần.

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main() {
    vector<string> v;
    string s;
    while(cin >> s) {
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for(auto x : v) {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater());
    for(auto x : v) {
        cout << x << " ";
    }
    return 0;
}
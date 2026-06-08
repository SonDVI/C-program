/*Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách.

Thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, nếu 2 từ có cùng chiều dài thì từ nào có thứ tự từ điển nhỏ hơn sẽ được xếp trước.*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
bool cmp(string x, string y) {
    if(x.size() != y.size()) return x.size() < y.size();
    return x < y;
}
int main() {
    vector<string> v;
    string s;
    while(cin >> s) {
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    for(string x : v) {
        cout << x << " ";
    }
    return 0;
}
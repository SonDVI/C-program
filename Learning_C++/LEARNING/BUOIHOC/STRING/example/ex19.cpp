/*
Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách. Thực hiện đếm số lượng các từ khác nhau trong xâu mà không phân biệt hoa thường, ví dụ "28TecH" được coi là giống với từ "28teCH".

*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    set<string> v;
    string s;
    while(cin >> s) {
        for(char &x : s) x = tolower(x);
        v.insert(s);
    }
    cout << v.size() << endl;
    return 0;
    
}
/*Cho một xâu kí tự S chỉ bao gồm các kí tự là chữ cái và dấu cách. Hãy đếm số lượng từ khác nhau trong xâu S và in ra từ có thứ tự từ điển nhỏ nhất, lớn nhất trong xâu S.*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    getline(cin, word);
    stringstream ss(word);
    set<string> st;

    string s;

    while(ss >> s) {
        st.insert(s);
    }

    cout << st.size() << endl;
    cout << *st.begin() << " " << *st.rbegin() << endl;
    return 0;

}
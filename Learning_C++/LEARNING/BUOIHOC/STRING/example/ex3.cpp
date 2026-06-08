/*Cho một xâu kí tự S chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.

*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    string s;
    getline(cin, s);
    int tong = 0;

    for(char x : s) {
        if(isdigit(x)) tong += x - '0'; //- 48
    }
    cout << tong << endl;
}
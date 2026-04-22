/*Cho N kí tự được nhập từ bàn phím, bạn hãy thực hiện các yêu cầu sau

1. In ra kí tự có từ điển nhỏ nhất và tần suất xuất hiện của nó
2. In ra kí tự có từ điển lớn nhất và tần suất xuất hiện của nó
3. In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển tăng dần kèm tần suất của nó
4. In ra các kí tự xuất hiện trong N kí tự đã cho theo thứ tự từ điển giảm dần kèm tần suất của nó*/
#include <bits/stdc++.h>
#include <map>
#include <set>
using namespace std;

int main() {
    int n; cin >> n;
    vector<char> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    map<char, int> dem;

    for(int i = 0; i < n; i++) {
        dem[v[i]]++;
    }

    cout << v[0] << " " << dem[v[0]] << endl << endl;
    cout << v[n - 1] << " " << dem[v[n - 1]] << endl << endl;

    for(auto it = dem.begin(); it != dem.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    for(auto it = dem.rbegin(); it != dem.rend(); it++) {
        cout << it->first << " " << it->second << endl;
    }
}
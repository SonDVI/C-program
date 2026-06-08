#include <bits/stdc++.h>
using namespace std;

string reverse_data(string s) {
    stringstream ss(s);
    string ngay, thang , nam;
    getline(ss, ngay, '/');
    getline(ss, thang, '/');
    getline(ss, nam, '/');
    return nam + " " + thang + " " + ngay;
}

int main() {
    string x, y;
    cin >> x >> y;
    x = reverse_data(x);
    y = reverse_data(y);
    if(x < y) cout << "28tech\n";
    else if(x > y) cout << "29tech\n";
    else cout << "30tech\n";
}
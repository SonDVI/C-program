#include <bits/stdc++.h>

using namespace std;
using ll =long long;

char to_hex_char(int d) {
    if(d < 10) return '0' + d;
    else return 'a' + (d - 10);
}
vector<char> convert_number(long long n){
    vector<char> v;
    while(n != 0) {
        v.push_back(to_hex_char(n % 16));
        n /= 16;
    }
    reverse(v.begin(), v.end());
    return v;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> res = convert_number(n);
        for(char x : res){
            cout << x;
        }
        cout << endl;
    }
    return 0;
}



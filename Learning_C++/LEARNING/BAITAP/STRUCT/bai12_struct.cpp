#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>
using namespace std;

struct word{
    string data;
    int fre;
};

bool check(string a) {
    string temp;
    for(int i = a.size() - 1; i >= 0 ; i--) {
        temp += a[i];
    }
    if(temp == a) return true;
    return false;
}
void PRINT(word a) {
    cout << a.data << " " << a.fre << endl;
}
bool cmp(word a, word b) {
    if(a.fre != b.fre) return a.fre > b.fre;
    return a.data < b.data;
}
int main() {
    map<string, int> mp;

    string s;
    while(cin >> s) {
        mp[s]++;
    }

    vector<word> v;
    for(auto it : mp) {
        v.push_back({it.first, it.second});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v) {
        if(check(x.data)) {
            PRINT(x);
        }
    }
    return 0;
}
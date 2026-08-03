#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <climits>
#include <map>

using namespace std;

struct word{
    string number;
    int fre;
};

bool check_dx(string a) {
    string temp;
    for(int i = a.size() - 1; i >= 0; i--) {
        temp += a[i];
    }
    if(temp == a) return true;
    return false;
}

bool chan(string a) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] % 2 != 0) return false;
    }
    return true;
}

bool cmp(word a, word b) {
    return a.fre > b.fre;
}

void PRINT(word a) {
    cout << a.number << " " << a.fre << endl;
}
int main() {
    string s;
    map<string, int> mp;
    while(cin >> s) {
        mp[s]++;
    }
    vector<word> v;
    for(auto it : mp) {
        v.push_back({it.first, it.second});
    }
    stable_sort(v.begin(), v.end(), cmp);

    for(auto x : v) {
        if(check_dx(x.number) && chan(x.number)) {
            PRINT(x);
        }
    }
    return 0;
}